#include <iostream>
#include <vector>
using namespace std;

void gogeta(vector<int> &goku, vector<int> &vegeta)
{
   for (int i = 0; i < vegeta.size() ; i++)
   {
       goku.push_back(vegeta[i]);
   } 
   vegeta.clear();
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