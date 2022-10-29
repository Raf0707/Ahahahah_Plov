#include <iostream>
#include <cmath>
#include <algorithm>
#include <list>

using namespace std;

bool prost(int n) {

    if (n <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}



int main() {
    
    int li[] = { 1, 3, 0, 2, 4, 6, 8, 17 };
    
    /*
    int n; 
    int a[100];
    
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    */

    cout << "{ ";

    for (int i = 0; i <= sizeof(li); i++) {
        if (prost(li[i])) {
           cout << li[i] << " ";
        }
    }

    cout << "}";


    return 0;
}
