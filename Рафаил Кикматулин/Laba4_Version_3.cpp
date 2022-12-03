#include <iostream>

using namespace std;

void toLowerCase(char *s) {
    for(int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            cout << (char) (s[i] - 'A' + 'a');
        } else {
            cout << s[i];
        }
    }
}

void toUpperCase(char *s) {
    for(int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            cout << (char) (s[i] - 'a' + 'A');
        } else {
            cout << s[i];
        }
    }
}

int main() {

    cout << "Введите строку" << endl;
    char *res = new char[256];
    cin >> res;

    cout << endl;

    cout << "toLowerCase: ";
    toLowerCase(res);

    cout << endl;

    cout << "toUpperCase: ";
    toUpperCase(res);

    delete [] res;

    return 0;
}
