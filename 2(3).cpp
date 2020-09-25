
#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e;
	a = 2; b = 13; c = 7; d = 19; e = -4;
	cout << b / a / c << endl; // Right
	cout << d / a % c << endl; // Wrong
	cout << c % d - c << endl; // Right
	cout << -e % a + b / a * -5 + 5 << endl; // Wrong
	cout << b % e << endl; // Wrong
	cout << 7 - d % +(3 - a) << endl; // Right
	cout << b % -e * c << endl; // Wrong
	cout << 9 / c - 20 / d << endl; // Right
}

