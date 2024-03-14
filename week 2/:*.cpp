/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Yasmeen Hassan
Assignment: Lab2D

Does fibonacci sequence
*/
#include <iostream>
using namespace std;

int main()
{
        int index , value;
        int fib[60] = {};
        fib[0] = 0;
        fib[1] = 1;
        cout << fib[0] << endl << fib[1] << endl;
        for (int i = 2; i < 60; i++)
        {
                fib[i] = fib[i-1] + fib[i-2];
                cout << fib[i] << endl;
        } // it goes from relatively normal to negative numbers since the terminal couldn't handle the overflow of integers? 
        // or maybe it has to do with the limited size of an array?`


}