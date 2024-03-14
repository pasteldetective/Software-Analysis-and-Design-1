#include <iostream>
#include <cmath>
using namespace std;

int unbalanced_brackets(string input)
{
    int sum = 0;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '{')
        {
            sum++;
        }
        else if (input[i] == '}')
        {
            sum--;
        }
    }
    return sum;
}