// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	// Zadanie 2.11
	int  a, b, c, d;
	a = 5;
	b = 3;
	c = 2;
	d = 4;
	!(a > b);
	printf("a=%d; b=%d\n", a, b);
	!(2 * a == b + 4);
	printf("a=%d; b=%d\n", a, b);
	!(a < b&& c < d);
	printf("a=%d; b=%d\n", a, b);
	!(a < 2 || a>5);
	printf("a=%d; b=%d\n", a, b);
	!(a < 1 || b < 2 && c < 3);
	printf("a=%d; b=%d\n", a, b);
}
		 		


