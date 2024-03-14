/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab6C

Decrypts and encrypts user input using vignere cipher
*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;


char shiftChar(char c, int rshift)
{
    cout << c << " " << rshift << endl;
    if (c >= 'A' && c <= 'Z')
    {
        if ((c+rshift) > 90)
        {
            c += rshift - 26;
        }
        else
        {
            c += rshift;
        }
    }
    else if (c >= 'a' && c <= 'z')
    {
        if ((c + rshift) > 'z')
        {
            c += rshift - 26;
        }
        else
        {
            c += rshift;
        }
    }
    //cout << c << endl;
    return c;
}

string encryptVigenere(string plaintext, string keyword)
{
    int counter = 0;
    //cout << keyword.length() - 1;
    for (int i = 0; i < plaintext.length(); i++)
    {
        if ( ((int)plaintext.at(i) >= 65 && (int)plaintext.at(i) <= 90) || ((int)plaintext.at(i) >= 97 && (int)plaintext.at(i) <= 122) ) // so only 'a-z' and 'A-Z' are included and excludes special character and num
        {
            plaintext.at(i) = shiftChar(plaintext.at(i), (int)keyword[counter] - 97);
            if (counter >= keyword.length() - 1)
            {
                counter = 0;
            }
            else
            {
                counter++;
                //cout << counter << endl;
            }
            //cout << keyword[counter] << " " << " *" << endl;
        }
        else
        {
            counter = counter;
        }
    }
    return plaintext;
}

int main()
{
    string sentence, key;
    cout << "Enter plaintext: ";
    getline(cin, sentence);
    cout << "Enter shift: ";
    cin >> key;
    //cout << sentence << " " << key << endl;
    string newsentence = encryptVigenere(sentence,key);
    cout << newsentence;
}

