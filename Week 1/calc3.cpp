/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Yasmeen Hassan
Assignment: Proj1D

prints squared if num is a ^ squared
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int num = 0, sum = 0;
    char sym, osym = '+';
    cin >> num;

    while (cin >> sym)
    {
        if (sym == '^')
        {
            num *= num;
            cin >> sym;
        }
        if (osym == '+') // add
        {
            sum += num;
        }
        else if (osym == '-') // sub
        {
            sum -= num;
        }
        osym = sym;
        cin >> num;

        if (osym == ';') // for ';' char stop
        {
            cout << sum << endl;
            sum = 0;
            osym = '+';
        }
    }
    return 0;
}