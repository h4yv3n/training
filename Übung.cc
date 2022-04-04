#include <iostream>

// Absoluter Wert soll festgestellt werden
// also wenn x > 0 ist muss x * (-1) gerechnet werden

int main()
{
    int value;
    std::cout << "Please enter the value: ";
    std::cin >> value;

    double absolute;

    if (value < 0)
    {
        absolute = (-1) * value;
    }
    else
    {
        absolute = value;
    }

    std::cout << "The absolute value is: " << absolute << std::endl;

    return 0;
}
