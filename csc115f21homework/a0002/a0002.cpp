#include "a0002.h"
double windChill(int temp, int windspeed)
{
    if(temp == 0 && windspeed == 0)
    {
        return round(35.74); 
    }
    if(temp > 0 && windspeed == 0) 
    {
        return round(35.74 + (0.6215 * temp));
    }
    if(temp == 0 && windspeed > 0)
    {
        return round(35.74 - (35.75*pow(windspeed, 0.16)));
    }
    if(windspeed < 0)
    {
        return nan("");
    } 
    if(temp != 0, windspeed > 0) 
    {
        return round(35.74 + (0.6215 * temp) - 35.75*pow(windspeed, 0.16) + (0.4275 * temp * pow(windspeed, 0.16)));
    }
    
    return -1;
}

string windChillWarning(int temp, int speed)
{
    double windChillVal = windChill(temp, speed); 
    if(windChillVal >= 32)
    {
        return "None";
    }
    if(windChillVal >= 0 && windChillVal< 32)
    {
        return "Minimal";
    }
    if(windChillVal >= -20 && windChillVal < 0)
    {
        return "Caution";
    }
    if(windChillVal >= -40 && windChillVal < 0) 
    {
        return "Intermediate"; 
    }
    if(windChillVal < -40)
    {
        return "Extreme"; 
    }
    return ""; 
}

 

