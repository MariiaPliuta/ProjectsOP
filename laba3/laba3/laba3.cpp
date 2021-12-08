//lab3


#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <cmath>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main(void)
{
    setlocale(LC_ALL, "Rus");
    double x, y;

    double a = 1.1;
    double b = 2.2;
    double c = 3.3;
    double d = 4.4;

    double t1, t2;

    //printf("Введите x: ");
    //scanf("%lf%lf", &x,&y);

    //printf("Введите y: ");
    //scanf("%lf", &y);

    //printf("\nx = %lf, y = %lf", xa, y);


    cout << "Enter x: "; cin >> x;
    cout << "Enter y: "; cin >> y;
    cout << "\n";

    t1 = (c * log(b + (c * x)) - ((c * log(y)) / 2)) / (pow(a, 2) * pow(c, 2) + pow(b, 2));  //pow-степень
    t2 = (log((1 + cos(a * x) / (a * x)))) / a;

    cout << "t1 = " << t1;
    cout << "\nt2 = " << t2;

}
