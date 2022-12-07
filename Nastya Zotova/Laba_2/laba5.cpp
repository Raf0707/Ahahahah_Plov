#include <iostream>

using namespace std;

enum Month { Январь = 1, Февраль, Март, Апрель, Май, Июнь, Июль, Август, Сентябрь, Октябрь, Ноябрь, Декабрь };

void season(int mon)
{
    switch (mon) {
    case 1:
    case 2:
    case 12:
        cout << "Это зима" << endl;
        break;
    case 3:
    case 4:
    case 5:
        cout << "Это весна" << endl;
        break;
    case 6:
    case 7:
    case 8:
        cout << "Это лето" << endl;
        break;
    case 9:
    case 10:
    case 11:
        cout << "Осень" << endl;
        break;
    default:
        cout << "Введите номер месяца от 1 до 12" << endl;
        break;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Введите номер месяца от 1 до 12" << endl;

    int mon;
    cin >> mon;
    season(mon);

    cout << endl;

    return 0;

}
