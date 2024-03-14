/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Yasmeen Hassan
Assignment: 1C

reads multiple formulas
*/

#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    char sym;
    cin >> sum;

    while (cin >> sym >> num)
    {
        if (sym == '+') // add
        {
            sum += num;
        }
        else if (sym == '-') //subtract
        {
            sum -= num;
        }
        else if (sym == ';') // for ';' char stop
        {
            cout << sum << endl;
            sum = num;
        }
    }
    cout << sum << endl;
}


