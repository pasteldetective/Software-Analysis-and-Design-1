/*
Author: Jackie Yee
Course: CSCI-136
Instructor: Professor Hassan
Assignment: title, e.g., Lab9D

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();

        delete p;
        // assume that the poem p is not needed at this point

    }
}