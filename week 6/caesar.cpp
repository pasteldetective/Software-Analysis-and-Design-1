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

char shiftChar(char c, int rshift)
{
    if (c >= 'A' && c <= 'Z')
    {
        if ((c+rshift) > 90)
        {
            c += rshift - 26; // if overcounts then subtract 26
        }
        else
        {
            c += rshift;
        }
    }
    else if (c >= 'a' && c <= 'z')
    {
        if ((c + rshift) > 'z') // if overcounts then subtract 26
        {
            c += rshift - 26;
        }
        else
        {
            c += rshift;
        }
    }
    return c;
}


string encryptCaesar(string plaintext, int rshift)
{
    for (int i = 0; i < plaintext.length(); i++)
    {
        plaintext.at(i) = shiftChar(plaintext.at(i),rshift);
        //cout << plaintext[i] << " " << (int)plaintext[i] << endl;
    }
    return plaintext;
}



int main()
{
    string sentence;
    int shift;
    cout << "Enter plaintext: ";
    getline(cin, sentence);
    cout << "Enter shift: ";
    cin >> shift;
    //cout << sentence << " " << shift << endl;
    string newsentence = encryptCaesar(sentence,shift);
    cout << newsentence;
}

