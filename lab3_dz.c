#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
int posled(a, b) {
	int s1;
	s1 = a + b;
	return s1;
}
float parralel(float a,float b) {
	float s2;	
	s2 = (a * b) / (a + b);
	return s2;
}
int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b;
	int s1;
	float s2;
	printf("������� ������������� ������� ���������: ");
	scanf("%d", &a);
	printf("\n������� ������������� ������� ���������: ");
	scanf("%d", &b);
	
	s1 = posled(a, b);
	printf("\n������������� ���� ��������������� ����������� ����������: %d", s1);

	s2 = parralel(a, b);
	printf("\n������������� ���� ����������� ����������� ����������: %f", (float)s2);
}
