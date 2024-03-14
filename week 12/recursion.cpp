#include <iostream>
using namespace std;

// to count from n down to 1:
void countdown(int n) {
    if (n > 0) {
        cout << n << endl;   // print n

        countdown(n-1);      // make recursive call, counting 
                             // from (n-1) down to 1
    }
    else {
        cout << "Done!";     // base case
    }
}

//Task A
void printRange(int left, int right)
{
    
    if (left > right)
    {
        cout << "";
    }
    else
    {
        cout << left << " ";
        left += 1;
        printRange(left,right);
    }
    
    
}

//Task B
int sumRange(int left, int right)
{
    if (left > right)
    {
        return 0;
    }
    else
    {
        return (left + sumRange(left + 1, right));
    }
}

//Task C
int sumArrayInRange(int *arr, int left, int right)
{
    if (left > right)
    {
        return 0;
    }
    else //else arr[0] implement (left + sumRange(left + 1, right)); 
    {
        return arr[left] + sumArrayInRange(arr, left + 1, right);
    }
}

int sumArray(int *arr, int size)
{
    return sumArrayInRange(arr, 0, size-1);
}

//Task D

bool isAlphanumeric(string s)
{
    /*
    if (s.empty())
    {
        return true;
    }
    else
    {
        return isalnum(s[0]) == true && isAlphanumeric(s.substr(1,s.length()));
    }
    */
   if(s.length() == 0) 
   {
       return true;
   } 
   else 
   {
       char ch = s[0];
       if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) 
       {
           return isAlphanumeric(s.substr(1));
       } 
       else 
       {
           return false;
       }
   } 
}



int main() {
    //Task A
    /*
    printRange(-2, 10);
    */
    

    //Task B
    /*
    int x = sumRange(1, 3);
    cout << "This is " << x << endl;   // 6
    
    int y = sumRange(-2, 10);
    cout << "That is " << y << endl;   // 52
    */

    //Task C
    /*
    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum1 = sumArray(arr, size); // Add all elements
    cout << "Sum is " << sum1 << endl;  // Sum is 43
    
    int sum2 = sumArray(arr, 5); // Add up first five elements
    cout << "Sum is " << sum2 << endl;  // Sum is 34

    delete[] arr;         // deallocate it
    */

    /*
    cout << isAlphanumeric("ABCD") << endl;        // true (1)
    cout << isAlphanumeric("Abcd1234xyz") << endl; // true (1)
    cout << isAlphanumeric("KLMN 8-7-6") << endl;  // false (0)
    cout << isAlphanumeric("Hello") << endl;
    */

    cout << isAlphanumeric("ABCD") << endl;        // true (1)
    cout << isAlphanumeric("Abcd1234xyz") << endl; // true (1)
    cout << isAlphanumeric("KLMN 8-7-6") << endl;  // false (0)

    


}