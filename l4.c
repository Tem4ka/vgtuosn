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
	printf("������� ������: ");
	scanf("%c", &c);
	getchar();

	printf("\n ������� �����: ");
	scanf("%d", &i);
	getchar();

	printf("\n ������� ����������� �����: ");
	scanf("%f", &f);
	getchar();

	printf("\n ������� ����� � '�': ");
	scanf("\n %lf", &d);
	getchar();

	printf("%c, %d, %f, %e", c, i, f, d);

	printf("\n\n 1.a) ����� ����� ������������� �����: %d \n ������� �����: %f", (int)f, f-(int)f);

	printf("\n\n 1.�) ����������������� ��� ��������� �������: %x \n ���������� ��� ��������� �������: %d ", (int)c, (int)c);
}
