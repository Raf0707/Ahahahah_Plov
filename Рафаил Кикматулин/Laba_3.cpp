#include <iostream>

using namespace std;

void prost_chisla(int n, int res[]) {
    int k = 0;
    int divv = 2;
    while (k < 3) {
        while (n % divv == 0) {
            cout << divv << " ";
            res[k] = divv;
            n = n / divv;
            k++;
            
            if (k == 2) {
                divv = n;
            }
        }
        
    divv++;
        
    }
   
} 


int main() {
    int n;
    cin >> n;
    int res[3];
    prost_chisla(n, res);
    return 0;
}
