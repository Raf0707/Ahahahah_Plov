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



int main()
{
    list<int> li { 1, 3, 0, 2, 4, 6, 8, 17, 56, 35, 23, 71 };
    list<int>::iterator iter;

    cout << "{ ";

    for (int i = 0; i <= li.size(); i++) {
        if (prost(i)) {
           cout << i << " ";
        }
    }

    cout << "}" << endl;


    return 0;
}
