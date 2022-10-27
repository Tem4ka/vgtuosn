#define M_PI            3.14159265358979323846
#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <conio.h> 
#include <math.h> 
#include<locale.h> 
double alpha(double x, double y, double z) {
	double alp;
	alp = log(pow(y, -sqrt(fabs(x)))) * (x - y / 2) + pow(sin(atan(z)), 2);
	return alp;
}
void main()
{
	setlocale(LC_ALL, "RUS");
	double x, y, z, alp;
	printf("¬ведите x: ");
	scanf("%lg", &x);
	getchar;

	printf("¬ведите y: ");
	scanf("%lg", &y);
	getchar;

	printf("¬ведите z: ");
	scanf("%lg", &z);
	getchar;  

	/*printf("x = -15.246 \n y=4.642*10^-2 \n z=20.001*10^2");

	x = -15.246;
	y = 4.642 * pow(10, -2);
	z = 20.001 * pow(10, 2); */ 


	alp = alpha(x, y, z);
	printf("\n–езультат: %f", alp);
}