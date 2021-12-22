// laba9
// Вариант 16


#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(NULL));         //при каждой компиляции - рандомные числа (для ctime)

    int n;

    cout << "Enter a matrix size: ";
    cin >> n;

    int** a = new int* [n];                //обьявление для двумерного динамического масива

    for (int i = 0; i < n; i++) {
        a[i] = new int[n];
    }

    cout << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 50;                     
            cout << setw(4) << a[i][j] << " ";          
        }
        cout << endl;
    }

    cout << endl;

    cout << "After transform (rotate 90 degrees):\n\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(4) << a[j][n - i - 1] << " ";        
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] a[i];                
    }
    delete[] a;                        

    cout << endl;

    return 0;
}
