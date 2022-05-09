#include "a0003.h"
int countCharacters(string str, char targetChar)
{
    //declaring variables
    int count = 0; 
    int len = str.length();
    
    //converting the char to lowercase
    if(isupper(targetChar))
    {
        targetChar = tolower(targetChar);
    }
    
    //converting the string to lower case if its uppercase using the ascii table
    for(int i = 0; i < len; i++)
    {
        if(isupper(str.at(i)))
        {
            str.at(i) = str.at(i) + 32;
        }
    }
    //checking if the string is empty
    if(str == " ") 
    {
        return 0; 
    }
    //checking for the target letter in the string
    else
    {
        for(int i = 0; i < len; i++)
        {
            if(str.at(i) == targetChar)
            {
                count++;
            }
        }
        return count;
    }
}