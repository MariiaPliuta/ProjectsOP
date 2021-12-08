// laba1.5.
//Программа обманщик (ПК и человек. К то загадает большее число, тот и выиграл. Выигрывает ВСЕГДА ПК)


#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;


enum ConsoleColor
{
    Black = 0,
    Blue = 1,
    Green = 2,
    Cyan = 3,
    Red = 4,
    Magenta = 5,
    Brown = 6,
    LightGray = 7,
    DarkGray = 8,
    LightBlue = 9,
    LightGreen = 10,
    LightCyan = 11,
    LightRed = 12,
    LightMagenta = 13,
    Yellow = 14,
    White = 15
} Color;

void SetColor(ConsoleColor text, ConsoleColor background)
{
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");

    while (true)
    {

        int num;
        cout << "Введите число: ";
        cin >> num;

        int num_comp = 1 + num + rand() % 15;

        cout << endl << "Ваше число:  ";

        SetColor(White, Red);
        cout << num << endl << endl;
        SetColor(White, Black);

        cout << "Число комп.: ";

        SetColor(White, Green);
        cout << num_comp << endl << endl;
        SetColor(White, Black);

        cout << "Компьютер победил!";

        _sleep(3500);

        system("cls");

    }


    return 0;
}