#include <iostream>


int main()
{
    int number_attempts;
    std::cout << "Please enter your Attempts: ";
    std::cin >> number_attempts;
    for (int i = 0; i < number_attempts; i++)
    {
        int number;
        std::cout << "Please enter your number: ";
        std::cin >> number;

        if (number >= 0 && number <= 10)
        {
            if (number == 4)
            {
                std::cout << "You won!" << std::endl;
            }
            else if (number % 2 == 0)
            {
                std::cout << "You won the wooden spoon." << std::endl;
            }
            else
            {
                std::cout << "You lost!";
            }
        }
        else
        {
            std::cout << "Enter a number between 0-10.";
        }
    }

    return 0;
}
