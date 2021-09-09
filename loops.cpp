#include <iostream>

int main()
{
    int alive = 5;

    //For Loop

    /*
    for (int i = 0; i < lives; i++)
    {
        std::cout << "Value of i is " << i << std::endl;
    }
    */

    //While Loop

    /*
    int i = 0;
    while (i < alive)
    {
        std::cout << "You have " << i << " libes remaining" << std::endl;
        i += 1;
    } 
    */

    //Do While Loop

    /*
    do
    {
        std::cout << "Done Once";
    } while (true == false);
    */

    //Break and Continue statement

    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            std::cout << "Value of i is 2" << std::endl;
            break;
            // continue; 
        }
        else
        {
            std::cout << "Value of i is not 2" << std::endl;
        }
    }
}
