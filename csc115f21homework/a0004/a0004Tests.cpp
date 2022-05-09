#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0004.h"

//isPrime tests
TEST_CASE("isPrime - the number is 2")
{
    int num = 2;
    bool primeResult = isPrime(num);
    REQUIRE(primeResult == true);
}

TEST_CASE("isPrime - the number is 9")
{
    int num = 9; 
    bool primeResult = isPrime(num);
    REQUIRE(primeResult == false);
}

TEST_CASE("isPrime - the number is less than 1")
{
    int num = -4;
    bool primeResult = isPrime(num);
    REQUIRE(primeResult == false); 
}

TEST_CASE("isPrime - the number is 1")
{
    int num = 1;
    bool primeResult = isPrime(num);
    REQUIRE(primeResult == false); 
}

TEST_CASE("isPrime - the number is 3") 
{
    int num = 3;
    bool primeResult = isPrime(num);
    REQUIRE(primeResult == true); 
}

//isTwinPrime tests
TEST_CASE("isTwinPrime - the number is 0")
{
    int num = 0;
    bool twinPrimeResult = isTwinPrime(num);
    REQUIRE(twinPrimeResult == false);
}

TEST_CASE("isTwinPrime - the number is 3") 
{
    int num = 3;
    bool twinPrimeResult = isTwinPrime(num);
    REQUIRE(twinPrimeResult == true);
}

TEST_CASE("isTwinPrime - the number is 12") 
{
    int num = 12;
    bool twinPrimeResult = isTwinPrime(num);
    REQUIRE(twinPrimeResult == false);
}

TEST_CASE("isTwinPrime - the number is 2") 
{
    int num = 2;
    bool twinPrimeResult = isTwinPrime(num);
    REQUIRE(twinPrimeResult == false);
}

TEST_CASE("isTwinPrime - testing an isolated prime")
{
    int num = 67; 
    bool twinPrimeResult = isTwinPrime(num);
    REQUIRE(twinPrimeResult == false); 
}

TEST_CASE("isTwinPrime - the number is negative")
{
    int num = -2;
    bool twinPrimeResult = isTwinPrime(num);
    REQUIRE(twinPrimeResult == false);
}

TEST_CASE("isTwinPrime - testing 13")
{
    int num = 13; 
    bool twinPrimeResult = isTwinPrime(num);
    REQUIRE(twinPrimeResult == true);
}

TEST_CASE("isTwinPrime - testing an even number")
{
    int num = 6; 
    bool twinPrimeResult = isTwinPrime(num);
    REQUIRE(twinPrimeResult == false);
}

//nextPrime tests
TEST_CASE("nextPrime - the number 1")
{
    int num = 1;
    int nPrime = nextPrime(num);
    REQUIRE(nPrime == 2); 
}

TEST_CASE("nextPrime - the number 5")
{
    int num = 5;
    int nPrime = nextPrime(num);
    REQUIRE(nPrime == 7); 
}

TEST_CASE("nextPrime - a negative number")
{
    int num = -4;
    int nPrime = nextPrime(num); 
    REQUIRE(nPrime == 2); 
}

TEST_CASE("nextPrime - the number 13")
{
    int num = 13;
    int nPrime = nextPrime(num);
    REQUIRE(nPrime == 17);
}

TEST_CASE("nextPrime - checking an even number")
{
    int num = 4; 
    int nPrime = nextPrime(num);
    REQUIRE(nPrime == 5);
}
