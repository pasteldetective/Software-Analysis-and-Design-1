//File name: /Users/laptopuser/Documents/cs135_codes/pointer/pointerDemo.cpp
#include <iostream>
using namespace std;

int main()
{
    int* p = nullptr;
    int* q = nullptr;

    int i = 5;
    int j = 8;

    cout << "address of i " << &i << endl;
    cout << "address of j " << &j << endl;

    p = &i;
    q = &j;

    cout << "after pointing p to i, that is, "
         << "save i's address to p, we have "
         << endl; 
    cout << "value of p " << p << endl;

    cout << "after pointing q to j, that is, "
         << "save j's address to q, we have "
         << endl; 
    cout << "value of q " << q << endl;

    //p is still a variable,
    //it still has an address.
    cout << "address of p " << &p << endl;
    cout << "address of q " << &q << endl;

    //p is pointing to i,
    //so *p is in fact i
    cout << "value pointed by p is *p " << *p << endl;

    //q is pointing to j,
    //so *q is in fact j
    cout << "value pointed by q is *q " << *q << endl;

    double* pd = nullptr;
    //pd = &i; //WRONG, pd is pointing to a double type,
    //so pd cannot save the address of an int variable.

    (*p)++;
    cout << "i = " << i << endl; //i is 6

    //*p++; //invalid expression, 
    //++ has higher precedence than *,
    //so p++ first,
    //so the pointer is increased by some value
    //(depending on the pointer memory of each type,
    //for pointer to int, it is 4),
    //dereference p's value.
    cout << "p = " << p << endl;
    p++;
    cout << "*p = " << *p << endl; //may have problem
    //*p is an int
    cout << "i = " << i << endl; //i is 6
    return 0;
}