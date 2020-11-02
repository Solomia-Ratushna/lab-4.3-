#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double a ,b ,c , xp, xk, dx ,F,x;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a ="; cin >> a; 
	cout << "b= "; cin >> b; 
	cout << "c = "; cin >> c;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "F" << " |" << endl;
	cout << "---------------------------" << endl;

	for (x=xp; x <= xk; x += dx)
	{
		if ((x + 5) < 0 && c == 0)
			F = 1 / (a * x) - b;
		else
			if ((x + 5) > 0 && c != 0)
				F = (x - a) / x;
			else
				F = (10 * x) / (c - 4);
		

		
		cout << "|" << setw(7) << setprecision(2) << x
			<< "|" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		
	}
	cout << "---------------------------" << endl;
	return 0;
}