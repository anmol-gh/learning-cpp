#include <iostream>

//functions

int Multiply(int a, int b)
{
    return a * b;
}
int main()
{
    int result1 = Multiply(10, 6);
    std::cout << result1 << std::endl;
    int result2 = Multiply(9, 6);
    std::cout << result2 << std::endl;
    int result3 = Multiply(80, 6);
    std::cout << result3 << std::endl;
    int result4 = Multiply(1, 6);
    std::cout << result4 << std::endl;
}