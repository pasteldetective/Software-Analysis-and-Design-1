/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Tong Yi
Assignment: E6.8

compares array
*/

#include <iostream>

using namespace std;

bool equals(int a[], int a_size, int b[], int b_size)
{
    if (a_size == b_size)
    {
        for (int i = 0; i < a_size; i++)
        {
            if ( a[i] == b[i])
            {
                a[i] = b[i];
            }
            else
            {
                return false;
            }
        }
    }
    else
    {
        return false;
    }
    return true;
}