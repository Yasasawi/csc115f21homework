#pragma once 
#include <cmath> 
#include <cctype>
#include <string>

using namespace std;

void sortByID(string nameArray[], int idArray[], int size);
void sortByName(string nameArray[], int idArray[], int size);
int getID(string nameArray[], int idArray[], int size, string name);
string getName(string nameArray[], int idArray[], int size, int id);
