#include <iostream>

using namespace std;

enum Month { Январь = 1, Февраль, Март, Апрель, Май, Июнь, Июль, Август, Сентябрь, Октябрь, Ноябрь, Декабрь };

bool visocosnick(int year) {
  bool flag;
  if ((!(year % 4) && (year % 100)) || (!(year % 400))) {
    flag = true;
  } else {
    flag = false;
  }

  return flag;
}

int main() {
  setlocale(LC_ALL, "Russian");

  cout << "Введите год" << endl;
  cout << "Если вам лень придумывать год, то воспользуйтесь обозначениями" << endl;
  cout << "-2 - високосный ; -1 - невисокосный" << endl;
  int year;
  cin >> year;

  if (year < -2) {
    cout << "Вернитесь в нашу эру" << endl;
  }

  cout << "Введите номер месяца" << endl;
  int mon;
  cin >> mon;
  
    switch(mon) {
        case 1:
            cout << "В январе 31 день" << endl;
            break;
        case 2:
          if (visocosnick(year) || year == -2) {
            if (year == -2) {
              cout << "Вы ввели обозначенине високосного года" << endl;
              cout << "В феврале 29 дней" << endl;
            } else {
            cout << year << " год - Високосный" << endl;
            cout << "В феврале 29 дней" << endl;
            }
          } else {
          cout << "В феврале 28 дней" << endl;
          }
            break;
        case 3:
            cout << "В марте 31 день" << endl;
            break;
        case 4:
            cout << "В апреле 30 дней" << endl;
            break;
        case 5:
            cout << "В мае 31 день" << endl;
            break;
        case 6:
            cout << "В июне 30 дней" << endl;
            break;
        case 7:
            cout << "В июле 31 день" << endl;
            break;
        case 8:
            cout << "В августе 31 день" << endl;
            break;
        case 9:
            cout << "В сентябре 30 дней" << endl;
            break;
        case 10:
            cout << "В октябре 31 день" << endl;
            break;
        case 11:
            cout << "В ноябре 30 дней" << endl;
            break;
        case 12:
            cout << "В декабре 31 день" << endl;
            break;
        default:
            cout << "введите номер месяца от 1 до 12" << endl;
            break;

      }

    cout << endl;

  return 0;

}
