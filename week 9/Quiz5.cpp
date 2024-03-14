#include <iostream> 
#include <fstream> 
#include <string>
using namespace std; 

int main() {
   ifstream readFile;
   readFile.open("data.txt"); //opens data.txt
   
   if(readFile.is_open()) //input true
   {
    string colorVal;
    while(getline(readFile, colorVal)) //string takes on each line of readFile
    { 
       cout << colorVal << "\n"; //outputs each line
    }
   }
  readFile.close();
}