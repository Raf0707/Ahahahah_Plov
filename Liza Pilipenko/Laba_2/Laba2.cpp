#include <iostream>

using namespace std;


int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Размер масива" << endl;
    cin >> n;

    int *mass = new int[n];
    cout << "Элементы масива" << endl;
    for (int r = 0; r < n; r++) {
        cin >> mass[r];
    }

    for (int i = 0; i < n; i++) {
        int cnt = 0;
        bool a = true;
        for (int j = 0; j < n; j++) {
            if (mass[i] == mass[j])
                cnt += 1;
        }
        
        for (int k = 0; k < i; k++) {
            if (mass[i] == mass[k])
                a = false;
        }
        
        if ((cnt > 1) && (a != 0))
            cout << mass[i] << ":" << cnt << endl;

    }
    
    delete[] mass;

    return(0);
    
}
