#include <iostream>

int main()
{
    int Jahr;
    std::cout << "Das zu überprüfende Schaltjahr eingeben. ";
    std::cin >> Jahr;

    if (Jahr % 4 == 0)
    {
        if (Jahr % 100 == 0)
        {
            if (Jahr % 400 == 0)
            {
                std::cout << "Es ist ein Schaltjahr." << std::endl;
            }
            else
            {
                std::cout << "Es ist leider kein Schaltjahr." << std::endl;
            }
        }
        else
        {
            std::cout << "Es ist ein Schaltjahr!" << std::endl;
        }
    }
    else
    {
        std::cout << "Es ist leider kein Schaltjahr." << std::endl;
    }

    return 0;
}
