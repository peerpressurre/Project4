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
            cout << "|------------";
            SetConsoleTextAttribute(hConsole, 14);
            cout << "LAB 2";
            SetConsoleTextAttribute(hConsole, 11);
            cout << "-------------| " << endl;

            //-------------------line 1------------------
            SetConsoleTextAttribute(hConsole, 11);
            cout << "|         ";
            SetConsoleTextAttribute(hConsole, 14);
            cout << "Exercise 1";
            SetConsoleTextAttribute(hConsole, 11);
            cout << "           |" << endl;

            //-------------------line 2------------------
            SetConsoleTextAttribute(hConsole, 11);
            cout << "|         ";
            SetConsoleTextAttribute(hConsole, 14);
            cout << "Exercise 2";
            SetConsoleTextAttribute(hConsole, 11);
            cout << "           |" << endl;

            //-------------------line 3------------------
            SetConsoleTextAttribute(hConsole, 11);
            cout << "|         ";
            SetConsoleTextAttribute(hConsole, 14);
            cout << "Exercise 3";
            SetConsoleTextAttribute(hConsole, 11);
            cout << "            |" << endl;

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
            SetConsoleTextAttribute(hConsole, 15);
            cout << "Завдання 1\: Користувач з клавіатури вводить 5 оцінок студента\.Визначити\, чи допущений студент до іспиту\. Студент отримує допуск\, якщо його середній бал 4 і вище\." << endl;
            SetConsoleTextAttribute(hConsole, 11);
            int a, b, c, d, e, res;
            std::cout << "First score->";
            SetConsoleTextAttribute(hConsole, 15);
            std::cin >> a;
            SetConsoleTextAttribute(hConsole, 11);
            std::cout << "Second score->";
            SetConsoleTextAttribute(hConsole, 15);
            std::cin >> b;
            SetConsoleTextAttribute(hConsole, 11);
            std::cout << "Third score->";
            SetConsoleTextAttribute(hConsole, 15);
            std::cin >> c;
            SetConsoleTextAttribute(hConsole, 11);
            std::cout << "Forth score->"; 
            SetConsoleTextAttribute(hConsole, 15);
            std::cin >> d;
            SetConsoleTextAttribute(hConsole, 11);
            std::cout << "Fifth score->";
            SetConsoleTextAttribute(hConsole, 15);
            std::cin >> e;
            SetConsoleTextAttribute(hConsole, 11);
            res = (a + b + c + d + e) / 5;

            if (res > 4)
            {
                cout << "Congratulations\!You\'re admitted to the examination";
            }
            else
            {
                cout << "Sorry\, your score is too low to be admitted to examination" << endl;

            }
            system("pause");
        }break;
        case 2:
        {
            SetConsoleTextAttribute(hConsole, 15);
            cout << "Завдання 2\: Користувач вводить з клавіатури число\.Якщо воно парне\, помножити його на три\, інакше \— поділити на два\. Результат вивести на екран\." << endl;
            SetConsoleTextAttribute(hConsole, 11);
            int num;
            std::cout << "Enter a number->";
            SetConsoleTextAttribute(hConsole, 15);
            std::cin >> num;
            SetConsoleTextAttribute(hConsole, 11);
            if (num & 2 == 0)
            {
                cout << num << "* 3 = " << num * 3;
            }
            else
            {
                cout << num << "/ 2 = " << num / 2 << endl;

            }
            system("pause");

        }break;
        case 3:
        {
            SetConsoleTextAttribute(hConsole, 15);
            cout << "Завдання 3\. Написати програму-калькулятор\. Користувач вводить два числа і вибирає арифметичну дію\. Вивести на екран результат\." << endl;
            SetConsoleTextAttribute(hConsole, 11);
            int num1, num2;
            std::cout << "Enter first number->";
            SetConsoleTextAttribute(hConsole, 15);
            std::cin >> num1;
            SetConsoleTextAttribute(hConsole, 11);
            std::cout << "Enter second number->";
            SetConsoleTextAttribute(hConsole, 15);
            std::cin >> num2;
            SetConsoleTextAttribute(hConsole, 11);

            //-------------------line 0------------------
            SetConsoleTextAttribute(hConsole, 11);
            cout << "|------------";
            SetConsoleTextAttribute(hConsole, 14);
            cout << "CHOOSE OPERATION";
            SetConsoleTextAttribute(hConsole, 11);
            cout << "-------------| " << endl;

            //-------------------line 1------------------
            SetConsoleTextAttribute(hConsole, 11);
            cout << "|         ";
            SetConsoleTextAttribute(hConsole, 14);
            cout << "1 - Addition";
            SetConsoleTextAttribute(hConsole, 11);
            cout << "           |" << endl;

            //-------------------line 2------------------
            SetConsoleTextAttribute(hConsole, 11);
            cout << "|         ";
            SetConsoleTextAttribute(hConsole, 14);
            cout << "2 - Substraction";
            SetConsoleTextAttribute(hConsole, 11);
            cout << "           |" << endl;

            //-------------------line 3------------------
            SetConsoleTextAttribute(hConsole, 11);
            cout << "|         ";
            SetConsoleTextAttribute(hConsole, 14);
            cout << "3 - Multiplication";
            SetConsoleTextAttribute(hConsole, 11);
            cout << "            |" << endl;

            //-------------------line 4------------------
            SetConsoleTextAttribute(hConsole, 11);
            cout << "|         ";
            SetConsoleTextAttribute(hConsole, 14);
            cout << "4 - Division";
            SetConsoleTextAttribute(hConsole, 11);
            cout << "            |" << endl;

            //-------------------end line------------------
            SetConsoleTextAttribute(hConsole, 11);
            cout << "|------------------------------|" << endl;


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
        }

    } while (true);

    return 0;
}