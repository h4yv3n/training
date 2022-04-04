#include <iostream>

// Equal ==
// Unequal !=
// Less < <=
// Greater > >=
// Or ||
// And &&

//

int main()
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
    return 0;
}
