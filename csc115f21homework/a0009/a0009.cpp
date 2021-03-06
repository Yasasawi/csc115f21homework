#include "a0009.h"

//write functions here

void swapStrings(char char1[], char char2[])
{
    int size; 
    int i;
    char tempChar[201]; 
    
    strcpy(tempChar, char1);
    strcpy(char1, char2);
    strcpy(char2, tempChar);

}

void sortOrder(char word[][21], int stringCount)
{
    int i;
    int j;
    bool swap = true;
    for(i = 0; i < stringCount -1 && swap == true; i++)
    {
        swap = false;
        for(j = 0; j < stringCount - 1 - i; j++)
        {
            if(strcmp(word[j], word[j+1]) > 0)
            {
                swapStrings(word[j], word[j+1]);
                swap = true;
            }
        }
    }
}

void sortLen(char word[][21], int stringCount)
{
    int i;
    int j;
    int min = 0;
    for(i = 0; i < stringCount; i++)
    {
        min = i;
        for(j = i + 1; j < stringCount; j++)
        {
            if(strlen(word[j]) < strlen(word[min]))
                min = j;
        }
        swapStrings(word[i], word[min]);
    }
}