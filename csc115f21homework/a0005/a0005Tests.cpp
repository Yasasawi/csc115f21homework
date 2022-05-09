#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0005.h" 

//passwordCalc tests


TEST_CASE("passwordCalc - all lowercase")
{
    int ppEntropy;
    string ppStrength;
    string pp = "yasas";
    
    passwordCalc(pp, ppEntropy, ppStrength);
    
    CHECK(ppEntropy == 24);
    CHECK(ppStrength == "Very Weak");
}

TEST_CASE("passwordCalc - one uppercase")
{
    int ppEntropy;
    string ppStrength;
    string pp = "Yasas";
    
    passwordCalc(pp, ppEntropy, ppStrength);
    
    CHECK(ppEntropy == 29);
    CHECK(ppStrength == "Weak");
}

TEST_CASE("passwordCalc - one uppercase and a digit")
{
    int ppEntropy;
    string ppStrength;
    string pp = "Yasas1";
    
    passwordCalc(pp, ppEntropy, ppStrength);
    
    CHECK(ppEntropy == 36);
    CHECK(ppStrength == "Reasonable");
}

TEST_CASE("passwordCalc - testing a longer string with numbers, an uppercase, and a punctuation")
{
    int ppEntropy;
    string ppStrength;
    string pp = "Wijesekara123!";
    
    passwordCalc(pp, ppEntropy, ppStrength);
    
    CHECK(ppEntropy == 92);
    CHECK(ppStrength == "Strong");
}

TEST_CASE("passwordCalc - testing a longer string with numbers, an uppercase, and different punctuation")
{
    int ppEntropy;
    string ppStrength;
    string pp = "Wijesekara12345!?!0_0";
    
    passwordCalc(pp, ppEntropy, ppStrength);
    
    CHECK(ppEntropy == 138);
    CHECK(ppStrength == "Very Strong");
}

//getPool Tests 
TEST_CASE("getPool - testing a blank string")
{
    int pool; 
    string str; 
    str = " ";
    pool = getPool(str);
    REQUIRE(pool == 2);
}

TEST_CASE("getPool - testing a lowercase string")
{
    int pool; 
    string str; 
    str = "yasas";
    pool = getPool(str);
    REQUIRE(pool == 26);
}


TEST_CASE("getPool - testing an uppercase and lowercase string")
{
    int pool; 
    string str; 
    str = "Yasas";
    pool = getPool(str);
    REQUIRE(pool == 52); 
}

TEST_CASE("getPool - testing an uppercase and lowercase string with a digit")
{
    int pool; 
    string str; 
    str = "Yasas1";
    pool = getPool(str);
    REQUIRE(pool == 62); 
}

TEST_CASE("getPool - testing an uppercase and lowercase string with a digit and a exclaimation mark")
{
    int pool; 
    string str; 
    str = "Yasas1!";
    pool = getPool(str);
    REQUIRE(pool == 94); 
}

//getBits testing

TEST_CASE("getBits - testing a lowercase string") 
{
    string str;
    str = "yasas";
    double bits = getBits(str); 
    REQUIRE(bits == Approx(4.700439718));
}

TEST_CASE("getBits - testing a lowercase and uppercase string") 
{
    string str;
    str = "Yasas";
    double bits = getBits(str); 
    REQUIRE(bits == Approx(5.700439718));
}

TEST_CASE("getBits - testing a lowercase and uppercase string with a digit") 
{
    string str;
    str = "Yasas1";
    double bits = getBits(str); 
    REQUIRE(bits == Approx(5.95419631));
}

TEST_CASE("getBits - testing a lowercase and uppercase string with a digit and punctuation mark") 
{
    string str;
    str = "Yasas1!";
    double bits = getBits(str); 
    REQUIRE(bits == Approx(6.554588852));
}

//getEntropy testing
TEST_CASE("getEntropy - testing a lowercase")
{
    int entropy;
    string str = "yasas";
    entropy = getEntropy(str);
    REQUIRE(entropy == 24);
}

TEST_CASE("getEntropy - testing an lowercase and an uppercase")
{
    int entropy;
    string str = "Yasas";
    entropy = getEntropy(str);
    REQUIRE(entropy == 29);
}

TEST_CASE("getEntropy - testing an lowercase and an uppercase with a digit")
{
    int entropy;
    string str = "Yasas1";
    entropy = getEntropy(str);
    REQUIRE(entropy == 36);
}

TEST_CASE("getEntropy - testing an lowercase and an uppercase with a digit and punctuation")
{
    int entropy;
    string str = "Yasas1!";
    entropy = getEntropy(str);
    REQUIRE(entropy == 46);
}

//getStrength testings
TEST_CASE("getStrength - testing number below 28") 
{
    string str = "yasas";
    string strength = getStrength(str);
    REQUIRE(strength == "Very Weak");
}

TEST_CASE("getStrength - testing number below 35") 
{
    string str = "Yasas";
    string strength = getStrength(str);
    REQUIRE(strength == "Weak");
}

TEST_CASE("getStrength - testing number below 59") 
{
    string str = "Yasas1";
    string strength = getStrength(str);
    REQUIRE(strength == "Reasonable");
}

TEST_CASE("getStrength - testing number below 127") 
{
    string str = "Wijesekara123!";
    string strength = getStrength(str);
    REQUIRE(strength == "Strong");
}

TEST_CASE("getStrength - testing number above 127") 
{
    string str = "Wijesekara12345!?!0_0";
    string strength = getStrength(str);
    REQUIRE(strength == "Very Strong");
}