#include <iostream>

using namespace std;

int main()
{
	int a[100], n, c, i;

	cout << "VVedite razmer massiva" << endl;

	cin >> n;

	cout << "VVedite elementi massiva" << endl;

	for (i = 0; i < n; i++) {

		cin >> a[i];

	}

	cout << endl;

	for (int i = n - 1; i >= 0; i--) {

		cout << a[i] << " ";
	}

	return 0;

}
