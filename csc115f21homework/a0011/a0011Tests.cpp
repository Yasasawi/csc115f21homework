#define CATCH_CONFIG_RUNNER
#include "..\\catch.hpp"
#include "a0011.h"

const bool RUNCATCH = false;

int main(int argc, char *argv[])
{
    Catch::Session session;
    int result;
    int i;
    ifstream fin;
    ofstream foutP, foutE, foutO;
    int temp;
    string inputFile;
    string primeFile, evenFile, oddFile;

    if(RUNCATCH)
    {
        result = session.run();
        if(result != 0)
        {
            cout << "Test cases didn't pass" << endl;
            return result;
        }
    }
    //your code goes here.
    if(argc != 5)
    {
        cout << "Usage: a0011.exe datafile primefile evenfile oddfile" << endl;
        cleanUp(fin, foutP, foutE, foutO);
    }
    
    inputFile = argv[1];
    primeFile = argv[2];
    evenFile = argv[3]; 
    oddFile = argv[4]; 
    
    openInput(fin, inputFile);
    if(!fin.is_open())
    {
        cout << "Unable to open file: " << inputFile << endl;
        cleanUp(fin, foutP, foutE, foutO);
    }
    
    openOutput(foutP, primeFile);
    if(!foutP.is_open())
    {
        cout << "Unable to open file: " << primeFile << endl;
        cleanUp(fin, foutP, foutE, foutO);
    }
    
    openOutput(foutE, evenFile);
    if(!foutE.is_open())
    {
        cout << "Unable to open file: " << evenFile << endl;
        cleanUp(fin, foutP, foutE, foutO);
    }
    
    openOutput(foutO, oddFile);
    if(!foutO.is_open())
    {
        cout << "Unable to open file: " << oddFile << endl;
        cleanUp(fin, foutP, foutE, foutO);
    }
    while(fin >> temp)
    {
        if(isPrime(temp))
        {
            foutP << setw(10) << temp << endl;
        }
        else
        {
            if(temp % 2 == 0) 
            {
                foutE << setw(10) << temp << endl; 
            }
            else
            {
                foutO << setw(10) << temp << endl; 
            }
        }
    }
    cleanUp(fin, foutP, foutE, foutO); 
    return 0;
}

//write test cases here
TEST_CASE("openInput - unsuccessfully opening a file") 
{
    ifstream fin;
    bool open;
    string file = "z:\\test.txt";
    open = openInput(fin, file);
    
    REQUIRE(open == false);
}

TEST_CASE("openInput - successfully opening a file")
{
    ifstream fin;
    bool open;
    string file = "test.txt";
    open = openInput(fin, file);
    
    REQUIRE(open == true); 
    fin.close();
}

TEST_CASE("openOutput - successfully opening a file")
{
    ofstream fout;
    bool open;
    string file = "test.txt";
    open = openOutput(fout, file);
    
    REQUIRE(open == true); 
    fout.close();
}

TEST_CASE("openOutput - unsuccessfully opening a file")
{
    ofstream fout;
    bool open;
    string file = "z:\\test.txt";
    open = openOutput(fout, file);
    
    REQUIRE(open == false); 
    fout.close();
}