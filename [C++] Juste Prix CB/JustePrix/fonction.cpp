#include "fonction.h"
#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <fstream>

int score()
{
    std::ifstream score("score.txt");

    int scores(0);
    if (score)


    {

        char caractere;

        while (score.get(caractere))
        {

            ++scores;
        }

        score.close();
    }
    else
    {
        std::cout << "================================" << std::endl;
        std::cout << "====Une erreur est survenue ====" << std::endl;
        std::cout << "=Lors de l'ouverture du fichier=" << std::endl;
        std::cout << "================================" << std::endl;
        Sleep(5000);
    }
    return scores;
}

void addscore()
{
    std::ofstream ofs;
    ofs.open("score.txt", std::ofstream::out | std::ofstream::app);

    if (score)
    {
        ofs << "x" << std::endl;

        ofs.close();
    }
    else
    {
        std::cout << "================================" << std::endl;
        std::cout << "====Une erreur est survenue ====" << std::endl;
        std::cout << "=Lors de l'ouverture du fichier=" << std::endl;
        std::cout << "================================" << std::endl;
        Sleep(5000);
    }
}
