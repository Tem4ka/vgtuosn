#define M_PI            3.14159265358979323846
#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <conio.h> 
#include <math.h> 
#include<locale.h> 
void task1()
{
	int c;
	printf("������� ����� ��� �����: ");
	scanf("%d", &c);
	switch (c)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
		printf("\n ��� �����");
		break;
	default:
		printf("\n ��� �����");
	}
	return 0;
}

void task2() {
	char c;
	float x, y;
	printf("������� ���������: ");
	scanf("%f%c%f", &x, &c, &y);
	switch (c)
	{
	case '+':
		printf("\n�������� %.f � %.f = %2.f", x, y, x + y);
		break;
	case '/':
		printf("\n������� %.f �� %.f = %2.f", x, y, x / y);
		break;
	case '*':
		printf("\n��������� %.f �� %.f = %2.f", x, y, x * y);
		break;
	case '-':
		printf("\n��������� %.f � %.f = %2.f", x, y, x - y);
		break;
	case '^':
		printf("\n���������� � ������� %.f � %.f = %2.f", x, y, pow(x, y));
		break;
	default:
		printf("\n��������� ������� �������");
	}
}
void task3() {
	int m;
	printf("������� ����� ������: ");
	scanf("%d", &m);
	switch (m)
	{
	case 1: 
		printf("����� ���� - ����");
		break;
	case 2:
		printf("����� ���� - ����");
		break;
	case 3:
		printf("����� ���� - �����");
		break;
	case 4:
		printf("����� ���� - �����");
		break;
	case 5:
		printf("����� ���� - �����");
		break;
	case 6:
		printf("����� ���� - ����");
		break;
	case 7:
		printf("����� ���� - ����");
		break;
	case 8:
		printf("����� ���� - ����");
		break;
	case 9:
		printf("����� ���� - �����");
		break;
	case 10:
		printf("����� ���� - �����");
		break;
	case 11:
		printf("����� ���� - �����");
		break;
	case 12:
		printf("����� ���� - ����");
		break;
	default:
		printf("������ ������ ���");
		break;

	}
}

void main() {
	setlocale(LC_ALL, "RUS");
	task3();
}