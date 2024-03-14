#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout << "Enter first number: " << endl;
    cin >> x;
    cout << "Enter second number: " << endl;
    cin >> y;

    if (x > y)
    {
        cout << x;
    }
    else
    {
        cout << y;
    }
}