using namespace std;
#include <iostream>
#include <vector>>


vector<int> append(vector<int> a, vector<int> b) {
  for (int i = 0; i < b.size(); i++){
    a.push_back(b[i]); 
    }
  return a;
}
