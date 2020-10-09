// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	// Zadanie 2.7
	int a, b, c;
	a = 2;
	b = 6;
	c = 3;
	b-- - a;
	printf("a=%d; b=%d\n", a, b, c);
	a += a++;
	printf("a=%d; b=%d\n", a, b, c);
	++b / a ++ * --c;
	printf("a=%d; b=%d\n", a, b, c);
	a-- - b;
	printf("a=%d; b=%d\n", a, b, c);
	-a-- - b;
	printf("a=%d; b=%d\n", a, b, c);
	a = a++;
	printf("a=%d; b=%d\n", a, b, c);
	b++ / ++a * c--;
	printf("a=%d; b=%d\n", a, b, c);
	a - --c;
	printf("a=%d; b=%d\n", a, b, c);
	++a = b;
	printf("a=%d; b=%d\n", a, b, c);
}






