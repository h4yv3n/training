#include <iostream>
#include <random>

int main()
{
    int winning_number;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 10);
    winning_number = distr(gen);
    bool has_won = false;
    std::cout << "Willkommen bei meinem Ratespiel!" << std::endl;


    do
    {


        int number;
        std::cout << "Please enter your number: ";
        std::cin >> number;

        if (number >= 0 && number <= 10)
        {
            if (number == winning_number)
            {
                std::cout << "Du hast gewonnen!" << std::endl;
                has_won = true;
                std::cout << winning_number;
            }
            else if (number % 2 == 0)
            {
                std::cout << "Ist wenigstens durch 2 teilbar, hier ein Trostpreis." << std::endl;
            }
            else
                std::cout << "Du hast verloren. :< " << std::endl;
        }
    } while (has_won == false);
}
