#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
float posled(float a, float b) {
	float s1;
	s1 = a + b;
	return s1;
}
float paralel(float a,float b) {
	float s2;	
	s2 = (a * b) / (a + b);
	return s2;
}
int main()
{
	setlocale(LC_ALL, "RUS");
	float a, b, s1, s2;

	printf("������� ������������� ������� ���������: ");
	scanf("%f", &a);
	printf("\n������� ������������� ������� ���������: ");
	scanf("%f", &b);
	
	s1 = posled(a, b);
	printf("\n������������� ���� ��������������� ����������� ����������: %f", s1);

	s2 = paralel(a, b);
	printf("\n������������� ���� ����������� ����������� ����������: %f", s2);
}
