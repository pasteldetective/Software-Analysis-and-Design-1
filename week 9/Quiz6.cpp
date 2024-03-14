#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j == 4)
            {
                cout << "*";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}