#include <iostream>
#include <cmath>
#include <algorithm>
#include <list>

using namespace std;

// Laba3
bool chet(int n) {
    if (n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

template <typename typed, size_t n> void f(typed (&a)[n])
{
    for (size_t q=0; q<n; ++q)
        cout << a[q] << ' ';

    cout << '\n';
}

int getLength(char text[]){
    int arrayLength=0;
    for(int i=0;text[i];i++){
        arrayLength++;
    }
    return arrayLength;
}
    

int main() {

    //Laba2
    int mas[] { 12, 17, 26, 345, 8, 67, 456, 345, 34, 5, 36, 35, 6745, 6, 56, 34 };
    
    for (int i = 0; i < getLength(mas); ++i) {
        if (chet(mas[i])) {
            cout << mas[i] << " ";
        }
    }

    
    return 0;
}
