#include<stdio.h>
#include<locale.h>
#include<iostream>

void task1()
{
	setlocale(LC_ALL, "");
	int a, d, q, r;
	
	printf("������� �: ");
	scanf_s("%d", &a);

	printf("������� d: ");
	scanf_s("%d", &d);

	q = a / d;
	r = a % d;
	
	printf("������� � �� d = %d\n", q);
	printf("������� �� ������� � �� d = %d\n", r);

	system("pause");
}

void task2()
{
	setlocale(LC_ALL, "");
	int f = 0, x, y;

	printf("������� x: ");
	scanf_s("%d", &x);

	printf("������� y: ");
	scanf_s("%d", &y);
	
	
	if (x == 0 && y == 0)
	{
		printf("f = %d\n", f);
	}

	else if (x == 0)
	{
		f = 12 / y;
		printf("f = %d\n", f);
	}

	else if (y == 0)
	{
		f = 12 / x;
		printf("f = %d\n", f);
	}

	else
	{
		f = 144 / (x*y);
		printf("f = %d\n", f);
	}

	system("pause");
}

void task3()
{

	setlocale(LC_ALL, "");
	int f, x, y;

	printf("������� x: ");
	scanf_s("%d", &x);

	printf("������� y: ");
	scanf_s("%d", &y);

	if (x > y)
	{
		f = x - y;
		printf("f = %d\n", f);
	}
	else if (x < y)
	{
		f = y - x;
		printf("f = %d\n", f);
	}

	system("pause");
}

void task4()
{
	setlocale(LC_ALL, "");
	double f, x, y;

	printf("������� x > 0: ");
	scanf_s("%lf", &x);

	printf("������� y > 0: ");
	scanf_s("%lf", &y);
	
	if (x > 0 && y > 0)
	{
		if (x > y)
		{
			f = x / y;
			printf("f = %lf\n", f);
		}
		else if (x < y)
		{
			f = y / x;
			printf("f = %lf\n", f);
		}
	}
	else 
	{
		printf("�� ����� ������������ ��������\n");
	}

	system("pause");
}


void task5()
{
	setlocale(LC_ALL, "");
	double x, y, z, f, m = 0, n = 0, k = 0;
	
	printf("������� x: ");
	scanf_s("%lf", &x);

	printf("������� y: ");
	scanf_s("%lf", &y);

	printf("������� z: ");
	scanf_s("%lf", &z);

	if (x > 0 && y > 0 && z > 0)
	{
		if (x < y && y < z)
		{
			k = x;
			m = y;
			n = z;
			f = m * n / k;
			printf("f = %lf\n", f);
		}

		else if (x < z && z < y)
		{
			k = x;
			m = z;
			n = y;
			f = m * n / k;
			printf("f = %lf\n", f);
		}

		else if (y < x && x < z)
		{
			k = y;
			m = x;
			n = z;
			f = m * n / k;
			printf("f = %lf\n", f);
		}

		else if (y < z && z < x)
		{
			k = y;
			m = z;
			n = x;
			f = m * n / k;
			printf("f = %lf\n", f);
		}

		else if (z < x && x < y)
		{
			k = z;
			m = x;
			n = y;
			f = m * n / k;
			printf("f = %lf\n", f);
		}

		else if (z < y && y < x)
		{
			k = z;
			m = y;
			n = x;
			f = m * n / k;
			printf("f = %lf\n", f);
		}
	}
	else
	{
		printf("�� ����� ������������ ��������\n");
	}
	system("pause");
}

void task6()
{
	setlocale(LC_ALL, "");
	int a, b, c, f;

	printf("������� a: ");
	scanf_s("%d", &a);

	printf("������� b: ");
	scanf_s("%d", &b);

	printf("������� c: ");
	scanf_s("%d", &c);

	if ((a < b && b <= c) || (a < c && c <= b))
	{
		f = a;
		printf("���������� ����� �� ���� = %d\n", f);
	}

	else if ((b < a && a <= c) || (b < c && c <= a))
	{
		f = b;
		printf("���������� ����� �� ���� = %d\n", f);
	}

	else if ((c < a && a <= b) || (c < b && b <= a))
	{
		f = c;
		printf("���������� ����� �� ���� = %d\n", f);
	}

	else
	{
		printf("����� ��������� ���������� �����\n");
	}
	system("pause");
}

void task7()
{
	setlocale(LC_ALL, "");
	int a, b, c, f;

	printf("������� a: ");
	scanf_s("%d", &a);

	printf("������� b: ");
	scanf_s("%d", &b);

	printf("������� c: ");
	scanf_s("%d", &c);

	if ((a <= b && b < c) || (b <= a && a < c))
	{
		f = c;
		printf("���������� ����� �� ���� = %d\n", f);
	}

	else if ((b <= c && c < a) || (c <= b && b < a))
	{
		f = a;
		printf("���������� ����� �� ���� = %d\n", f);
	}

	else if ((a <= c && c < b) || (c <= a && a < b))
	{
		f = b;
		printf("���������� ����� �� ���� = %d\n", f);
	}

	else
	{
		printf("����� ��������� ���������� �����\n");
	}
	system("pause");
}

void task8()
{
	setlocale(LC_ALL, "");
	int x, y, z;

	printf("������� x: ");
	scanf_s("%d", &x);

	printf("������� y: ");
	scanf_s("%d", &y);

	printf("������� z: ");
	scanf_s("%d", &z);

	if (pow (x, 2) + pow(y, 2) == pow(z, 2))
	{
		printf("true\n");
	}
	else
	{
		printf("false\n");
	}

	system("pause");
}

void task9()
{
	setlocale(LC_ALL, "");
	int x, y;

	printf("������� x �� ������ 0: ");
	scanf_s("%d", &x);

	printf("������� y �� ������ 0: ");
	scanf_s("%d", &y);

	if (x != 0 && y != 0)
	{
		if (x % y == 0 || y % x == 0)
		{
			printf("true\n");
		}

		else
		{
			printf("false\n");
		}
	}
	else
	{
		printf("�� ����� ������������ �����");
	}
	system("pause");
}

void task10()
{
	setlocale(LC_ALL, "");
	int x, y, z;

	printf("������� ������� ������������ �: ");
	scanf_s("%d", &x);

	printf("������� ������� ������������ y: ");
	scanf_s("%d", &y);

	printf("������� ������� ������������ z: ");
	scanf_s("%d", &z);

	if (x > 0 && y > 0 && z > 0)
	{
		if ((x < y + z) && (y < x + z) && (z < x + y))
		{
			printf("true\n");
		}

		else
		{
			printf("false\n");
		}
	}
	else
	{
		printf("�� ����� ������������ �������� ������� ������������\n");
	}
	system("pause");
}



int main()

{
	setlocale(LC_ALL, "");

	int task, flag;

start:

	printf("������� ����� �������: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1:
	{
		task1();

		break;
	}
	case 2:
	{
		task2();

		break;
	}
	case 3:
	{
		task3();

		break;
	}
	case 4:
	{
		task4();

		break;
	}
	case 5:
	{
		task5();

		break;
	}
	case 6:
	{
		task6();

		break;
	}
	case 7:
	{
		task7();

		break;
	}
	case 8:
	{
		task8();

		break;
	}
	case 9:
	{
		task9();

		break;
	}
	case 10:
	{
		task10();

		break;
	}
	}

	printf("������ ���������� 1 ��� 0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}