#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()
{
	double x, y, a;
	int b;
	char z;
	do
	{
		cout << "x=" << endl; cin >> x;
		cout << "y=" << endl; cin >> y;
		cout << "idetify the issue" << endl; cin >> z;
		if (z == '+')
			cout <<x + y << endl;
		if (z == '-')
			cout << x - y << endl;
		if (z == '*')
			cout << x * y << endl;
		if (z == '/')
			cout << x / y << endl;
		cout << "If you want to calculate once again enter: 1 if not - enter 0" << endl;
		cin >> a;
	} while (a == 1);
}