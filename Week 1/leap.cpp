/*
Author: Jackie Yee
Course: CSCI 135
Instructor: Professor Yasmeen Hassan
Assignment: Lab 1C

Program briefly finds the leap years given the input that users gives.

*/
#include <iostream>
using namespace std;
int main()
{
        int year = 0; // initializing year as int
        cout << "Enter year: ";
        cin >> year;
        if (year % 4 != 0) // if year is not divisible by 0 it is common
        {
                cout << "Common year" << endl;
        }
        else if (year % 100 != 0)
        {
                cout << "Leap year" << endl;
        }
        else if (year % 400 != 0)
        {
                cout << "Common year" << endl;
        }
        else
        {
                cout << "Leap year" << endl;
        }
}




