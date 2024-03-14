/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Yasmeen Hassan
Assignment: Lab4A

Prints asterisks equal to height and width
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <climits>
using namespace std;

int main()
{
        int width, height;
        cout << "Input width :";
        cin >> width;
        cout << "Input height :";
        cin >> height;
        cout << endl;

        for (int row = 0; row < height; row++) //for height of box
        {
                for (int col = 0; col < width; col++) // for width of box
                {
                        cout << "*"; // outputs num of asterisks
                }
                cout << endl;
        }
}