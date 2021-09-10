#include <iostream>
using namespace std;
int main()
{
    string car[3] = {"Volvo",
                     "Toyota",
                     "Hyundai"};
    // std::cout << car << std::endl;
    // std::cout << car + 1 << std::endl;
    // std::cout << car + 2;
    for (auto &id : car)
    {
        cout << id << endl;
    }
    return 0;
}