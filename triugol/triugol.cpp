#include <iostream>
#include <cmath>
using namespace std;
double doPloshad(int a,int b, int c, double S)
{   
	if (a == b || b == c || a == c) //eсли a или b или c равны, то есть две из трех сторон треугольника равны, то это равнобедренный треугольник;
	{
		cout << "yes epte" << endl; ;
	}
	else
	{
		cout << "no epte" << endl;
	}
	if (a == b || b == c || a == c) 
	{
		if (a == b && a != c )
		{
			cout << "Osnova:" << c << endl;
			S = c/4*(sqrt (4 * pow(a, 2) - pow(c, 2)));
			cout << S << endl;
		}
		else
		{
			cout << ' ' << '\n';
		}
		if (b != a && b == c)
		{
			cout << "Osnova:" << a << endl;
			S = a / 4 * (sqrt(4 * pow(a, 2) - pow(b, 2)));
			cout << S << endl;
		}
		else
		{
			cout << ' ' << '\n';
		}
		if (c == a && c != b)
		{
			cout << "Osnova:" << b << endl;
			S = b / 4 * (sqrt(4 * pow(b, 2) - pow(c, 2)));
			cout << S << endl;
		}
		else
		{
			cout << ' ' << '\n';
		}
	}
	return 0;
}	
int main()
{
	cout << "Enter side A" << endl;
	int a;
	cin >> a;
	cout << "Enter side B" << endl;
	int b;
	cin >> b;
	cout << "Enter side C" << endl;
	int c;
	cin >> c;
	double S;
	S = 0;

	doPloshad(a,b,c,S);
	return 0;
}