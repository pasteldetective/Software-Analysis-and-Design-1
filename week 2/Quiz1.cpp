/*
Author: Jackie Yee
Course: CSCI 135
Instructor: Professor Yasmeen Hassan
Assignment: Quiz 1

user inputs number, program outputs 'I love C++ lines' to the amount user entered.

*/

#include <iostream>
using namespace std;

int main()
{
        int num;
        cout << "Enter a number: ";
        cin >> num;
        for (int i = 0; i < num; i++)
        {
                cout << "I love C++" << endl;
        }
}