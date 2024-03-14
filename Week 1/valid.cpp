/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Yasmeen Hassan
Assignment: Lab2A

Checks if userInput is less than 0 or greater than 100, then continously asks to re-enter if condition is true.
*/
#include <iostream>
using namespace std;
int main()
{
        int userIn = 0;
        cout << "Please enter an integer: ";
        cin >> userIn;
        while ((userIn <= 0) || (userIn >= 100)) //condition operator sees if userIn is <= 0 or >= 100
        {
                cout << "Please re-enter: ";
                cin >> userIn;
        }
        cout << "Number squared is: " << (userIn*userIn) << endl; // prints out userIn squared

}
