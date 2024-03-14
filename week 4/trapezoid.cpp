/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Yasmeen Hassan
Assignment: Lab4F

Prints asterisks to trapezoid
*/

#include <iostream>
using namespace std;
int main()
{
    int width, height;

    cout << "Input width: ";
    cin >> width;
    cout << endl;
    cout << "Input height: ";
    cin >> height;
    cout << endl;

    if (width % 2 == 0 && height > (width/2)) //sees if it can make a trapezoid
    {
        cout << "Impossible shape!" << endl;
    }
    else if (width % 2 != 0 && height > (width/2 +1)) // also sees if it can make a trapezoid
    {
        cout << "Impossible shape!" << endl;
    }
    else
    {
        int spaces = 0, stars = width;
        for (int i = 0; i < height; i++) //for loop to make trapezoid
        {
            for (int s = 0; s < spaces; s++)
            {
                cout << " ";
            }
            for (int j = 0; j < stars; j++)
            {
                cout << "*";
            }
            cout << endl;
            stars = stars - 2;
            spaces++;
        }
    }
}
