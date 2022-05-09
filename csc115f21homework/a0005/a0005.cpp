#include "a0005.h"

//void function to calculate the entropy and strength of the string 
void passwordCalc(string& pp, int& ppEntropy, string& ppStrength)
{
    ppEntropy = getEntropy(pp);
    ppStrength = getStrength(pp);
}

//Gets the character pool 
int getPool(string str)
{
    int len = str.length();
    int blankPool = 0;
    int lowerPool = 0;
    int upperPool = 0;
    int punctPool = 0; 
    int digitPool = 0; 
    int totPool = 0; 
    for(int i = 0; i < len; i++)
    {
        if(isblank(str[i]))
        {
            blankPool = 2; 
        }
        if(islower(str[i]))
        {
            lowerPool = 26; 
        }
        if(isupper(str[i]))
        {
            upperPool = 26; 
        }
        if(isdigit(str[i]))
        {
            digitPool = 10;
        }
        if(ispunct(str[i]))
        {
            punctPool = 32;
        }
    }
    totPool = blankPool + lowerPool + upperPool + digitPool + punctPool;
    return totPool;
}

//gets the bits of the pool
double getBits(string str)
{
    double bits;
    bits = log2(getPool(str));
    return bits; 

}

//gets the entropy fron the bits
int getEntropy(string str) 
{
    int len = str.length();
    int entropy;
    double roundVal;
    
    roundVal = round(getBits(str) * len);
    entropy = roundVal;
    
    return entropy;
}

//gives the strength based off the entropy
string getStrength(string str) 
{
    if(getEntropy(str) <= 28)
    {
        return "Very Weak";
    }
    
    if(getEntropy(str) <= 35)
    {
        return "Weak";
    }

    if(getEntropy(str) <= 59)
    {
        return "Reasonable";
    }
    
    if(getEntropy(str) <= 127)
    {
        return "Strong";
    }
    
    if(getEntropy(str) > 127)
    {
        return "Very Strong";
    }
    return "Very Weak";
}



