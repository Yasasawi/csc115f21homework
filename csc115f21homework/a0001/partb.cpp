#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include <cmath>

using namespace std;

//Power testing
TEST_CASE("testing pow - 2.35 to the 5.67 power") 
{
    double base = 2.35; 
    double exponent = 5.67;
    double answer; 
    
    answer = pow(base, exponent); 
    REQUIRE(answer == Approx(127.04418)); 
} 

TEST_CASE("testing pow - 0 to the 0th power") 
{ 
    double base = 0; 
    double exponent = 0;
    double answer; 
    
    answer = pow(base, exponent); 
    REQUIRE(answer == Approx(1.00000)); 
} 

TEST_CASE("testing pow - 0 to the -2 power") 
{
    double inf = std::numeric_limits<double>::infinity();
    double base = 0; 
    double exponent = -2;
    double answer; 
    
    answer = pow(base, exponent); 
    REQUIRE(answer == inf); 
} 

TEST_CASE("testing pow - -4 to the -3 power") 
{
    double base = -4; 
    double exponent = -3;
    double answer; 
    
    answer = pow(base, exponent); 
    REQUIRE(answer == Approx(-0.015625)); 
} 

//log10 testing
TEST_CASE("testing log10 with 1000") 
{
    
    double insideNum = 1000;
    double answer; 
    
    answer = log10(insideNum); 
    REQUIRE(answer == Approx(3.00000)); 
} 

TEST_CASE("testing log10 with -100") 
{
    
    double insideNum = -100;
    double answer; 
    
    answer = log10(insideNum); 
    REQUIRE(isnan(answer) == true); 
} 

TEST_CASE("testing log10 with 0") 
{
    double inf = std::numeric_limits<double>::infinity();
    double insideNum = 0;
    double answer; 
    
    answer = log10(insideNum); 
    REQUIRE(answer == -inf); 
} 

