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
	printf("������� ���� ������: ");
	scanf("%d", &a);
	printf("\n ������� ���� ������ ����� ������� 75 �����������: ");
	scanf("%d", &x);
	zar = doxod(a, x);
	printf("\n ��������� �������� ����� ������� 133 �����: %d", zar);
}
