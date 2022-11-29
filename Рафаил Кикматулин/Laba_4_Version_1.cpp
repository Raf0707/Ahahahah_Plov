#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;


void toLowerCase(char res[10]) {

    char upper_eng[] = {'A', 'B', 'C', 'D', 'E', 'F',
    'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
    'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    for (int i = 0; i < 10; ++i) {

        if (find(begin(upper_eng), end(upper_eng), res[i]) != end(upper_eng))
            cout << char(res[i] + 32);
        else {
            cout << res[i];
        }
    }

    cout << endl;
}

void toUpperCase(char res[10]) {

    char lower_eng[] = {'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    for (int i = 0; i < 10; ++i) {

        if (find(begin(lower_eng), end(lower_eng), res[i]) != end(lower_eng))
            cout << char(res[i] - 32);
        else {
            cout << res[i];
        }
    }

    cout << endl;
}

int main() {

    bool flag = true;

    char res[10];
    cin >> res;

    cout << endl;

    char spets_symb[] = {'!', '@', '#', '$', '%', '&', '?',
    '-', '+', '=', '~', '`'};

    for (int i = 0; i < 10; ++i) {
        if (find(begin(spets_symb), end(spets_symb), res[i]) != end(spets_symb)) {
            cout << "Не... это так не работает... только английские буквы... без русских букв и спец символов...";
            flag = false;
        }
    }

    if (flag) {
        cout << "toLowerCase: ";
        toLowerCase(res);

        cout << "toUpperCase: ";
        toUpperCase(res);
    }



    return 0;
}
