#pragma once
#include <string>
#include <cmath>
#include <cctype>

using namespace std;

string getStrength(string str);
int getPool(string str);
double getBits(string str);
int getEntropy(string str);
void passwordCalc(string& pp, int& ppEntropy, string& ppStrength);