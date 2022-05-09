#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0007.h"

TEST_CASE("sorts - size 10")
{
    const int SIZE = 10;
    int ids[SIZE] = {101, 87, 98, 35, 15, 
                    27, 20, 38, 40, 67};
    string names[SIZE] = {"Rubble, Betty", "Flintstone, Fred", "Flintstone, Wilma", "Rubble, Barney", "Flintstone, Pebbles", "Yasas, Wijesekara", "Pingus Khan", "Monkey Boi", "Link Hylia", "Guapo Jesus"};
    
    SECTION("sortByID")
    {
        sortByID(names, ids, SIZE);
        REQUIRE(names[0] == "Flintstone, Pebbles");
        REQUIRE(ids[0] == 15);
        REQUIRE(names[9] == "Rubble, Betty");
        REQUIRE(ids[9] == 101);
        REQUIRE(names[8] == "Flintstone, Wilma");
        REQUIRE(ids[8] == 98);
    }
    
    SECTION("sortByName")
    {
        sortByName(names, ids, SIZE);
        REQUIRE(names[0] == "Flintstone, Fred");
        REQUIRE(ids[0] == 87);
        REQUIRE(names[9] == "Yasas, Wijesekara");
        REQUIRE(ids[9] == 27);
        REQUIRE(names[8] == "Rubble, Betty");
        REQUIRE(ids[8] == 101);
    }
    
}

TEST_CASE("searches - size 10")
{
    const int SIZE = 10;
    int ids[SIZE] = {101, 87, 98, 35, 15, 
                    27, 20, 38, 40, 67};
    string names[SIZE] = {"Rubble, Betty", "Flintstone, Fred", "Flintstone, Wilma", "Rubble, Barney", "Flintstone, Pebbles", "Yasas, Wijesekara", "Pingus Khan", "Monkey Boi", "Link Hylia", "Guapo Jesus"};
    
    SECTION("getID - testing for around the middle of the array")
    {
        sortByName(names, ids, SIZE);
        int id = getID(names, ids, SIZE, "Yasas, Wijesekara");
        REQUIRE(id == 27);
    }
    SECTION("getID - testing for the end of the array")
    {
        sortByName(names, ids, SIZE);
        int id = getID(names, ids, SIZE, "Rubble, Betty");
        REQUIRE(id == 101);
    }
    SECTION("getID - testing for the beginning of the array")
    {
        sortByName(names, ids, SIZE);
        int id = getID(names, ids, SIZE, "Flintstone, Pebbles");
        REQUIRE(id == 15);
    }
    SECTION("getName - testing for around the middle of the array")
    {
        sortByID(names, ids, SIZE);
        string name = getName(names, ids, SIZE, 27);
        REQUIRE(name == "Yasas, Wijesekara");
    }
    SECTION("getName - testing for beginning of the array")
    {
        sortByID(names, ids, SIZE);
        string name = getName(names, ids, SIZE, 15);
        REQUIRE(name == "Flintstone, Pebbles");
    }
    SECTION("getName - testing for beginning of the array")
    {
        sortByID(names, ids, SIZE);
        string name = getName(names, ids, SIZE, 101);
        REQUIRE(name == "Rubble, Betty");
    }
}