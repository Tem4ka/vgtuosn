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
	printf("������� ���� ������: ");
	scanf("%d", &a);
	printf("\n ������� ���� ������ ����� ������� 75 �����������: ");
	scanf("%d", &x);
	printf("\n ��������� �������� ����� ������� 133 �����: %d", g * a + ((s - g) * x));
}
