#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	if (x <= -2)
		y = x + 3;
	else
		if (-2 < x && x <= 4)
			y = -x/2;
		else
			if (4 < x && x <= 8 - R)
				y = -R ;
			else
				if (R - 8 < x && x <= R - 8)
					y = sqrt(R * R - (x - R) * (x - R));
				else
					y = -R ;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}