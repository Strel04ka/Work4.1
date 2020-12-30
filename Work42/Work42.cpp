#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	if (xk <= xp || dx > xk) 
	{
		cout << "Error!";
		return 1;
	}

	cout << fixed;
	cout << "-------------------------" << endl;
	cout << "|" << setw(5) << "x" << "    |" << setw(7) 
		 << "y"  <<setw(7)<<" |"<< endl;
	cout << "-------------------------" << endl;


	x = xp;
	while (x <= xk) 
	{
		A = x * x;
		if (x < 1) 
		{
			B = 7 * x * x + x - 8;
		}
		if (x >= 1 && x <= 4) 
		{
			B = 1/tan((x + 4) / sqrt(11)) + 3;
		}
		else 
		{
			B = sqrt(1 + abs(pow(cos(x), 3)));
		}
		y = A + B;

		cout << "|" << setw(7) << setprecision(2) << x
			<< "  |" << setw(10) << setprecision(3) << y
			<< "   |" << endl;
		x += dx;
	}
	cout << "-------------------------" ;
	
	cin.get();
	return 0;
}
