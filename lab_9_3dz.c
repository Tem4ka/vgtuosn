#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <conio.h> 
#include <math.h> 
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int kat;
	char sim;
	printf("Программа построения прямоугольного равностороннего треугольника\n");
	printf("Введите длину катета: ");
	scanf("%d", &kat);
	printf("\nВведите символ, из которого будет нарисован треугольник:");
	getchar();
	scanf("%c", &sim);
	
	for (int i = 1; i <= kat; i++)
	{
		for (int j = 1; j <= kat; j++)
			if (j == kat || i == kat || i == kat - j + 1)
				printf("%c", sim);
			else
				putchar(' ');
		putchar('\n');
	}

	return 0;
}
