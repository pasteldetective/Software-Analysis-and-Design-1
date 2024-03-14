/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab6D

Decrypts and encrypts user input
*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;


char shiftChar(char c, int rshift)
{
    //cout << c << " " << rshift << endl;
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

char unshiftChar(char c, int rshift)
{
    //cout << c << endl;
    if (c >= 'A' && c <= 'Z')
    {
        if ((c-rshift) < 'A')
        {
            //cout << int(c);
            c = c - rshift + 26;
        }
        else
        {
            c -= rshift;
        }
    }
    else if (c >= 'a' && c <= 'z')
    {
        if ((c - rshift) < 'a')
        {
            //cout << int(c);
            c = c - rshift + 26;
        }
        else
        {
            c -= rshift;
        }
    }
    //cout << c << " " << rshift << endl;
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

string decryptCaesar(string ciphertext, int rshift)
{
    for (int i = 0; i < ciphertext.length(); i++)
    {
        ciphertext.at(i) = unshiftChar(ciphertext.at(i),rshift);
        //cout << plaintext[i] << " " << (int)plaintext[i] << endl;
    }
    return ciphertext;
}

string encryptVigenere(string plaintext, string keyword)
{
    int counter = 0;
    //cout << keyword.length() - 1;
    for (int i = 0; i < plaintext.length(); i++)
    {
        if ( ((int)plaintext.at(i) >= 65 && (int)plaintext.at(i) <= 90) || ((int)plaintext.at(i) >= 97 && (int)plaintext.at(i) <= 122) )
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

string decryptVigenere(string ciphertext, string keyword)
{
    int counter = 0;
    //cout << keyword.length() - 1;
    for (int i = 0; i < ciphertext.length(); i++)
    {
        if ( ((int)ciphertext.at(i) >= 65 && (int)ciphertext.at(i) <= 90) || ((int)ciphertext.at(i) >= 97 && (int)ciphertext.at(i) <= 122) )
        {
            ciphertext.at(i) = unshiftChar(ciphertext.at(i), (int)keyword[counter] - 97);
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
    return ciphertext;
}

int main()
{
    string sentence, key;
    int shift;
    cout << "Enter plaintext: ";
    getline(cin, sentence);
    cout << "Enter shift: ";
    cin >> shift;
    string newsentence = encryptCaesar(sentence, shift);
    string decryptsentence = decryptCaesar(newsentence, shift);
    cout << "Ciphertext: " << newsentence << endl;
    cout << "Decrypted: " << decryptsentence << endl;
    cout << "Enter keyword: ";
    cin >> key;
    string newsentence2 = encryptVigenere(sentence,key);
    string decryptsentence2 = decryptVigenere(newsentence2, key);
    cout << "Ciphertext: " << newsentence2 << endl;
    cout << "Decrypted: " << decryptsentence2 << endl;
    //cout << sentence << " " << key << endl;
}