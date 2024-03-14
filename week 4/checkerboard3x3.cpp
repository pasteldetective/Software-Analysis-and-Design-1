/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Yasmeen Hassan
Assignment: Lab4G

Prints asterisks to from 3x3 checkerboard
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

    for(int i = 0; i < height; i++) // for loop
    {
        for(int j = 0; j < width; j++) // for loop
        {
            if( (j/3) % 2 == (i / 3) % 2) // to create 3 by 3 checkboard
            {
                cout << '*';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }
}