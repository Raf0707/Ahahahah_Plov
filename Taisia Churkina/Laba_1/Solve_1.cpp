// Подключение библиотек
#include <iostream>
#include <math.h>

using namespace std;

// Описание функции main - основной программы
int main() {
    // Объявление переменной целочисленного типа
    int n;

    // Ввод переменной n
    cin >> n;

    // вывод на экран результата (переменной n в 2 системе счисления)
    cout<<bitset<32>(n)<<endl;

    // возврат кода ошибки 0, означающего,
    // что программа выполнилась успешно
    return 0;
    
}
