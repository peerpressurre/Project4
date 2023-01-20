#include <iostream>
#include <chrono>
#include <thread>
#include <time.h>
#include <Windows.h>

using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    do
    {
        system("cls");
        {
            //-------------------line 0------------------
            SetConsoleTextAttribute(hConsole, 11);
            cout << "|-----------";
            SetConsoleTextAttribute(hConsole, 14);
            cout << "FIRST LAB";
            SetConsoleTextAttribute(hConsole, 11);
            cout << "----------| " << endl;
            //-------------------line 1------------------
            SetConsoleTextAttribute(hConsole, 11);
            cout << "|       ";
            SetConsoleTextAttribute(hConsole, 14);
            cout << "1 - even numbers";
            SetConsoleTextAttribute(hConsole, 11);
            cout << "       |" << endl;
            //-------------------line 2------------------
            SetConsoleTextAttribute(hConsole, 11);
            cout << "|       ";
            SetConsoleTextAttribute(hConsole, 14);
            cout << "2 - min number";
            SetConsoleTextAttribute(hConsole, 11);
            cout << "         |" << endl;
            //-------------------line 3------------------
            SetConsoleTextAttribute(hConsole, 11);
            cout << "|       ";
            SetConsoleTextAttribute(hConsole, 14);
            cout << "3 - positive/negative";
            SetConsoleTextAttribute(hConsole, 11);
            cout << "  |" << endl;
            //-------------------line 4------------------
            SetConsoleTextAttribute(hConsole, 11);
            cout << "|       ";
            SetConsoleTextAttribute(hConsole, 14);
            cout << "4 - equality";
            SetConsoleTextAttribute(hConsole, 11);
            cout << "           |" << endl;
            //-------------------end line------------------
            SetConsoleTextAttribute(hConsole, 11);
            cout << "|------------------------------|" << endl;
        }
       
        uint16_t operation;
        std::cout << "Chose excercise->";
        SetConsoleTextAttribute(hConsole, 12);
        std::cin >> operation;
        SetConsoleTextAttribute(hConsole, 11);
        switch (operation)
        {
        case 0:
        {
            SetConsoleTextAttribute(hConsole, 8);
            cout << "Exit..." << endl;
            SetConsoleTextAttribute(hConsole, 8);
            exit(0);
        }break;

        case 1:
        {
            int num;
            std::cout << "Enter number->";
            SetConsoleTextAttribute(hConsole, 12);
            std::cin >> num;
            SetConsoleTextAttribute(hConsole, 11);
            if (num % 2 == 0)
            {
                std::cout << "The number is even" << endl;
            }
            else
            {
                std::cout << "The number is odd" << endl;

            }
            system("pause");
        }break;
        case 2:
        {
            int a, b;
            std::cout << "Enter a->";
            SetConsoleTextAttribute(hConsole, 12);
            std::cin >> a;
            SetConsoleTextAttribute(hConsole, 11);
            std::cout << "Enter b->";
            SetConsoleTextAttribute(hConsole, 12);
            std::cin >> b;
            SetConsoleTextAttribute(hConsole, 11);
            if (a < b)
            {
                SetConsoleTextAttribute(hConsole, 12);
                std::cout << a;
                SetConsoleTextAttribute(hConsole, 11);
                std::cout << " - is smaller" << endl;
            }
            else
            {
                SetConsoleTextAttribute(hConsole, 12);
                std::cout << b;
                SetConsoleTextAttribute(hConsole, 11);
                std::cout << " - is smaller" << endl;

            }
            system("pause");

        }break;
        case 3:
        {
            int num3;
            std::cout << "Enter number->";
            SetConsoleTextAttribute(hConsole, 12);
            std::cin >> num3;
            SetConsoleTextAttribute(hConsole, 11);

            if (num3 > 0)
            {
                std::cout << "The number is positive" << endl;
            }
            else if (num3 < 0)
            {
                std::cout << "The number is negative" << endl;
            }
            else
            {
                std::cout << "The number equals 0" << endl;

            }
            system("pause");

        }break;
        case 4:
        {
            int a, b;
            std::cout << "Enter a->";
            SetConsoleTextAttribute(hConsole, 12);
            std::cin >> a;
            SetConsoleTextAttribute(hConsole, 11);
            std::cout << "Enter b->";
            SetConsoleTextAttribute(hConsole, 12);
            std::cin >> b;
            SetConsoleTextAttribute(hConsole, 11);
            if (a < b)
            {
            

                std::cout << ">>>";
                SetConsoleTextAttribute(hConsole, 12);
                std::cout << a << b << endl;
                SetConsoleTextAttribute(hConsole, 11);
            }
            else if (a > b)
            {
                std::cout << ">>>";
                SetConsoleTextAttribute(hConsole, 12);
                std::cout << b << a << endl;
                SetConsoleTextAttribute(hConsole, 11);
            }
            else
            {
                std::cout << "Numbers are equal" << endl;
            }
            system("pause");
        }break;
        }

    } while (true);
         
    return 0;
}