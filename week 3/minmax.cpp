/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Yasmeen Hassan
Assignment: Lab3B

prints min and max for east basin
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <climits>
using namespace std;

int main()
{

        //cout >> date;

        //stop after can't read
        ifstream fin("Current_Reservoir_Levels.tsv");
        if (fin.fail())
        {
                cerr << "File cannot be opened for reading." << endl;
                exit(1); // exit if failed to open the file
        }

        string date,input,junk;
        getline(fin,junk);
        double eastSt, eastEl, westSt, westEl;

        //cout << "Enter date: ";
        //cin >> input;
        double min = INT_MAX, max = INT_MIN;
        //cout >> date; 
        //print date eastSt & eastEl & westSt & westEl
        //
        //define max & min as double

        while(fin >> date >> eastSt >> eastEl >> westSt >> westEl)
        {
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration

        fin.ignore(INT_MAX, '\n'); //skips to the end of line,
                          //ignorring the remaining columns

        //Compare max w/eastSt
        // if eastStis greater than eastSt update max to equal eastSt
        // Com min w/ eastSt
        // if eastSt < eastSt, update max to equal eastSt
                if (eastSt < min)
                {
                        min = eastSt;
                }
                if (eastSt > max)
                {
                        max = eastSt;
                }
        // for example, to print the date and East basin storage:
        }
        cout << "Minimum storage in Easr basin " << min << " billion" << endl;
        cout << "Maximum storage in Easr basin " << max << " billion" << endl;

        fin.close();

}
