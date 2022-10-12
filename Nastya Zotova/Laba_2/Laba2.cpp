#include <iostream>

using namespace std;

int main()
{
	int n, i, c;

	cout << "VVedite razmer massiva" << endl;

	cin >> n;

	cout << "VVedite elementi massiva" << endl;
	
	int *a = new int[n]; // *а - указатель на выделенный участок памяти под массив целочисленного типа, new -операция выделения свободной памяти для хранения n целочисленных переменных

	for ( i = 0; i < n; i++) {

		cin >> a[i];

	}

	cout << endl;

	for (int i = 0; i < n/2; i++) {

		c = a[n-1-i];
		a[n-1-i] = a[i];
		a[i] = c;        // делим массив пополам, работаем с левой частью, уменьшаем размер массива на 1, также с индексом и присваиваем значение через новую переменную

	}
	
	for (int i = 0; i < n; i++){
		
		cout << a[i] << " ";
		}
		
	delete[] a; // освобождение выделенной памяти 
	
	return 0;
}
