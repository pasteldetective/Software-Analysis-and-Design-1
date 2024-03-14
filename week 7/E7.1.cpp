/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Yasmeen Hassan
Assignment: E7.1

sorting 2
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void sort2(double* p, double* q) //sorter using two dummies
{
    if (*p > *q) {
        double temp = *p;
        *p = *q;
        *q = temp;
    }
}

/* void sort3(int *a, int *b, int *c) //funct caller
{
    sort2(a, b);
    sort2(a, c);
    sort2(b, c);
}
*/
int main()
{
    double a, b, c; //initialized

    cout << "Enter a number a" << endl;
    cin >> a;
    cout << "Enter another number b" << endl;
    cin >> b;
    // cout << "Enter another number c" << endl;
    //cin >> c;
    sort2(&a,&b);
    //sort3(a, b, c); 

    cout << "a is now " << a << endl;
    cout << "b is now " << b << endl;
    //cout << "c is now " << c << endl;

}