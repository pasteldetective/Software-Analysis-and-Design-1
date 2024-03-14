#include <iostream>
#include <vector>
using namespace std;

vector<int> sumPairWise(vector<int> &v1, vector<int> &v2)
{
    vector <int> big;
    if (v1.size() > v2.size())
    {
        for (int i = 0; i < v2.size(); i++)
        {
            big.push_back(v1[i] + v2[i]);
        }
        for (int j = v2.size(); j < v1.size(); j++)
        {
            big.push_back(v1[j]);
        }
    }
    else if (v2.size() > v1.size())
    {
        for (int i = 0; i < v1.size(); i++)
        {
            big.push_back(v1[i] + v2[i]);
        }
        for (int j = v1.size(); j < v2.size(); j++)
        {
            big.push_back(v2[j]);
        }
    }
    else
    {
        for (int i = 0; i < v1.size(); i++)
        {
           big.push_back(v1[i] + v2[i]); 
        }
    }
    return big;
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