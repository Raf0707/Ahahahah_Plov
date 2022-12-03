#include <iostream>

using namespace std;

void toLowerCase(char *s, int n) {
    for(int i = 0; i < n; i++){
        if (s[i] >= 'A' && s[i] <= 'Z') {
            cout << (char) (s[i] - 'A' + 'a');
        } else {
            cout << s[i];
        }
    }
}

void toUpperCase(char *s, int n) {
    for(int i = 0; i < n; i++){
        if (s[i] >= 'a' && s[i] <= 'z') {
            cout << (char) (s[i] - 'a' + 'A');
        } else {
            cout << s[i];
        }
    }
}

int main() {
    
    cout << "Введите длинну массива" << endl;
    int n;
    cin >> n;

    cout << "Введите строку" << endl;
    char *res = new char[n];
    cin >> res;

    cout << endl;

    cout << "toLowerCase: ";
    toLowerCase(res, n);

    cout << endl;

    cout << "toUpperCase: ";
    toUpperCase(res, n);
    
    delete [] res;

    return 0;
}
