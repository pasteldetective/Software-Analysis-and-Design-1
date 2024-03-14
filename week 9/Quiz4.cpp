#include <iostream>
using namespace std;

int main()
{
    int list[10];
    int arrSize = *(&list + 1) - list;
    for (int i = 0; i < arrSize; i++)
    {
        list[i] = i+1;
        cout << list[i] << endl;
    }
}