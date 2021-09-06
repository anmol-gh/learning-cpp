#include <iostream>

//int = 4 Bytes = 32 bits && 1 bit is occupied for +/-, 31bits can store approx integer till 2 billion.

//char

//float = 4 Bytes

//double = 8 Bytes

//bool == 1 byte && true[1/any other number] or false[0]

// size of (variable_name) is used to get the size of a variable
int main()
{
    int integer = 10;
    std::cout << integer <<std::endl;
    float decimal = 5.3f; //float always ends with f or F
    std::cout << decimal;
}