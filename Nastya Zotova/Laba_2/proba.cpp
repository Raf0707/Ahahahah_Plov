#include <iostream>
using namespace std;
enum units { mm, cm, dm, m, km };
int main()
{
	units num = mm;
	int n = 50;
		switch (num)
		{
		case mm:
			cout << "Result in mm" << endl;
			n = n * 1000;
			cout << n << endl;
			break;
		case cm:
			cout << "Result in cm" << endl;
			n = n * 100;
			cout << n << endl;
			break;
		case dm:
			cout << "Result in dm" << endl;
			n = n * 10;
			cout << n << endl;
			break;
		case m:
			cout << "Result in m" << endl;
			n = n * 1;
			cout << n << endl;
			break;
		case km:
			cout << "Result in km" << endl;
			n = n / 1000;
			cout << n << endl;
			break;
		}

	return 0;
}
