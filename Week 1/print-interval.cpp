/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Yasmeen Hassan
Assignment: Lab2B

Prints interval that user inputs from lower to higher - 1
*/
#include <iostream>
using namespace std;
int main()
{
        int L = 0;
        int U = 0;
        cout << "Please enter L: ";
        cin >> L;
        cout << "Please enter U: ";
        cin >> U;

        for(int i = L; i < U; i++) // condition i is lower and while lower than U, add 1
        {
                cout << i << endl; //inputs interval
        }
}
