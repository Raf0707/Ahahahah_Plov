#include <iostream>
#include <cmath>

using namespace std;

double a;
double b;
double c;
double x;

void kvadrat() {
    if ((b * b - 4 * a * c) >= 0)
    {
        x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "Первый корень равен " << x << endl;

        x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "Второй корень равен " << x << endl;
    }
    else
    {
        cout << "Дискриминант меньше 0, корни невещественные." << endl;
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    cout << "Введите значение c: ";
    cin >> c;

    kvadrat();

    return 0;
}
