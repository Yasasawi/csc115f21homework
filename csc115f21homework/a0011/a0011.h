#pragma once
#include <cmath>
#include <cctype>
#include <string>
#include <fstream>
#include <iostream>
#include "..\\a0004\a0004.h"

using namespace std;

//Write prototypes here

void cleanUp(ifstream& dataFile, ofstream& primeFile, ofstream& evenFile, ofstream& oddFile);
bool openInput(ifstream& fin, string fileName);
bool openOutput(ofstream& fout, string fileName); 