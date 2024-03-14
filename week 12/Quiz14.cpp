#include <iostream>
#include <vector>
using namespace std;

vector<int> makeVector(int n)
{
    vector <int> v;
    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            v.push_back(i);
        }
    }
    else
    {
        return v;
    }
    return v;
}