#define M_PI            3.14159265358979323846
#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <conio.h> 
#include <math.h> 
#include<locale.h> 
void task1()
{
	int c;
	printf("Введите цифру или букву: ");
	scanf("%d", &c);
	switch (c)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		printf("\n Это цифра");
		break;
	default:
		printf("\n Это буква");
	}
	return 0;
}

void task2() {
	char c;
	float x, y;
	printf("Введите выражение: ");
	scanf("%f%c%f", &x, &c, &y);
	switch (c)
	{
	case '+':
		printf("\nСложение %.f с %.f = %2.f", x, y, x + y);
		break;
	case '/':
		printf("\nДеление %.f на %.f = %2.f", x, y, x / y);
		break;
	case '*':
		printf("\nУмножение %.f на %.f = %2.f", x, y, x * y);
		break;
	case '-':
		printf("\nВычитание %.f с %.f = %2.f", x, y, x - y);
		break;
	case '^':
		printf("\nВозведение в степень %.f в %.f = %2.f", x, y, pow(x, y));
		break;
	default:
		printf("\nВыражение введено неверно");
	}
}
void task3() {
	int m;
	printf("Введите номер месяца: ");
	scanf("%d", &m);
	switch (m)
	{
	case 1: 
		printf("Время года - зима");
		break;
	case 2:
		printf("Время года - зима");
		break;
	case 3:
		printf("Время года - весна");
		break;
	case 4:
		printf("Время года - весна");
		break;
	case 5:
		printf("Время года - весна");
		break;
	case 6:
		printf("Время года - лето");
		break;
	case 7:
		printf("Время года - лето");
		break;
	case 8:
		printf("Время года - лето");
		break;
	case 9:
		printf("Время года - осень");
		break;
	case 10:
		printf("Время года - осень");
		break;
	case 11:
		printf("Время года - осень");
		break;
	case 12:
		printf("Время года - зима");
		break;
	default:
		printf("Такого месяца нет");
		break;

	}
}

void main() {
	setlocale(LC_ALL, "RUS");
	task3();
}