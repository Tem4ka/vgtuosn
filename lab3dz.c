#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int g = 75;
	int a, x;
	int s = 133;
	int z;
	printf("¬ведите цену газеты: ");
	scanf("%d", &a);
	printf("\n ¬ведите цену газеты после продажи 75 экземпл€ров: ");
	scanf("%d", &x);
	printf("\n «аработок мальчика после продажи 133 газет: %d", g * a + ((s - g) * x));
}
