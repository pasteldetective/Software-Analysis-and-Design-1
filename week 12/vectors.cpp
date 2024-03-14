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

int main()
{
    /*
    vector <int> v;
    //v[]
    v.push_back(10);
    //v[10]
    v.push_back(20);
    //v[10,20]
    v.push_back(30);
    //v[10,20,30]

    //access an element at a specific index
    v[1] == 20
    v.at(1) == 20

    //first element 
    v.front(); // 10
    //last element
    v.back(); //30

    v.size() //number of elements in vector, returns 3 elements
    v.capacity()//not fixed value, capacity is the allocated space of vector, the amount that can be stored
    v.empty() //returns true if size = 0

    v.pop_back() //removes last element in the vector [10,20]

    v.clear() //deletes all elements of vector
    */
}