/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Yasmeen Hassan
Assignment: Lab4E

Prints asterisks to make a upper triangle
*/

#include <iostream>
using namespace std;
int main()
{
    int side;
    cout << "Input side length: ";
    cin >> side;
    cout << endl;

    for (int row = 0; row < side; row ++)
    {
        for (int col = 0; col < row; col ++)
        {   
            cout << " "; //col < row then print spaces
        }
        for (int col = row; col < side; col++)
        {
            cout << "*";
        }
        cout << endl;     
    }
}
