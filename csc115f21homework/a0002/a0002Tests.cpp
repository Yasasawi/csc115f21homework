#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0002.h"
#include <limits>
#include <math.h> 

//windChill test cases
TEST_CASE("windchill - temp is 0 and the windspeed is 0")
{
    int temp = 0; 
    int windspeed = 0;
    double windChillResult;
    
    windChillResult = windChill(temp, windspeed);
    REQUIRE(windChillResult == 36.0);
}

TEST_CASE("windchill - temp is > 0 and the windspeed is 0")
{
    int temp = 16; 
    int windspeed = 0;
    double windChillResult;
    
    windChillResult = windChill(temp, windspeed);
    REQUIRE(windChillResult == 46);
}

TEST_CASE("windchill - temp is == 0 and the windspeed > 0")
{
    int temp = 0; 
    int windspeed = 17;
    double windChillResult;
    
    windChillResult = windChill(temp, windspeed);
    REQUIRE(windChillResult == -21);
}

TEST_CASE("windchill - windspeed < 0")
{
    int temp = 28; 
    int windspeed = -17;
    float windChillResult;
    
    windChillResult = windChill(temp, windspeed);
    REQUIRE(isnan(windChillResult) == true);
}

TEST_CASE("windchill - temp is != 0 and the windspeed > 0 ")
{
    int temp = 33; 
    int windspeed = 1;
    double windChillResult;
    
    windChillResult = windChill(temp, windspeed);
    REQUIRE(windChillResult == 35);
}

//windchill warning test cases

//temp range is greater than or equal to 32
TEST_CASE("windChillWarning - temp range is 32")
{
    int airTemp = 36;
    int speed = 5; 
    string warning;
    
    warning = windChillWarning(airTemp, speed);
    REQUIRE(warning == "None");
}
TEST_CASE("windChillWarning - temp range is greater than 32")
{
    int airTemp = 33;
    int speed = 1; 
    string warning;
    
    warning = windChillWarning(airTemp, speed);
    REQUIRE(warning == "None");
}

//temp range is greater than or equal to 0 or less than 32
TEST_CASE("windChillWarning - temp range is between 0 and 32")
{
    int airTemp = 18;
    int speed = 16; 
    string warning;
    
    warning = windChillWarning(airTemp, speed);
    REQUIRE(warning == "Minimal");
}

TEST_CASE("windChillWarning - temp range is 0")
{
    int airTemp = 15;
    int speed = 15; 
    string warning;
    
    warning = windChillWarning(airTemp, speed);
    REQUIRE(warning == "Minimal");
}

//temp range is greater than or equal to -20 but less than 0
TEST_CASE("windChillWarning - temp range is between -20 and 0")
{
    int airTemp = 15;
    int speed = 35; 
    string warning;
    
    warning = windChillWarning(airTemp, speed);
    REQUIRE(warning == "Caution");
}

TEST_CASE("windChillWarning - temp range is -20")
{
    int airTemp = -10;
    int speed = 4; 
    string warning;
    
    warning = windChillWarning(airTemp, speed);
    REQUIRE(warning == "Caution");
}

//testing greater than or equal to -40 and less than -20 
TEST_CASE("windChillWarning - temp range is between -40 and -20")
{
    int airTemp = -15;
    int speed = 10; 
    string warning;
    
    warning = windChillWarning(airTemp, speed);
    REQUIRE(warning == "Intermediate");
}

TEST_CASE("windChillWarning - temp range is -40")
{
    int airTemp = -10;
    int speed = 32; 
    string warning;
    
    warning = windChillWarning(airTemp, speed);
    REQUIRE(warning == "Intermediate");
}

TEST_CASE("windChillWarning - temp range is less than -40")
{
    int airTemp = -45;
    int speed = 60;
    string warning;
    
    warning = windChillWarning(airTemp, speed); 
    REQUIRE(warning == "Extreme"); 
}