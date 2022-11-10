#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <conio.h> 
#include <math.h> 
#include<locale.h> 
#include<windows.h>

//Zadanie 2 var 5
/*
void main() {
	setlocale(LC_ALL, "RUS");
	printf("Вычисляемая функция: y=x^2-cos^2(x+1)\nИнтервал [0,1;2,2]\n");
	float tab;
	printf("Введите значение шага табуляции:");
	scanf("%f", &tab);	
	puts(" ____________________");
	for (float start = 0.1; start <= 2.2; start += tab) printf("|%f| |%9f|\n", start, pow(start,2)-pow(cos(start+1),2));
}
*/