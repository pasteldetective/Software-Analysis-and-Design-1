/*
Author: Jackie Yee
Course: CSCI-136
Instructor: 
Assignment: Lab 7A

program takes all indents out of a file
*/
#include <iostream>
using namespace std;

string removeLeadingSpaces(string line)
{
    int i;
    for (i = 0; i < line.size(); i++)
    {
        if (!isspace(line[i]))
        {
            break;
        }
    }
    return line.substr(i); // removes all spaces at beginning
}

int main()
{
    string line;
    while(getline(cin, line))
    {
        cout << removeLeadingSpaces(line) << endl;
    }
}