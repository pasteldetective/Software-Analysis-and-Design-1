/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Yasmeen Hassan
Assignment: Lab3D

compares elevations for each date user input ups to
*/

#include <iostream>
#include<fstream> 
#include <cstdlib>
#include <climits>
#include<array>
using namespace std;

int main(){

  string date;
  string start, end, dates[366];
  double westBasin[366]; //westbasin includes leap year so 366 days
  double eastSt, eastEl, westSt, westEl; 

  int index = 0;

  ifstream fin("Current_Reservoir_Levels.tsv");

  if(fin.fail())
  {
    cerr << "File cannot be opened for reading";
    exit(1);
  }

  string junk;
  getline(fin,junk);

  cout << "Enter start date: " <<endl;
  cin >> start;
  cout << "Enter end date: " << endl;
  cin >> end;

while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) 
{ 
    fin.ignore(INT_MAX, '\n'); 
    if((date >= start) && (date <= end)) //checks how many dates should input
    {
      dates[index]= date;
      westBasin[index]= westEl;
      index++;
    }
}
    for(int i = index-1; i>=0; i--)
    {
        cout<< dates[i] << " " << westBasin[i] << " ft" << endl; //outputs amount of dates less than input - 1
    }
  fin.close();
}