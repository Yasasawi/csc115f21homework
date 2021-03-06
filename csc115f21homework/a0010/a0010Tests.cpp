#define CATCH_CONFIG_RUNNER
#include "..\\catch.hpp"
#include "a0010.h"

const bool RUNCATCH = false;

//write test cases here

// write function main here
int main(int argc, char *argv[])
{
    Catch::Session session;
    int result;
    int i = 0;
    int j;
    int arrSize;
    int num[1000];
    double average;
    int sum;
    int size = sizeof(num)/sizeof(num[0]);
    if(RUNCATCH)
    {
        result = session.run();
        if( result != 0)
        {
            cout << "Test cases didn't pass." << endl;
            return result;
        }
    }
    
    // write your code here.
    cout << "Enter up to 1000 integers, <ctrl>-z to stop: ";
    while(i < 1000 && cin >> num[i])
    { 
        i++;
    }
    arrSize = i; 
    
    sortArray(num, arrSize);
    sum = sumArray(num, arrSize);
    average = (sum / (double)arrSize);
    cout << endl; 
    cout << "Quantity: " << arrSize << endl; 
    cout << "Range: " << num[0] << " to " << num[arrSize - 1] << endl; 
    cout << "Sum: " << sum << endl; 
    cout << "Average: " << setprecision(4) << fixed << average << endl;
    cout << "Data: " << endl; 
    for(i = 0; i < arrSize; i++)
    {
        if(((i+1) % 5 == 0))
        {
            cout << num[i] << endl; 
        }
        else
        {
            cout << setw(10) << num[i] << setw(10);
        }
    }
    cout << endl; 
    return 0;
} 

// write function test cases here
TEST_CASE("sumArray - array of 2")
{
    int arr[2] = {1, 2};
    int size = 2;
    int sum; 
    
    sum = sumArray(arr, size);
    
    REQUIRE(sum == 3); 
}

TEST_CASE("sumArray - array of 7")
{
    int arr[7] = {1, 2, 13, 15, 20, 3, 32};
    int size = 7;
    int sum; 
    
    sum = sumArray(arr, size);
    
    REQUIRE(sum == 86); 
}

TEST_CASE("sumArray - array of 11")
{
    int arr[11] = {1, 2, 13, 15, 20, 3, 32, 201, 5, 21, 45};
    int size = 11;
    int sum; 
    
    sum = sumArray(arr, size);
    
    REQUIRE(sum == 358); 
}


TEST_CASE("sortArray - array of 2")
{
    int arr[2] = {1, 0};
    int size = 2; 
    
    sortArray(arr, size);
    
    REQUIRE(arr[0] == 0);
    REQUIRE(arr[1] == 1);
}

TEST_CASE("sortArray - array of 5")
{
    int arr[5] = {1, 0, 9, 301, 10};
    int size = 5; 
    
    sortArray(arr, size);
    
    REQUIRE(arr[0] == 0);
    REQUIRE(arr[2] == 9);
    REQUIRE(arr[4] == 301);
}

TEST_CASE("sortArray - array of 12")
{
    int arr[12] = {1, 0, 9, 301, 10, 2002, 12, 3, 21, 15, 201, 17};
    int size = 12; 
    
    sortArray(arr, size);
    
    REQUIRE(arr[0] == 0);
    REQUIRE(arr[5] == 12);
    REQUIRE(arr[11] == 2002);
}