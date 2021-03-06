#include "a0011.h"

//write functions here

void cleanUp(ifstream& dataFile, ofstream& primeFile, ofstream& evenFile, ofstream& oddFile)
{
    dataFile.close();
    primeFile.close();
    evenFile.close();
    oddFile.close();
    exit(0);
}

bool openInput(ifstream& fin, string fileName)
{
    fin.open(fileName);
    return fin.is_open(); 
}

bool openOutput(ofstream& fout, string fileName)
{
    fout.open(fileName); 
    return fout.is_open();
}

