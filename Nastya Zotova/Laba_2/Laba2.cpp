#include <iostream>

using namespace std;

int main()
{
	int n, i;

	cout << "VVedite razmer massiva" << endl;

	cin >> n;

	cout << "VVedite elementi massiva" << endl;
	
	int *a = new int[n];

	for ( i = 0; i < n; i++) {

		cin >> a[i];

	}

	cout << endl;

	for (int i = n - 1; i >= 0; i--) {

		cout << a[i] << " ";
	}
	return 0;
}
