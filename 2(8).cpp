
// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	// Zadanie 2.8
	int  i, j, k, m;  char c, d;
	i = 1;  j = 2;  k = -7; m = 0; c = 'w';
	m = -i - 5 * j >= k + 1;
	printf("m=%d", m);
	m = 3 < j < 5;
	printf("m=%d", m);
	m = c != 87;
	printf("m=%d", m);
	m = c = !87;
	printf("m=%d", m);
	m = !c + 87;
	printf("m=%d", m);
	m != c + 87;
	printf("m=%d", m);
	i += ++j + 3;
	printf("i=%d", i);
}


