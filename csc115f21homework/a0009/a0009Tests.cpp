#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0009.h"

//write test cases here
TEST_CASE("sortLen - small array")
{
    char word[5][21] = {"happy", "sadi", "apples", "ye", "milkman"};
    sortLen(word, 5);
    REQUIRE(strcmp(word[0], "ye") == 0);
    REQUIRE(strcmp(word[4], "milkman") == 0);  
}

TEST_CASE("sortLen - array of 10")
{
    char word[10][21] = {"wijesekara", "fred", "googoo", "hehe", "john", "pingus", "dave", "ap", "ye", "yehaw"};
    sortLen(word, 10);
    REQUIRE(strcmp(word[0], "ap") == 0);
    REQUIRE(strcmp(word[9], "wijesekara") == 0);   
}

TEST_CASE("sortLen - array of 15")
{
    char word[15][21] = {"wijesekara", "fred", "googoo", "hehe", "john", "pingus", "dave", "ap", "ye", "yehaw", "hingus", "tingus", "lexicographic", "water", "alphabetical"};
    sortLen(word, 15);
    REQUIRE(strcmp(word[0], "ap") == 0);
    REQUIRE(strcmp(word[14], "lexicographic") == 0);                          
}


TEST_CASE("sortOrder - array of 5")
{
    char word[5][21] = {"happy", "sad", "apple", "day", "milk"};
    sortOrder(word, 5);
    REQUIRE(strcmp(word[0], "apple") == 0);
    REQUIRE(strcmp(word[4], "sad") == 0);  
}

TEST_CASE("sortOrder - array of 10")
{
    char word[10][21] = {"wijesekara", "fred", "googoo", "hehe", "john", "pingus", "dave", "ap", "ye", "yehaw"};
    sortOrder(word, 10);
    REQUIRE(strcmp(word[0], "ap") == 0);
    REQUIRE(strcmp(word[9], "yehaw") == 0);  
}

TEST_CASE("sortOrder - array of 15")
{
    char word[15][21] = {"wijesekara", "fred", "googoo", "hehe", "john", "pingus", "dave", "ap", "ye", "yehaw", "hingus", "tingus", "lexicographic", "water", "alphabetical"};
    sortOrder(word, 15);
    REQUIRE(strcmp(word[0], "alphabetical") == 0);
    REQUIRE(strcmp(word[14], "yehaw") == 0);  
}

//swapStrings testing
TEST_CASE("swapStrings - 2 strings")
{
    char s1[10] = "happy";
    char s2[10] = "joy";
    
    swapStrings(s1, s2);
    REQUIRE(strcmp(s1, "joy") == 0); 
    REQUIRE(strcmp(s2, "happy") == 0);
}

TEST_CASE("swapStrings - 2 strings of completely different lengths")
{
    char s1[11] = "Wijesekara";
    char s2[11] = "abe";
    
    swapStrings(s1, s2);
    REQUIRE(strcmp(s1, "abe") == 0); 
    REQUIRE(strcmp(s2, "Wijesekara") == 0);
}

TEST_CASE("swapStrings - 1 empty string and one not empty string")
{
    char s1[11] = "Wijesekara";
    char s2[11] = " ";
    
    swapStrings(s1, s2);
    REQUIRE(strcmp(s1, " ") == 0); 
    REQUIRE(strcmp(s2, "Wijesekara") == 0);
}

