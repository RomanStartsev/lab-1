#include <iostream>

int main() {
	// Zadanie 2.4
	int a, c;
	a = 1;
	c = 5;
	printf("a=%d; c=%d\n", a, c);
	c = -- c;
	a = c / 2;
	printf("a=%d; c=%d\n", a, c); // Right
	a = 1;
	c = 5;
	a = --c / 2;
	printf("a=%d; c=%d\n", a, c); // Right
	a = 1;
	c = 5;
	c -= 1;
	a = c % 2;
	printf("a=%d; c=%d\n", a, c); // Wrong
	a = 1;
	c = 5;
	a = c-- / 2;
	printf("a=%d; c=%d\n", a, c); // Right
	a = 1;
	c = 5;
	a = c-= 1/2;
	printf("a=%d; c=%d\n", a, c); // Wrong
	a = 1;
	c = 5;
	a = (c = c - 1)/2;
	printf("a=%d; c=%d\n", a, c); // Right
	a = 1;
	c = 5;
	a = (c-= 1)/2;
	printf("a=%d; c=%d\n", a, c); // Right
	a = 1;
	c = 5;
	a = (c-= 1)/2.0;
	printf("a=%d; c=%d\n", a, c); // Right
}