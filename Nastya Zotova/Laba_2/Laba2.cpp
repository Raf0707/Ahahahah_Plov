#include <iostream>

using namespace std;

int main()
{
	int a[100], res[100], n, i;

	cout << "VVedite razmer massiva" << endl;

	cin >> n;

	cout << "VVedite elementi massiva" << endl;

	for (i = 0; i < n; i++) {

		cin >> a[i];

	}

	cout << endl;

	for (int i = n - 1; i >= 0; i--) {
                //res.add(a[i]);

		cout << a[i] << " ";
	}

	for (int k = 0; k < n; ++k) {
            cout << res[k] << " ";
	}

	return 0;

}
