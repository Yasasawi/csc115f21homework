#pragma once
#include <cmath>
#include <string> 

using namespace std; 

double windChill(int temp, int windspeed);
string windChillWarning(int airTemp, int speed); 