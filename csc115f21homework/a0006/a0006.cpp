#include "a0006.h"

void createLookup(int lookup[], int dieRolls[], int rollCount)
{ 
    int index;
    for(int i = 0; i < 7; i++) 
    {
        lookup[i] = 0; 
    }
    

    for(index = 1; index <=6; index++)
    {
        for(int i = 0; i < rollCount; i++) 
        {
            if(index == dieRolls[i])
            {
                lookup[index]++; 
            }
        }
    }
} 

int fewestRolled(int lookup[], int size)
{
    int lowIndx;
    int lowest = 200; 
    for(int i = 0; i < size; i++) 
    {
        if(lookup[i] != 0)
        {
            if(lowest > lookup[i])
            {
                lowest = lookup[i];
                lowIndx = i; 
            }
        }
    }
    return lowIndx;
}

int mostRolled(int lookup[], int size)
{
    int mostIndx;
    int mostest = 0; 
    for(int i = 0; i < size; i++) 
    {
        if(lookup[i] != 0)
        {
            if(mostest < lookup[i])
            {
                mostest = lookup[i];
                mostIndx = i; 
            }
        }
    }
    return mostIndx;
}

int sumRolls(int lookup[], int size)
{
    int sum = 0; 
    for(int i = 0; i < size; i++)
    {
        sum += i * lookup[i];
    }
    return sum; 
}