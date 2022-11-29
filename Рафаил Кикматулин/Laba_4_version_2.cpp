#include <iostream>

using namespace std;

void toLowerCase(char s[10]) {
    for(int i = 0; i < 10; i++){
        if (s[i] >= 'A' && s[i] <= 'Z') {
            cout << (char) (s[i] - 'A' + 'a');
        } else {
            cout << s[i];
        }
    }
}

void toUpperCase(char s[10]) {
    for(int i = 0; i < 10; i++){
        if (s[i] >= 'a' && s[i] <= 'z') {
            cout << (char) (s[i] - 'a' + 'A');
        } else {
            cout << s[i];
        }
    }
}

int main() {

    char res[10];
    cin >> res;

    cout << endl;

    cout << "toLowerCase: ";
    toLowerCase(res);

    cout << endl;

    cout << "toUpperCase: ";
    toUpperCase(res);

    return 0;
}
