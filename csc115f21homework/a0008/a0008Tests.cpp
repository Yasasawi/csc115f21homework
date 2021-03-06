#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0008.h"

//write test cases here
#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0008.h"

//splitNameLF testing
TEST_CASE("splitNameLF - Wijesekara, Yasas")
{
    string fullName = "Wijesekara, Yasas";
    string lastName;
    string firstName;
    splitNameLF(fullName, firstName, lastName);
    
    REQUIRE(fullName == "Wijesekara, Yasas");
    REQUIRE(lastName == "Wijesekara");
    REQUIRE(firstName == "Yasas");
    
}

TEST_CASE("splitNameLF - ")
{
    string fullName = "Chungus, Biggus";
    string lastName;
    string firstName;
    splitNameLF(fullName, firstName, lastName);
    
    REQUIRE(fullName == "Chungus, Biggus");
    REQUIRE(lastName == "Chungus");
    REQUIRE(firstName == "Biggus"); 
}

//splitNameFL testing
TEST_CASE("splitNameFL - Yasas Wijesekara")
{
    string fullName = "Yasas Wijesekara";
    string lastName;
    string firstName;
    splitNameFL(fullName, firstName, lastName);
    
    REQUIRE(fullName == "Yasas Wijesekara");
    REQUIRE(lastName == "Wijesekara");
    REQUIRE(firstName == "Yasas");
}

TEST_CASE("splitNameFL - Joe boe")
{
    string fullName = "Joe Boe";
    string lastName;
    string firstName;
    splitNameFL(fullName, firstName, lastName);
    
    REQUIRE(fullName == "Joe Boe");
    REQUIRE(lastName == "Boe");
    REQUIRE(firstName == "Joe");
    
}

//createEmail testing
TEST_CASE("createEmail - Yasas Wijesekara")
{
    string lastName = "Wijesekara";
    string firstName = "Yasas";
    string domainName = "mines.sdsmt.edu";
    string email; 
    
    email = createEmail(firstName, lastName, domainName);
    
    REQUIRE(email == "Yasas.Wijesekara@mines.sdsmt.edu");
}
TEST_CASE("createEmail - Joe Boe")
{
    string lastName = "Boe";
    string firstName = "Joe";
    string domainName = "gmail.com";
    string email; 
    
    email = createEmail(firstName, lastName, domainName);
    
    REQUIRE(email == "Joe.Boe@gmail.com");
}

TEST_CASE("createEmail - Biggus Chungus")
{
    string lastName = "Chungus";
    string firstName = "Biggus";
    string domainName = "yahoo.com";
    string email; 
    
    email = createEmail(firstName, lastName, domainName);
    
    REQUIRE(email == "Biggus.Chungus@yahoo.com");
}

//fixList testing

TEST_CASE("fixList - 3 items") 
{
    string mixed[3] = {"Wijesekara, Yasas", "Joe Boe", "Chungus, Biggus"};
    string lastFirst[3];
    string firstLast[3]; 
    string email[3]; 
    string domainName = "gmail.com";
    
    fixList(mixed, firstLast, lastFirst, email, 3, domainName);
    
    REQUIRE(mixed[0] == "Wijesekara, Yasas");
    REQUIRE(mixed[1] == "Joe Boe");
    REQUIRE(mixed[2] == "Chungus, Biggus");  
    REQUIRE(lastFirst[0] == "Wijesekara, Yasas");
    REQUIRE(lastFirst[1] == "Boe, Joe");
    REQUIRE(lastFirst[2] == "Chungus, Biggus");
    REQUIRE(firstLast[0] == "Yasas Wijesekara");
    REQUIRE(firstLast[1] == "Joe Boe");
    REQUIRE(firstLast[2] == "Biggus Chungus"); 
    REQUIRE(email[0] == "Yasas.Wijesekara@gmail.com");
    REQUIRE(email[1] == "Joe.Boe@gmail.com");
    REQUIRE(email[2] == "Biggus.Chungus@gmail.com");

    
}


TEST_CASE("fixList - 5 items") 
{
    string mixed[5] = {"Wijesekara, Yasas", "Joe Boe", "Chungus, Biggus", "Link Hylia", "Mario Nintendo",};
    string lastFirst[5];
    string firstLast[5];     
    string email[5]; 
    string domainName = "yahoo.com";
    
    fixList(mixed, firstLast, lastFirst, email, 5, domainName);
    
    REQUIRE(mixed[0] == "Wijesekara, Yasas");
    REQUIRE(mixed[1] == "Joe Boe");
    REQUIRE(mixed[2] == "Chungus, Biggus"); 
    REQUIRE(mixed[3] == "Link Hylia");
    REQUIRE(mixed[4] == "Mario Nintendo");
    REQUIRE(lastFirst[0] == "Wijesekara, Yasas");
    REQUIRE(lastFirst[1] == "Boe, Joe");
    REQUIRE(lastFirst[2] == "Chungus, Biggus");
    REQUIRE(lastFirst[3] == "Hylia, Link");
    REQUIRE(lastFirst[4] == "Nintendo, Mario");
    REQUIRE(firstLast[0] == "Yasas Wijesekara");
    REQUIRE(firstLast[1] == "Joe Boe");
    REQUIRE(firstLast[2] == "Biggus Chungus");
    REQUIRE(firstLast[3] == "Link Hylia");
    REQUIRE(firstLast[4] == "Mario Nintendo");    
    REQUIRE(email[0] == "Yasas.Wijesekara@yahoo.com");
    REQUIRE(email[1] == "Joe.Boe@yahoo.com");
    REQUIRE(email[2] == "Biggus.Chungus@yahoo.com");
    REQUIRE(email[3] == "Link.Hylia@yahoo.com");
    REQUIRE(email[4] == "Mario.Nintendo@yahoo.com");
}
