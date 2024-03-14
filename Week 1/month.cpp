/*
Author: Jackie Yee
Course: CSCI 135
Instructor: Professor Yasmeen Hassan
Assignment: Lab 1D

Program briefly finds number of days in a specific year and month

*/
#include <iostream>
using namespace std;
int main()
{
        int year = 0; // initializing year as int
        int month = 0;
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter month: ";
        cin >> month;
        if (year % 4 != 0) // if year is not divisible by 0 it is common
        {
                if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) == (month == 10) == (month == 12)) // follows knuckle rule
                {
                        cout << "31 days" << endl;
                }
                else if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) // follows the gap
                {
                        cout << "30 days" << endl;
                }
                else
                {
                        cout << "28 days" << endl; // not leap year
                }
        }
        else if (year % 100 != 0)
        {
                if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) == (month == 10) == (month == 12))
                {
                        cout << "31 days" << endl;
                }
                else if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
                {
                        cout << "30 days" << endl;
                }
                else
                {
                        cout << "29 days" << endl; // leap year
                }
        }
        else if (year % 400 != 0)
        {
                if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) == (month == 10) == (month == 12))
                {
                        cout << "31 days" << endl;
                }
                else if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
                {
                        cout << "30 days" << endl;
                }
                else
                {
                        cout << "28 days" << endl;
                }
        }
        else
        {
                if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) == (month == 10) == (month == 12))
                {
                        cout << "31 days" << endl;
                }
                else if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
                {
                        cout << "30 days" << endl;
                }
                else
                {
                        cout << "29 days" << endl;
                }
        }
}

