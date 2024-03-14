/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Tong Yi
Assignment: HW E.7

Program prints out three seperate names on different lines.

*/
#include <iostream>
using namespace std;
int main()
{
        string name1,name2,name3; //initializing strings name1,name2,name3
        cout << "Please enter a first name :";
        cin >> name1;
        cout << "Please enter a second name :";
        cin >> name2;
        cout << "Please enter a third name :";
        cin >> name3;
        cout << name1 << endl << name2 << endl << name3 << endl; //printing name1,name2,name3
}