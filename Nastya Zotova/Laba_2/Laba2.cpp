#include <iostream>

using namespace std;

int main()
{
	 
 int n, c, i;
 
 cout << "Введите размер массива" << endl;
 
 cin >> n;
 
 cout << "Введите элементы массива" <<
 endl;
 
 int *a = new int[n];
 
 for(i = 0; i < n; i++){
 
 cin >> a[i];
 
 } 
 
 cout << endl;
 
 for (int i = 0; i < n/2; i++) {
 
 c = a[n-1-i];
 
 a[n-1-i] = a[i]; 
 
 a[i] = c;
 
 }
 
 for(i = 0; i < n; i++){
 
 cout << a[i] << ' ';
 
 } 
 
 return 0;
 
}
