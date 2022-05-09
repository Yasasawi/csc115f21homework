#pragma once
#include <cctype>

using namespace std;

void createLookup(int lookup[], int dieRolls[], int rollCount);
int fewestRolled(int lookup[], int size);
int mostRolled(int lookup[], int size);
int sumRolls(int lookup[], int size);