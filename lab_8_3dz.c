#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <conio.h> 
#include <math.h> 
#include<locale.h> 
#include<windows.h>

void main() {
	setlocale(LC_ALL, "RUS");
	int N;
	float x=0;
	float k = 0;
	printf("Введите целое число, меньше 10: ");
	scanf("%d", &N);
	for (float start = 1.1; start <= N; ) {
		x = k + start - (start + 0.1);
		k=x;
		start+=0.2;
	}
	
	printf("Результат выполнения программы: %f", k);

	
}
