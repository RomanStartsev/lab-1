// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	// Zadanie 2.12
	char c;    short s;       int i;           unsigned u;               signed char sc;
	float f;     double d;    long lng;    unsigned short us;     long double ld;
	s = 5;
	i = 3;
	c = 2;
	d = 4;
	u = 6;
	sc = 2;
	f = 4;
	lng = 3;
	us = 5;
	ld = 1;
	c - s / i;
	printf("c=%d; s=%d; i=%d\n", c, s, i); // int
	u * 3 - 3.0 * u - i;
	printf("u=%d; i=%d\n", u, i); // int
	u - us * i;
	printf("u=%d; us=%d; i=%d\n", u, us, i); // int
	(sc + d)* ld;
	printf("sc%d; d=%d; ld%d\n", sc, d, ld); // byte
	(5 * lng - 'a')* (s + u / 2);
	printf("n=%d; s=%d; i=%d\n",lng,s,u); // int
	(f + 3) / (2.5f - s * 3.14); // byte
	printf("f=%d;s=%d\n", f, s);
}

   	