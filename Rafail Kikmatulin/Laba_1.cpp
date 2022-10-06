#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;
    
    if (n <= 1) {
        cout << "Число не является ни простым, ни составным" << endl;
        return 0;
    }

    for (int i = 2; i <= sqrt(n); ++i) {

        if (n % i == 0) {
            cout << "Число не является простым" << endl;
            return 0;
        }

    }

    cout << "Простое" << endl;

    return 0;

}
