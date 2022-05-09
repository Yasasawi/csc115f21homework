#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0003.h" 

TEST_CASE("countCharacters - testing for no characters")
{
    string str = " "; 
    int count;
    char ch = 'a';
    count = countCharacters(str, ch);
    REQUIRE(count == 0); 
} 

TEST_CASE("countCharacters - testing for a in a string")
{
    string str = "jack"; 
    int count;
    char ch = 'a';
    count = countCharacters(str, ch);
    REQUIRE(count == 1); 
} 

TEST_CASE("countCharacters - testing for a lower case string in the case of an uppercase A in the string")
{
    string str = "Abby"; 
    int count;
    char ch = 'a';
    count = countCharacters(str, ch);
    REQUIRE(count == 1); 
} 

TEST_CASE("countCharacters - testing for an upper case A in a string with a lower case a")
{
    string str = "Larry";
    int count; 
    char ch = 'A';
    count = countCharacters(str, ch);
    REQUIRE(count == 1); 
}

TEST_CASE("countCharacters - testing for multiple characters in a string")
{
    string str = "Yasas";
    int count; 
    char ch = 'A';
    count = countCharacters(str, ch);
    REQUIRE(count == 2); 
}


