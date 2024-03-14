/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Yasmeen Hassan
Assignment: Lab4C

Prints asterisks in shape of cross based on sum of size and is rol and col are equal
*/

#include <iostream>
using namespace std;

int main()
{
        int size, last;
        cout << "Input size: ";
        cin >> size;
        last = size - 1; // lasts makes it so the other asterisks in column and row are printed
        cout << endl;
        for (int i = 0; i < size; i++)
        {
                for (int j = 0; j < size; j++)
                {
                       
                        if (i == j || j == last - i) // if row and col are equal print
                        {
                                cout << "*";
                        }
                        else
                        {
                                cout << " "; // print space else
                        }
                }
                cout << endl;
        }
}
