#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("¬ведите символ: ");
	scanf("%c", &c);
	getchar();

	printf("\n ¬ведите число: ");
	scanf("%d", &i);
	getchar();

	printf("\n ¬ведите вещественое число: ");
	scanf("%f", &f);
	getchar();

	printf("\n ¬ведите число с 'е': ");
	scanf("\n %lf", &d);
	getchar();

	printf("%c, %d, %f, %e", c, i, f, d);

	printf("\n\n 1.a) ÷ела€ часть вещественного числа: %d \n ƒробна€ часть: %f", (int)f, f-(int)f);

	printf("\n\n 1.б) Ўестнадцатеричный код введЄнного символа: %x \n ƒес€тичный код введЄнного символа: %d ", (int)c, (int)c);
}
