/*
Author: Jackie Yee
Course: CSCI 135
Instructor: Professor Yasmeen Hassan
Assignment: Project 1B

Program briefly sums all numbers added or subtracted in formula.txt.

*/

#include <iostream>
using namespace std;

int main()
{
        int sum = 0, num; // initialize sum
        char y = '+';
        while((cin >> num))
        {
                if (y == '+')//iterates only if char is '-'
                {
                        sum += num;
                }
                else if (y == '-')
                {
                        sum -= num;
                }
                //box[rep] = x;
                //cout << box[rep] << endl;
                //rep++;
                cin >> y; // checks signs
        }
        cout << sum << endl;
}