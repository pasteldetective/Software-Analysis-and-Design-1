/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Yasmeen Hassan
Assignment: Lab4D

Prints asterisks to form a lower triangle
*/

#include <iostream>
using namespace std;

int main()
{
        int side, i = 0; //init i = 0 to print empty space 
        cout << "Input side length: ";
        cin >> side;
        cout << endl;
        for (int row = 0; row <= side -1 ; row ++) 
        {
                for (int col = 0; col <= side -1; col ++)
                {
                        while (i <= row) //so while i is less than row, print asterisk
                        {
                                cout << "*";
                                i++;
                        }
                        cout << " "; //then print out remaining spaces
                }
                i = 0;
                cout << endl;
        }

}