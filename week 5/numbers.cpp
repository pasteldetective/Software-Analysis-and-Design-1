/*
Author: Jackie Yee
Course: CSCI-135
Instructor: Yasmeen Hassan
Assignment: Lab5

functions
*/

#include <iostream>
using namespace std;

//task a
bool isDivisibleBy(int n, int d) //if mod then true
{
    if (d == 0)
    {
        return false;
    }
    if (n % d == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//task b
bool isPrime(int n) //finds prime
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (isDivisibleBy(n , i))
        {
            return false;
        }
    }
    return true;
}

//task c
int nextPrime(int n) //finds next prime
{
    int i = n + 1;

    while(!(isPrime(i)))
    {
        i++;
    }
    return i;
}

//task d
int countPrimes(int a, int b) //counting prime
{
    int numPrimes = 0;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            numPrimes++;
        }
    }
    return numPrimes;
}

//task e
bool isTwinPrime(int n) // if n is prime or false
{
    if (!isPrime(n))
    {
        return false;
    }
    if ((isPrime(n-2)) || (isPrime(n+2)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

//task f
int nextTwinPrime(int n) // finds next twin prime
{
    int i = n + 1;

    while (!(isTwinPrime(i))) //not true then ++
    {
        i++;
    }
    return i;
}

//task g
int largestTwinPrime(int a, int b) //finds largest twin primes
{
    for (int i = b; i >= a; i--)//for condition
    {
        if(isTwinPrime(i)) //returns int i prime
        {
            return i;
        }
    }
    return -1;
}

int main()
{


}