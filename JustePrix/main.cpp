#include <iostream>
#include <string>
#include <windows.h>
#include <ctime>
#include <cstdlib>
#include <stdlib.h>
#include <fstream>

using namespace std;
int scores(0);

int menu;

white()
{
    system("cls");
}

int score()
{
    ifstream score("score.txt");

    if (score)
    {

        char caractere; // notre variable o� sera stock� le caract�re

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
        white();
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
        white();
    }
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------
loading()
{
    white();
    std::cout << "********************************" << std::endl;
    std::cout << "***********Loading...***********" << std::endl;
    std::cout << "********************************" << std::endl;
    Sleep(0100);
    white();
    std::cout << "********************************" << std::endl;
    std::cout << "***********Loading..***********" << std::endl;
    std::cout << "********************************" << std::endl;
    Sleep(0100);
    white();
    std::cout << "********************************" << std::endl;
    std::cout << "***********Loading.***********" << std::endl;
    std::cout << "********************************" << std::endl;
    Sleep(0100);
    white();
    std::cout << "********************************" << std::endl;
    std::cout << "***********Loading..***********" << std::endl;
    std::cout << "********************************" << std::endl;
    Sleep(0100);
    white();
    std::cout << "********************************" << std::endl;
    std::cout << "***********Loading...***********" << std::endl;
    std::cout << "********************************" << std::endl;
    Sleep(0100);
    white();
    std::cout << "********************************" << std::endl;
    std::cout << "***********Loading...***********" << std::endl;
    std::cout << "********************************" << std::endl;
    Sleep(0100);
    white();
    std::cout << "********************************" << std::endl;
    std::cout << "***********Loading..***********" << std::endl;
    std::cout << "********************************" << std::endl;
    Sleep(0100);
    white();
    std::cout << "********************************" << std::endl;
    std::cout << "***********Loading.***********" << std::endl;
    std::cout << "********************************" << std::endl;
    Sleep(0100);
    white();
    std::cout << "********************************" << std::endl;
    std::cout << "***********Loading..***********" << std::endl;
    std::cout << "********************************" << std::endl;
    Sleep(0100);
    white();
    std::cout << "********************************" << std::endl;
    std::cout << "***********Loading...***********" << std::endl;
    std::cout << "********************************" << std::endl;
    Sleep(0100);
    white();
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------
string regleverif;

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

int main()
{

    int coups;

    system("MODE CON COLS=32 LINES=25");
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
//Message d'accueil
MENU:
    loading();

    int challenge(0), nbMax;

    std::cout << "================================" << std::endl;
    std::cout << "|   Bienvenue au Juste Prix!   |" << std::endl;
    std::cout << "|                              |" << std::endl;
    std::cout << "|                              |" << std::endl;
    std::cout << "|1________________________Jouer|" << std::endl;
    std::cout << "|2______________________Options|" << std::endl;
    std::cout << "|3________________________Regle|" << std::endl;
    std::cout << "|4________________________Score|" << std::endl;
    std::cout << "|5_____________________________|" << std::endl;
    std::cout << "|                              |" << std::endl;
    std::cout << "|    Pour eteindre, taper 6    |" << std::endl;
    std::cout << "================================" << std::endl;

    cin >> menu; //On stock la r�ponse

    switch (menu)
    {

    case 4:
        int bestscore;
        white();

        bestscore = score();

        std::cout << "===========Tu as gagnes=========" << std::endl;
        std::cout << "===========" << bestscore << " parties===========" << std::endl;
        std::cout << "================================" << std::endl;
        Sleep(2500);
        goto MENU;

        break;

    case 3:
        white();

        std::cout << "********************************" << std::endl;
        std::cout << "***Voici les regles du jeu : ***" << std::endl;
        std::cout << "*Un nombre va etre choisi par l*" << std::endl;
        std::cout << "*a machine en fonction de la di*" << std::endl;
        std::cout << "*fficulte choisi. Vous devrez l*" << std::endl;
        std::cout << "*e trouver en fonction de se qu*" << std::endl;
        std::cout << "****e l'ordinateur vous dit.****" << std::endl;
        std::cout << "********************************" << std::endl;
        std::cout << "********As-tu  compris ?********" << std::endl;
        std::cout << "*************O/N****************" << std::endl;
        std::cout << "********************************" << std::endl;
        cin >> regleverif; //On stock la r�ponse
        system("cls");

        if (regleverif == "O")
        {
            white();
            goto MENU;
        }
        else
        {

            std::cout << "********************************" << std::endl;
            std::cout << "***Faite une partie de test !***" << std::endl;
            std::cout << "********************************" << std::endl;
            Sleep(5000);
            white();
            goto MENU;
        }

        break;

    case 1:
        white();
        std::cout << "================================" << std::endl;
        std::cout << "|           Bon Jeu!           |" << std::endl;
        std::cout << "================================" << std::endl;
        Sleep(2000);
        break;

    case 2:

        int select;
        white();
PARAMETRE:
        white();
        std::cout << "================================" << std::endl;
        std::cout << "|     Voici les parametres     |" << std::endl;
        std::cout << "|                              |" << std::endl;
        std::cout << "|Couleur du jeu_______________1|" << std::endl;
        std::cout << "|Mode de jeu__________________2|" << std::endl;
        std::cout << "|Fond du jeu__________________3|" << std::endl;
        std::cout << "|                              |" << std::endl;
        std::cout << "|    Pour revenir, taper 4.    |" << std::endl;
        std::cout << "================================" << std::endl;

        cin >> select;
        switch (select)
        {

        case 1:
            int couleur;
            white();
            std::cout << "================================" << std::endl;
            std::cout << "|      Voici les couleurs      |" << std::endl;
            std::cout << "|                              |" << std::endl;
            std::cout << "|Attention ! Si vous choisissez|" << std::endl;
            std::cout << "| une couleur, vous ne pourrez |" << std::endl;
            std::cout << "|     pas mettre un fond !     |" << std::endl;
            std::cout << "|                              |" << std::endl;
            std::cout << "|1________________________rouge|" << std::endl;
            std::cout << "|2_________________________bleu|" << std::endl;
            std::cout << "|3_________________________gris|" << std::endl;
            std::cout << "|4_______________________violet|" << std::endl;
            std::cout << "|5_________________________vert|" << std::endl;
            std::cout << "|                              |" << std::endl;
            std::cout << "|    Pour annuler, taper 6.    |" << std::endl;
            std::cout << "================================" << std::endl;
            cin >> couleur;
            switch (couleur)
            {
            case 1:
                system("Color 4");
                goto PARAMETRE;
                white();
                break;
            case 2:
                system("Color 1");
                goto PARAMETRE;
                white();
                break;
            case 3:
                system("Color 8");
                goto PARAMETRE;
                white();
                break;
            case 4:
                system("Color 5");
                goto PARAMETRE;
                white();
                break;
            case 5:
                system("Color 2");
                goto PARAMETRE;
                white();
                break;
            default:
                goto PARAMETRE;
                white();
                break;
            }
            break;

        case 3:
            int couleurf;
            white();
            std::cout << "================================" << std::endl;
            std::cout << "|      Voici les couleurs      |" << std::endl;
            std::cout << "|                              |" << std::endl;
            std::cout << "|Attention ! Si vous choisissez|" << std::endl;
            std::cout << "| une couleur de fond, vous ne |" << std::endl;
            std::cout << "|    pourrez pas mettre une    |" << std::endl;
            std::cout << "|      couleur au texte !      |" << std::endl;
            std::cout << "|                              |" << std::endl;
            std::cout << "|1________________________rouge|" << std::endl;
            std::cout << "|2_________________________bleu|" << std::endl;
            std::cout << "|3_________________________gris|" << std::endl;
            std::cout << "|4_______________________violet|" << std::endl;
            std::cout << "|5_________________________vert|" << std::endl;
            std::cout << "|                              |" << std::endl;
            std::cout << "|    Pour annuler, taper 6.    |" << std::endl;
            std::cout << "================================" << std::endl;
            cin >> couleurf;
            switch (couleurf)
            {
            case 1:
                system("Color C7");
                main();
                break;
            case 2:
                system("Color B7");
                goto PARAMETRE;
                white();
                ;
                break;
            case 3:
                system("Color F7");
                goto PARAMETRE;
                white();
                break;
            case 4:
                system("Color D7");
                goto PARAMETRE;
                white();
                break;
            case 5:
                system("Color A7");
                goto PARAMETRE;
                white();
                break;
            default:
                goto PARAMETRE;
                white();
                break;
            }
            break;

        case 2:
            int mode(0);
            white();
            std::cout << "================================" << std::endl;
            std::cout << "|     Voici quelques modes     |" << std::endl;
            std::cout << "|                              |" << std::endl;
            std::cout << "|  Les modes de jeu change la  |" << std::endl;
            std::cout << "|  maniere de jouer.Pour plus  |" << std::endl;
            std::cout << "|     d'information faite 5    |" << std::endl;
            std::cout << "|                              |" << std::endl;
            std::cout << "|1_______________challenge mode|" << std::endl;
            std::cout << "|2_____________________________|" << std::endl;
            std::cout << "|3_____________________________|" << std::endl;
            std::cout << "|4_____________________________|" << std::endl;
            std::cout << "|5__________________information|" << std::endl;
            std::cout << "|                              |" << std::endl;
            std::cout << "|    Pour annuler, taper 6.    |" << std::endl;
            std::cout << "================================" << std::endl;
            cin >> mode;
            switch (mode)
            {
            case 1:
                challenge = 1;

                white();

                std::cout << "********************************" << std::endl;
                std::cout << "*****Challenge mode active!*****" << std::endl;
                std::cout << "Entre le nombre de coup maximal!" << std::endl;
                std::cout << "********************************" << std::endl;
                cin >> coups;
                goto PARAMETRE;
                white();
                break;

                break;

            case 5:
                white();
                std::cout << "================================" << std::endl;
                std::cout << "|         Informations         |" << std::endl;
                std::cout << "|                              |" << std::endl;
                std::cout << "|                              |" << std::endl;
                std::cout << "|1_____________________________|" << std::endl;
                std::cout << "|Trouve le bon nombre avant une|" << std::endl;
                std::cout << "| limite que tu auras defini ! |" << std::endl;
                std::cout << "|                              |" << std::endl;
                std::cout << "|3_____________________________|" << std::endl;
                std::cout << "|4_____________________________|" << std::endl;
                std::cout << "|                              |" << std::endl;
                std::cout << "================================" << std::endl;
                Sleep(5000);
                goto PARAMETRE;
                white();
                break;

            default:
                goto PARAMETRE;
                white();
                break;
            }
            break;
        }
    default:
        goto MENU;
        white();
        break;
        break;
    }

    //-----------------------------------------------------------------------------------------------------------------------------------------------------------

    int difficulty;
    white();
    std::cout << "================================" << std::endl;
    std::cout << "======Difficulte du jeu...======" << std::endl;
    std::cout << "====| [<1>-FACILE : 1-100] |====" << std::endl;
    std::cout << "====| [<2>-MOYEN : 1-1000] |====" << std::endl;
    std::cout << "==|[<3>-DIFFICILE: 1-100,000]|==" << std::endl;
    std::cout << "====|[<4>-MODIFIABLE: 1-??]|====" << std::endl;
    std::cout << "================================" << std::endl;
    cin >> difficulty;
    white();

    int nbComputer;
    int nbdifficulty;
    switch (difficulty)
    {

    case 1:
        std::cout << "================================" << std::endl;
        std::cout << "======Difficulte " << difficulty << " choisi !=====" << std::endl;
        std::cout << "================================" << std::endl;
        nbdifficulty = 100;
        srand(time(0));
        nbComputer = rand() % 100;
        break;

    case 2:
        std::cout << "================================" << std::endl;
        std::cout << "======Difficulte " << difficulty << " choisi !=====" << std::endl;
        std::cout << "================================" << std::endl;
        nbdifficulty = 1000;
        srand(time(0));
        nbComputer = rand() % 1000;
        break;

    case 3:
        std::cout << "================================" << std::endl;
        std::cout << "======Difficulte " << difficulty << " choisi !=====" << std::endl;
        std::cout << "================================" << std::endl;
        nbdifficulty = 100000;
        srand(time(0));
        nbComputer = rand() % 100000;
        break;

    case 4:
        std::cout << "================================" << std::endl;
        std::cout << "======Diffuclte " << difficulty << " choisi !======" << std::endl;
        std::cout << "====Entrez un nombre maximal====" << std::endl;
        std::cout << "================================" << std::endl;
        cin >> nbMax;
        nbdifficulty = nbMax;

        srand(time(0));
        nbComputer = rand() % nbMax;
        break;

    default:
        std::cout << "================================" << std::endl;
        std::cout << "======Ecrivez un nombre !======================================" << std::endl;
        Sleep(2000);
        white();
        main();
        break;
    }

    //-----------------------------------------------------------------------------------------------------------------------------------------------------------
    Sleep(2000);
    std::cout << "==Generation d'un nombre entre======1-" << nbdifficulty << "====--------====" << std::endl;
    Sleep(100);
    white();
    std::cout << "==Generation d'un nombre entre======1-" << nbdifficulty << "====O------====" << std::endl;
    Sleep(1000);
    white();
    std::cout << "==Generation d'un nombre entre======1-" << nbdifficulty << "====OO------====" << std::endl;
    Sleep(45);
    white();
    std::cout << "==Generation d'un nombre entre======1-" << nbdifficulty << "====OOO-----====" << std::endl;
    Sleep(910);
    white();
    std::cout << "==Generation d'un nombre entre======1-" << nbdifficulty << "====OOOO----====" << std::endl;
    Sleep(450);
    white();
    std::cout << "==Generation d'un nombre entre======1-" << nbdifficulty << "====OOOOO---====" << std::endl;
    Sleep(100);
    white();
    std::cout << "==Generation d'un nombre entre======1-" << nbdifficulty << "====OOOOOO--====" << std::endl;
    Sleep(200);
    white();
    std::cout << "==Generation d'un nombre entre======1-" << nbdifficulty << "====OOOOOOO-====" << std::endl;
    Sleep(20);
    white();
    std::cout << "==Generation d'un nombre entre======1-" << nbdifficulty << "====OOOOOOOO====" << std::endl;
    Sleep(1000);
    white();

    int nbPlayer, tentative(0);
    std::cout << "********************************" << std::endl;
    std::cout << "Ecrivez un nombre entre 1-" << nbdifficulty << "" << std::endl;
    std::cout << "********************************" << std::endl;
    do
    {

        cin >> nbPlayer;
        if (nbPlayer < nbComputer)
        {
            if (tentative == 5)
            {
                white();
            }
            if (tentative == 15)
            {
                white();
            }
            if (tentative == 10)
            {
                white();
            }
            if (tentative == 20)
            {
                white();
            }
            if (tentative == 25)
            {
                white();
            }
            if (tentative == 30)
            {
                white();
            }

            std::cout << "********************************" << std::endl;
            std::cout << "****Le nombre est plus grand****" << std::endl;
            std::cout << "********************************" << std::endl;

            if (challenge == 1)
            {
                if (coups == 0)
                {
                    std::cout << "********************************" << std::endl;
                    std::cout << "*************Perdu!*************" << std::endl;
                    std::cout << "**Il ne vous reste aucun essai**" << std::endl;
                    std::cout << "********************************" << std::endl;
                    Sleep(5000);
                    goto MENU;
                }
                else
                {
                    std::cout << "Il te reste " << coups << " essais." << std::endl;
                    --coups;
                }
            }
            ++tentative;
        }
        else if (nbPlayer > nbComputer)
        {

            std::cout << "********************************" << std::endl;
            std::cout << "****Le nombre est plus petit****" << std::endl;
            std::cout << "********************************" << std::endl;

            if (challenge == 1)
            {
                if (coups == 0)
                {
                    std::cout << "********************************" << std::endl;
                    std::cout << "*************Perdu!*************" << std::endl;
                    std::cout << "**Il ne vous reste aucun essai**" << std::endl;
                    std::cout << "********************************" << std::endl;
                    Sleep(5000);
                    main();
                }
                else
                {
                    std::cout << "Il te reste " << coups << " essais." << std::endl;
                    --coups;
                }
            }

            ++tentative;
        }
        else
        {

            if (tentative == 5)
            {
                white();
            }
            if (tentative == 15)
            {
                white();
            }
            if (tentative == 10)
            {
                white();
            }
            if (tentative == 20)
            {
                white();
            }
            if (tentative == 25)
            {
                white();
            }
            if (tentative == 30)
            {
                white();
            }
            std::cout << "********************************" << std::endl;
            std::cout << "************Bravo !*************Vous avez reussi en " << tentative << " coup(s) !" << std::endl;
            std::cout << "********************************" << std::endl;
            addscore();
            Sleep(5000);
            white();
            goto MENU;
        }

    }
    while (nbPlayer != nbComputer);

    return 0;
}
