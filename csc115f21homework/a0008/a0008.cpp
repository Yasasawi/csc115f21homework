#include "a0008.h"

//write functions here

void splitNameLF(string fullName, string& firstName, string& lastName)
{
    int i;
    int size = fullName.length(); 
    int posComma; 
    
    posComma = fullName.find(", ");
    firstName = fullName.substr(posComma + 2);
    lastName = fullName.substr(0, posComma);    
}

void splitNameFL(string fullName, string& firstName, string& lastName)
{
    int i;
    int size = fullName.length(); 
    int posComma; 
    
    posComma = fullName.find(" ");
    lastName = fullName.substr(posComma + 1);
    firstName = fullName.substr(0, posComma);    
}

string createEmail(string firstName, string lastName, string domainName)
{
    string email; 
    
    email = firstName + "." + lastName + "@" + domainName;
    
    return email; 
}

void fixList(string mixNames[], string firstlastNames[], string lastfirstNames[], string emailArray[], int size, string domainName)
{
    int i;
    string firstName;
    string lastName;
    string x;
    string y;
    string a;
    string b;
    
    for(i = 0; i < size; i++)
    {
        lastfirstNames[i] = mixNames[i];
        firstlastNames[i] = mixNames[i];
        if(lastfirstNames[i].find(", ") == -1)
        {
            splitNameFL(lastfirstNames[i], firstName, lastName);
            lastfirstNames[i] = lastName + ", " + firstName;
        }
        if(firstlastNames[i].find(", ") != -1)
        {
            splitNameLF(firstlastNames[i], a, b);
            firstlastNames[i] = a + " " + b;
        }
        splitNameLF(lastfirstNames[i], x, y);
        emailArray[i] = createEmail(x, y, domainName);
    }
}
