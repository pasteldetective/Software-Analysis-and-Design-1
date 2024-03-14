#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    string input;
    cout << "Print a line: ";
    getline(cin,input);
    for (int i = 0; i < input.size(); i++)
    {
        cout << input[i] << " " << (int)input[i] << endl;
    }
    //range = input.length();
    
    //for (int i = 0; i < input.length(); i++)
    //{
    //    userIn[i] = input[i];
    //    cout << userIn[i] << " " << int(userIn[i]) << endl;
    //}

    //char = char(input);
    //char numerized *str = input.c_str();
    //for (int i = 0; i < input.length(); i++)
    //{
    //    cout << *str[i] << endl;
    //}
    //cout << "Your line was: " << input << endl;
}

//task d is shifting to the left so subtractings