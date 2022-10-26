#define M_PI            3.14159265358979323846
#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <conio.h> 
#include <math.h> 
#include<locale.h> 
void task1_1()
{
	int yeas;
	printf("¬ведите год: ");
	scanf_s("%d", &yeas);
	if (yeas % 4 == 0) {
		printf("\nвисокосный год");
		printf("\n%d год - високосный", yeas);
	}
	else
	{
		printf("не високосный год");
		printf("%d год - не високосный", yeas);

	}
}
void task1_2() {
	int yeas;
	printf("введите год: ");
	scanf_s("%d", &yeas);
	if (yeas % 4 == 0 && (yeas % 100 != 0 || yeas % 400 == 0))
		printf("%d год - високосный", yeas);
	else printf("%d год - не високосный", yeas);



}
void task1_3() {
	int yeas1, yeas2, yeas3;
	printf("¬ведите года: ");
	scanf("%d \n %d \n %d", &yeas1, &yeas2, &yeas3);
	if (yeas1 % 4 == 0 && (yeas1 % 100 != 0 || yeas1 % 400 == 0))
		printf("\n %d год - високосный", yeas1);
	else printf("\n %d год - не високосный", yeas1);

	if (yeas2 % 4 == 0 && (yeas2 % 100 != 0 || yeas2 % 400 == 0))
		printf("\n %d год - високосный", yeas2);
	else printf("\n %d год - не високосный", yeas2);

	if (yeas3 % 4 == 0 && (yeas3 % 100 != 0 || yeas3 % 400 == 0))
		printf("\n %d год - високосный", yeas3);
	else printf("\n %d год - не високосный", yeas3);

}
void task2() {
	float F, x;
	printf("¬ведите число x, дл€ вычислени€ значени€ функции F(x): ");         /* если x =3, то будет 0. если x=9 то будет 0.5*/
	scanf("%f", &x);
	printf("«начени€ функции F(%.0f)=%f", x, F = x <= 7 ? -3*x + 9 : 1 / (x - 7));


}
void task3() {
	float x;
	printf("¬ведите неотрицательное число x=");
	scanf("%f", &x);
	if (x >= 1)
		printf("%f  %f  %f", x * x, x, sqrt(x));
	else printf("\n%f  %f  %f", sqrt(x), x, x * x);
	


}
void main() {
	setlocale(LC_ALL, "RUS");
	task3();
}