#include "a0010.h"

//write functions here

void sortArray(int arr[], int size)
{
    int temp;
    int i;
    int j;
    bool swapStatus = true; 
    
    for(i = 0; i < size - 1 && swapStatus == true; i++)
    {
        swapStatus = false; 
        for(j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapStatus = true;
            }
        }
    }
}

int sumArray(int arr[], int size)
{
    int i;
    int sum = 0; 
    
    for(i = 0; i < size; i++)
    {
        sum += arr[i]; 
    }
    return sum; 
}