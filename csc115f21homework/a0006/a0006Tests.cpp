#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0006.h"

//createLookup testing
TEST_CASE("createLookup - checking for a zeroed array")
{
    int i;
    int lookup[7];
    int die[5] = {0, 0, 0, 0, 0};
    
    createLookup(lookup, die, 0);
    for(i = 0; i < 7; i++)
    {
        REQUIRE(lookup[i] == 0); 
    }
}

TEST_CASE("createLookup - checking for an array with all 6s")
{
    int lookup[7];
    int die[5] = {6, 6, 6, 6, 6};
    
    createLookup(lookup, die, 5);
    
    CHECK(lookup[6] == 5); 
}

TEST_CASE("createLookup - checking for an array with assorted nums")
{
    int lookup[7];
    int die[10] = {6, 6, 6, 6, 6, 2, 2, 1, 1, 1};
    
    createLookup(lookup, die, 10);
    
    CHECK(lookup[6] == 5); 
    CHECK(lookup[2] == 2);
    CHECK(lookup[1] == 3); 
} 

//fewestRolled testing
TEST_CASE("fewestRolled - checking for one num") 
{
    int lowVal;
    int lookup[7];
    int die[6] = {6, 6, 6, 6, 6, 5};
    
    createLookup(lookup, die, 6);
    
    lowVal = fewestRolled(lookup, 7);
    
    REQUIRE(lowVal == 5); 
    
}

TEST_CASE("fewestRolled - checking for dupicate") 
{
    int lowVal;
    int lookup[7];
    int die[12] = {1, 2, 3, 4, 5, 6, 1, 2, 4, 6};
    
    createLookup(lookup, die, 12);
    
    lowVal = fewestRolled(lookup, 7);
    
    REQUIRE(lowVal == 3); 
    
}

TEST_CASE("fewestRolled - checking for random nums no duplicates") 
{
    int lowVal;
    int lookup[7];
    int die[11] = {1, 2, 3, 4, 5, 6, 1, 3, 4, 5, 6};
    
    createLookup(lookup, die, 11);
    
    lowVal = fewestRolled(lookup, 7);
    
    REQUIRE(lowVal == 2); 
    
}

//mostRolled testing
TEST_CASE("mostRolled - checking for no dupicates") 
{
    int mostVal;
    int lookup[7];
    int die[6] = {6, 6, 6, 6, 6, 5};
    
    createLookup(lookup, die, 6);
    
    mostVal = mostRolled(lookup, 7);
    
    REQUIRE(mostVal == 6); 
    
}

TEST_CASE("mostRolled - checking for duplicates") 
{
    int mostVal;
    int lookup[7];
    int die[12] = {1, 2, 1, 1, 2, 2, 2, 6, 6, 6, 6, 3};
    
    createLookup(lookup, die, 12);
    
    mostVal = mostRolled(lookup, 7);
    
    REQUIRE(mostVal == 2); 
    
}

//sumRolls testing
TEST_CASE("sumRolls - 6 die")
{
    int sumOfDie; 
    int lookup[7];
    int die[6] = {1, 1, 3, 3, 2, 5};
    
    createLookup(lookup, die, 6);
    sumOfDie = sumRolls(lookup, 7); 
    
    REQUIRE(sumOfDie == 15);
}

TEST_CASE("sumRolls - 12 die")
{
    int sumOfDie; 
    int lookup[7];
    int die[12] = {1, 1, 3, 3, 2, 5, 6, 2, 3, 4, 5, 6};
    
    createLookup(lookup, die, 12);
    sumOfDie = sumRolls(lookup, 7); 
    
    REQUIRE(sumOfDie == 41);
}
    
