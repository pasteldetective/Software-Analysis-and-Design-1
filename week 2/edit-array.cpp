/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Yasmeen Hassan
Assignment: Lab2C

Makes an array of length 10 and then asks user for inputs between 1 and 10, updates to match.
*/
#include <iostream>
using namespace std;

int main()
{
        int index , value;
        int myData[10] = {};
        for (int i = 0; i < 10; i++)
        {
                myData[i] = 1;
        }

        do
        {
                for (int i = 0; i < 10; i++)
                {
                        cout << myData[i] << " ";
                }


                cout << endl << "Input index: ";
                cin >> index;
                cout << "Input value: ";
                cin >> value;

                if ((index >= 0) && (index < 10))
                {
                        myData[index] = value;
                }
        } while ((index >= 0) && (index < 10));
        cout << "Index out of range. Exit." << endl;
        //cout << endl;
        //cout << "Input index: ";
        //cin >> index;
        //cout << "Input value: ";
        //cin >> value;
        //cout << index << " " << value;

}
