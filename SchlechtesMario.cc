#include <iostream>
#include <stdlib.h>

#define LEN_X 10u
#define LEFT 'a'
#define RIGHT 'd'

int main()
{
    bool repeat = true;
    while (true)
    {

        unsigned int player = 0;
        unsigned int start = 0;
        unsigned int goal = LEN_X - 1;

        char move;
        bool finished = false;

        while (!finished)
        {
            for (unsigned int i = 0; i < LEN_X; i++)
            {
                if (i != player && i != goal && i != start)
                {
                    std::cout << '.';
                }
                else if (i == player)
                {
                    std::cout << 'P';
                }
                else
                {
                    std::cout << '|';
                }
            }

            std::cin >> move;
            system("clear");

            if (LEFT == move)
            {
                if (player > start)
                {
                    player--;

                    std::cout << "Ein Schritt nach links!";
                }
                else
                {
                    std::cout << "Das war die Wand.." << std::endl;
                }
            }
            else if (RIGHT == move)
            {
                if (player < goal)
                {
                    player++;

                    std::cout << "EIn Schritt nach rechts!";
                }
            }
            else
            {
                std::cout << "Bitte A oder D benutzen!" << std::endl;
            }

            if (player == goal)
            {
                finished = true;

                std::cout << "Du hast es geschafft!" << std::endl;
            }
        }
        std::cout << "Play again? 0=No 1=Yes" << std::endl;
        std::cin >> repeat;

        system("clear");
    }
    return 0;
}
