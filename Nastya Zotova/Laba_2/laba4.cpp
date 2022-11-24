#include <iostream>
using namespace std;

int* input(int size) // Функция ввода
{
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Введите число №" << i + 1 << "-> ";
        cin >> arr[i];
    }
    return arr;
}

void out1(int* arr, int n) // Функция вывода
{
    for (int i = 0; i < n; i++)
        cout << arr[i];
}

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Введите размер массива: " << endl;
    int n = 0;
    cin >> n; // Задаем размер массива
    int* mas = input(n); // Функция ввода
    out1(mas, n); // Функция вывода
    delete[] mas;

    return 0;
}
