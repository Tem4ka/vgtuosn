#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <conio.h> 
#include <math.h> 
#include<locale.h> 

//Zadanie 0 
/*
void main() {
	setlocale(LC_ALL, "RUS");
	int i, b;
	int a;
	char c;
	printf("Выберите вид символов: 1-цифра 2-символ \n");
	scanf("%d", &a);
	switch (a) {
	case 1:
		printf("Введите цифру:");
		scanf("%d", &b);
		getchar();

		printf("Введите кол-во вводимых цифр:");
		scanf("%d", &i);
		getchar();

		for (int start = 1; start <= i; start++) printf("%d", b);
		break;
	case 2:
		printf("Введите символ:\n");
		getchar();
		scanf("%c", &c);

		printf("Введите кол-во выводимых символов:\n");
		scanf("%d", &i);

		for (int start = 1; start <= i; start++) printf("%c", c);
		break;
	default:
		printf("Введено неверное значение");
		break;
	}
} */