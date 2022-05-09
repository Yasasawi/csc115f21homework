#include "a0007.h"

void sortByID(string nameArray[], int idArray[], int size)
{
    int idTemp;
    string nameTemp;
    int i;
    int j;
    bool swapStatus = true; 
    
    for(i = 0; i < size - 1 && swapStatus == true; i++)
    {
        swapStatus = false; 
        for(j = 0; j < size - 1 - i; j++)
        {
            if(idArray[j] > idArray[j+1])
            {
                idTemp = idArray[j];
                nameTemp = nameArray[j];
                idArray[j] = idArray[j+1];
                nameArray[j] = nameArray[j+1];
                idArray[j+1] = idTemp;
                nameArray[j+1] = nameTemp;
                swapStatus = true;
            }
        }
    }
}

void sortByName(string nameArray[], int idArray[], int size)
{
    int idTemp;
    string nameTemp;
    int i;
    int j;
    bool swapStatus = true; 
    
    for(i = 0; i < size - 1 && swapStatus == true; i++)
    {
        swapStatus = false; 
        for(j = 0; j < size - 1 - i; j++)
        {
            if(nameArray[j] > nameArray[j+1])
            {
                idTemp = idArray[j];
                nameTemp = nameArray[j];
                idArray[j] = idArray[j+1];
                nameArray[j] = nameArray[j+1];
                idArray[j+1] = idTemp;
                nameArray[j+1] = nameTemp;
                swapStatus = true;
            }
        }
    }
}

int getID(string nameArray[], int idArray[], int size, string name)
{
    int left = 0;
    int right = size - 1;
    int mid;
    
    while(left <= right)
    {
        mid = (left + right) / 2;
        if(nameArray[mid] == name)
        {
            return idArray[mid];
        }
        if(nameArray[mid] < name)
        {
            left = mid + 1; 
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1; 
}

string getName(string nameArray[], int idArray[], int size, int id)
{
    int left = 0;
    int right = size - 1;
    int mid;
    
    while(left <= right)
    {
        mid = (left + right) / 2;
        if(idArray[mid] == id)
        {
            return nameArray[mid];
        }
        if(idArray[mid] < id)
        {
            left = mid + 1; 
        }
        else
        {
            right = mid - 1;
        }
    }
    return ""; 
}
