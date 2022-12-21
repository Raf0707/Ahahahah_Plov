#include <iostream>
using namespace std;
enum units { mm, cm, dm, m, km };
int main()
{
	units num = mm;

		switch (num)
		{
		case mm:
			cout << "Result in mm" << endl;
			break;
		case cm:
			cout << "Result in cm" << endl;
			break;
		case dm:
			cout << "Result in dm" << endl;
			break;
		case m:
			cout << "Result in m" << endl;
			break;
		case km:
			cout << "Result in km" << endl;
			break;
		}

	return 0;
}
