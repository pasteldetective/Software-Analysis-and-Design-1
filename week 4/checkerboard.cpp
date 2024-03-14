/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Yasmeen Hassan
Assignment: Lab4B

Prints asterisks based on odd and even height and width
*/

#include <iostream>
using namespace std;

int main()
{
        int width, height, sum;
        cout << "Input width :";
        cin >> width;
        cout << "Input height :";
        cin >> height;
        cout << endl;

        for (int row = 0; row < height; row++) 
        {

                for (int col = 0; col < width; col++)
                {
                        sum = col + row; // sums up the asterisks
                        if (sum % 2 == 0)
                        {
                                cout << "*"; //if sum of asterisks is even then print 
                        }
                        else
                        {
                                cout << " "; // else print space
                        }
                        sum = 0;
                }
                cout << endl;
        }
} 