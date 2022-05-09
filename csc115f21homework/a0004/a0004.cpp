#include "a0004.h"

bool isPrime(int num)
{
    if(num == 2)
    {
        return true; 
    }
    if(num <= 1)
    {
        return false; 
    } 
    if(num == 3)
    {
        return true;
    }
    if(num % 2 == 0)
    {
        return false; 
    }
    for(int i = 3; i < num; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return true; 
}

bool isTwinPrime(int num)
{
    if(isPrime(num) == false)
    {
        return false;
    }
    if(num == 0)
    {
        return isPrime(0);
    }
    if(num % 2 == 0)
    {
        return false; 
    }
    if(isPrime(num + 2) || isPrime(num - 2)) 
    {
        return true; 
    }
    return false;
} 

int nextPrime(int num)
{
    bool nprime = false; 
    if(num == 1)
    {
        return 2; 
    }
    if(num < 1)
    {
        return 2; 
    }
    for(int i = num; !nprime; i++)
    {
        num++;
        if(isPrime(num))
        {
            nprime = true; 
        }
    }
    return num;
}
