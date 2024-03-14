/*
Author: Jackie Yee
Course: CSCI 135
Instructor: Professor Yasmeen Hassan
Assignment: Project 1A

Program briefly sums up the numbers in a text file.

*/

#include <iostream>
using namespace std;

int main()
{
        int sum = 0; // initialize sum
        int x = 0;
        while(cin >> x)
        {
                //cout << x;
                sum += x;
        }
        cout << sum << endl; // returns sum
}