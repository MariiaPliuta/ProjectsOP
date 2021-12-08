//laba1.2
// Найти площадь треугольника со сторонами a, b, c по формуле Герона


#include <iostream>
#include <math.h>
int main() {

    int a = 3, b = 4, c = 5, p, s;
    p = (a + b + c) / 2;
    s = sqrt(s);      
    s = p * (p - a) * (p - b) * (p - c);
   
    return 0;
}
