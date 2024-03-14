/*
Author: Jackie Yee
Course: CSCI 135
Instructor: Professor Yasmeen Hassan
Assignment: Lab 1B

Program briefly finds the smaller of three integers given.

*/
#include <iostream>
using namespace std;
int main(){
        int numberOne = 0;
        int numberTwo = 0;
        int numberThree = 0;
        cout << "Enter the first number: " << endl;
        cin >> numberOne;
        cout << "Enter the second number: " << endl;
        cin >> numberTwo;
        cout << "Enter the third number: " << endl;
        cin >> numberThree;
        if((numberOne > numberThree) && (numberTwo > numberThree))
        {
                cout << "The smaller of the three is " << numberThree << endl; //checks which number is larger
        }
        else if((numberOne > numberTwo) && (numberTwo < numberThree))
        {
                cout << "The smaller of the three is " << numberTwo << endl; //checks which number is larger
        }
        else if((numberOne < numberTwo) && (numberOne < numberThree))
        {
                cout << "The smaller of the three is " << numberOne << endl; //checks which number is larger
        }
}


