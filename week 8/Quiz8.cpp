/*
Author: Jackie Yee
Course: CSCI-136
Instructor: 
Assignment: Lab 7A

program takes all indents out of a file
*/
#include <iostream>
using namespace std;

void remove_e(string & sentence)
{
    int i;
    string newSen;
    for (i = 0; i < sentence.size(); i++)
    {
        if (sentence[i] != 'e')
        {
            newSen += sentence[i];
        }
    }
    sentence = newSen;
}

int main()
{
    string userIn = "";
    cout << "Enter string: ";
    getline(cin, userIn);
    remove_e(userIn);
    
}