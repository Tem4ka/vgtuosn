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
	float p = 3;
	float x;
	float a, b, y;
	int A, B, C;
	printf("Введите x: ");
	scanf("%f", &x);
	a = sqrt(p * x);
	b = p * pow(x, 2) + sqrt(a);
	y = pow(log(b * b), 3) + a * x;
	printf("x=%f\ny=%f", x, y);
	A = (int)a;
	B = (int)b;
	C = (int)y;
	printf("\n\nA=%d B=%d C=%d\n\n", A, B, C);
	if (((A % 2 == 0) && (B % 2 != 0)) || ((B % 2 == 0) && (A % 2 != 0)))
		printf("\nУсловие 1 выполняется A=%d B=%d", A, B);
	else
		printf("\nУсловие 1 не выполняется");
	if ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0))
		printf("\nусловие 2 выполняется A=%d B=%d C=%d ", A, B, C);
	else 
		printf("\nУсловие 2 не выполняется A%3= %f B%3= %f C%3= %f ", (double)A/3, (double)B/3, (double)C/3);



}