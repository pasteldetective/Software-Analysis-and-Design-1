/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Tong Yi
Assignment: HW E2.10

User inputs gallons of gas, fuel efficiency per gallon, and price of gas per gallon. Program prints out cost per 100 miles, then how far car can go.

*/
#include <iostream>
using namespace std;
int main()
{
        int gallons;
        float efficiency,price;
        cout << "How many gallons of gas in tank: ";
        cin >> gallons;
        cout << "What is the fuel effiency of miles per gallon: ";
        cin >> efficiency;
        cout << "What is the price of gas per gallon: ";
        cin >> price;
        cout << (100/efficiency)*price << endl; // for 100 miles over effiency per miles per gallon times price
        cout << (gallons*efficiency) << endl; // efficiency * gallons to find how far the engine could run
        //cout << "It cost " << (price*100) << " per 100 miles and goes " << (gallons*efficiency) << endl;
}
