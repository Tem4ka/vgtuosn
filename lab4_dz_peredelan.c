#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
g = 75;
s = 133;
int doxod(a,x) {
	int zar;
	zar = g * a + ((s - g) * x);
	return zar;
}
int main()
{
	int a, x, g, s, zar;
	setlocale(LC_ALL, "RUS");
	/*int g = 75;
	int a, x;
	int s = 133;
	int z; */
	printf("¬ведите цену газеты: ");
	scanf("%d", &a);
	printf("\n ¬ведите цену газеты после продажи 75 экземпл€ров: ");
	scanf("%d", &x);
	zar = doxod(a, x);
	printf("\n «аработок мальчика после продажи 133 газет: %d", zar);
}
