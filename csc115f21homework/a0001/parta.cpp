#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include <cctype>

using namespace std;

//toupper testing

TEST_CASE("toupper - testing lower boundary of an a") 
{
    char achar = 'a';
    char result;
    
    result = toupper(achar);
    REQUIRE(result == 'A'); 
}

TEST_CASE("toupper - testing upper boundary of an z") 
{
    char zchar = 'z';
    char result;
    
    result = toupper(zchar); 
    REQUIRE(result == 'Z'); 
}

TEST_CASE("toupper - testing lower boundary of an number") 
{
    int char1 = '7';
    int result; 
    
    result = toupper(char1);
    REQUIRE(result == '7');
}

TEST_CASE("toupper - testing uppercase letters")
{
    char upperChar = 'A';
    char result;
    
    result = toupper(upperChar); 
    REQUIRE(result == 'A'); 
}

//islower testing 

TEST_CASE("islower - testing lowercase a") 
{
    char achar = 'a';
    int result;
    
    result = islower(achar);
    REQUIRE(result > 0); 
}

TEST_CASE("islower - testing lowercase z") 
{
    char zchar = 'z';
    int result;
    
    result = islower(zchar); 
    REQUIRE(result  > 0); 
}

TEST_CASE("islower - testing uppercase A")
{
    char Achar = 'A';
    int result;
    
    result = islower(Achar); 
    REQUIRE(result == 0);
}

TEST_CASE("islower - testing uppercase Z")
{
    char Zchar = 'Z';
    int result;
    
    result = islower(Zchar); 
    REQUIRE(result == 0);
}

TEST_CASE("islower - testing a number") 
{
    int num = 7; 
    int result; 
    
    result = islower(num);
    REQUIRE(result == 0); 
}

//isdigit testing

TEST_CASE("isdigit - lower bound")
{
    int zeroNum = '0'; 
    int result; 
    
    result = isdigit(zeroNum); 
    REQUIRE(result > 0); 
}

TEST_CASE("isdigit - upper bound")
{
    int zeroNum = '9'; 
    int result; 
    
    result = isdigit(zeroNum); 
    REQUIRE(result > 0); 
}

TEST_CASE("isdigit - decimal digit test") 
{
    int zeroNum = ':'; 
    int result; 
    
    result = isdigit(zeroNum); 
    REQUIRE(result == 0);
}

   








