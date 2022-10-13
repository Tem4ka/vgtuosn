#define M_PI            3.14159265358979323846
#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <conio.h> 
#include <math.h> 
#include<locale.h> 
int main()
{
	setlocale(LC_ALL, "RUS");
	float p=3;
	float x;
	float a, b, y;
	printf("¬ведите x: ");
	scanf("%f", &x);
	a = sqrt(p * x);
	b = p * pow(x, 2) + sqrt(a);
	y = pow(log(b * b), 3) + a * x;
	printf("x=%f\ny=%f", x, y);
}