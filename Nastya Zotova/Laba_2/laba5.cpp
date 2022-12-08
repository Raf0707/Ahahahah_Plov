#include <iostream>
#include <cmath>

using namespace std;

typedef struct complex
{
    double real;
    double imag;

    void pokazatel()
    {
        double modul = sqrt(real * real + imag * imag);
        double x = real, y = imag, pi = 3.14, fi;
        if (x > 0)
            fi = atan(y / x);
        if (x < 0 && y >= 0)
            fi = atan(y / x) + pi;
        if (x < 0 && y < 0)
            fi = atan(y / x) - pi;
        if (x == 0 && y > 0)
            fi = pi / 2;
        if (x == 0 && y < 0)
            fi = -pi / 2;
        cout << endl;
        cout << "Показательная форма комплексного числа:" << endl;
        cout << "z= " << modul << " * e^i " << "(" << fi << ")" << endl;
        cout << endl;
    }

    void stepen(int s)
    {
        double modul = sqrt(real * real + imag * imag);
        double x = real, y = imag, pi = 3.14, fi;
        if (x > 0)
            fi = atan(y / x);
        if (x < 0 && y >= 0)
            fi = atan(y / x) + pi;
        if (x < 0 && y < 0)
            fi = atan(y / x) - pi;
        if (x == 0 && y > 0)
            fi = pi / 2;
        if (x == 0 && y < 0)
            fi = -pi / 2;
        double x1 = cos(s * fi);
        double y1 = sin(s * fi);
        double r = pow(modul, s);
        cout << "z2= " << r << "*((" << x1 << ")+i*(" << y1 << "))" << endl;
    }
}complexNumber;

void umnojenie(complexNumber n1, complexNumber n2)
{
    double modul1 = sqrt(n1.real * n1.real + n1.imag * n1.imag);
    double modul2 = sqrt(n2.real * n2.real + n2.imag * n2.imag);
    double modul = modul1 * modul2;
    double x = n1.real, y = n1.imag, pi = 3.14, fi, fi2, x2 = n2.real, y2 = n2.imag;
    if (x > 0)
        fi = atan(y / x);
    if (x < 0 && y >= 0)
        fi = atan(y / x) + pi;
    if (x < 0 && y < 0)
        fi = atan(y / x) - pi;
    if (x == 0 && y > 0)
        fi = pi / 2;
    if (x == 0 && y < 0)
        fi = -pi / 2;

    if (x2 > 0)
        fi2 = atan(y2 / x2);
    if (x2 < 0 && y2 >= 0)
        fi2 = atan(y2 / x2) + pi;
    if (x2 < 0 && y2 < 0)
        fi2 = atan(y2 / x2) - pi;
    if (x2 == 0 && y2 > 0)
        fi2 = pi / 2;
    if (x2 == 0 && y2 < 0)
        fi2 = -pi / 2;
    double x3 = cos(fi + fi2);
    double y3 = sin(fi + fi2);
    double fi4 = fi + fi2;
    cout<<"z= "<<modul << "* e^i" << "(" << fi4 << ")" << endl;
}

void delenie(complexNumber n1, complexNumber n2)
{
    double modul1 = sqrt(n1.real * n1.real + n1.imag * n1.imag);
    double modul2 = sqrt(n2.real * n2.real + n2.imag * n2.imag);
    double modul = modul1 / modul2;
    double x = n1.real, y = n1.imag, pi = 3.14, fi, fi2, x2 = n2.real, y2 = n2.imag;
    if (x > 0)
        fi = atan(y / x);
    if (x < 0 && y >= 0)
        fi = atan(y / x) + pi;
    if (x < 0 && y < 0)
        fi = atan(y / x) - pi;
    if (x == 0 && y > 0)
        fi = pi / 2;
    if (x == 0 && y < 0)
        fi = -pi / 2;

    if (x2 > 0)
        fi2 = atan(y2 / x2);
    if (x2 < 0 && y2 >= 0)
        fi2 = atan(y2 / x2) + pi;
    if (x2 < 0 && y2 < 0)
        fi2 = atan(y2 / x2) - pi;
    if (x2 == 0 && y2 > 0)
        fi2 = pi / 2;
    if (x2 == 0 && y2 < 0)
        fi2 = -pi / 2;
    double x3 = cos(fi + fi2);
    double y3 = sin(fi + fi2);
    double fi4 = fi - fi2;
    cout << "z= " << modul << "* e^i" << "(" << fi4 << ")" << endl;
}

int main() {

    setlocale(LC_ALL, "Russian");
    complexNumber n1, n2;
    cout << "Первое комплексное число" << endl;
    cout << "Введите действительную и мнимую часть" << endl;
    cin >> n1.real >> n1.imag;
    cout << "Второе комплексное число" << endl;
    cout << "Введите действительную и мнимую часть" << endl;
    cin >> n2.real >> n2.imag;

    //Преобразование из алгебраической формы в показательную

    n1.pokazatel();

    //Возведение в целую положительную степень

    cout << "Введите значение степени" << endl;
    int stepen;
    cin >> stepen;
    n1.stepen(stepen);
    cout << endl;
    //Умножение в показательной форме
    umnojenie(n1, n2);
    cout << endl;
    //Деление в показательной форме
    delenie(n1, n2);
    cout << endl;
    return 0;

}
