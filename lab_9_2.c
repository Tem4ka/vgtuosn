#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <conio.h> 
#include <math.h> 
#include<locale.h>

//Zadanie 2
/*
void main() {
	setlocale(LC_ALL, "RUS");
	int k,summa;
	unsigned long long int a;
	k = 0;
	summa = 0;
	printf("¬ведите произвольное длинное число: ");
	scanf("%llu", &a);
	
	while (a != 0) {
		k = a % 10;
		a = a / 10;
		if (k % 2 != 0)
			summa += k;
	}
	printf("—умма нечетных чисел = %d", summa);
}	
*/