#include <iostream>
using namespace std;
enum units { mm, cm, dm, m, km };
int main()
{
	units num1 = mm;
		switch (num1)
		{
		case mm:
			cout << "it works!" << endl;
		}
	units num2 = cm;
		switch (num2)
		{
		case cm:
			cout << "it works x2!" << endl;
		}
	units num3 = dm;
		switch (num3)
		{
		case dm:
			cout << "it works! x3!" << endl;
		}
	units num4 = m;
		switch (num4)
		{
		case m:
			cout << "it works x4!" << endl;
		}
	units num5 = km;
		switch (num5)
		{
		case km:
			cout << "it works x5!" << endl;
		}

	return 0;
}
