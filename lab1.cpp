#pragma argsused
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int main(int argc, char* argv[]) {
	system("chcp 1251");

	printf("Hello, World!\n");
	printf("Привет, Мир!\n");

	std::cin.get();

	int a = 0;
	a = 3;
	printf("%d\t", a);
	a = a + 2;
	printf("%d\t", a);
	a = 3;
	printf("%d\t", a);
	a++;
	printf("%d\n", a);

	std::cin.get();

	return EXIT_SUCCESS;
}
