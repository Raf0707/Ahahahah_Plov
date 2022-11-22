#include <iostream>

using namespace std;

void prost_chisla(int n) {
    int k = 0;
    int* res = new int[128];
    int divv = 2;
    while (k < 3) {
        while (n % divv == 0) {
            cout << divv << " ";
            //res[k] = divv;
            n = n / divv;
            k++;
            
            if (k == 2) {
                divv = n;
            }
        }
        
    divv++;
        
    }
    /*
    int a = (sizeof(res) / sizeof(res[0]));
    while (a != 3) {
        for (int i = 0; i < a; ++i) {
            res[0] *= res[1];
            res[i] = res[i + 1];
        }
    }
    
    for (int i = 0; i < k; ++i) {
	    cout << res[i] << " ";
	}
	*/
} 


int main() {
    int n;
    cin >> n;
    
    prost_chisla(n);
    return 0;
}
