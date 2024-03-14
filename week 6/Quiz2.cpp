/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab6B

Decrypts and encrypts user input using caesar cipher
*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    string sentence;
    cout << "Enter a string: ";
    getline(cin, sentence);
    for (int i = 1; i <= sentence.length(); i++)
    {
        cout << sentence.substr(0, i) << endl;
    }
    for (int i = sentence.length() - 1; i < sentence.length(); i--)
    {
        cout << sentence.substr(0, i) << endl;
    }
}