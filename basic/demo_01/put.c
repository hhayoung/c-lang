#include <stdio.h>

int main_put()
{
	// putchar('����') : ���� ���

	char ch = 'A';

	putchar(ch);
	putchar('+');
	putchar('\n');

	// puts("���ڿ�") : ���ڿ� ��� �� �ٹٲ�
	puts("Hello World!!");
	puts("Hello World!!");
	puts("Hello World!!");
	puts("");

	int no, kor, eng, math;
	double avg;

	no = 202011;
	kor = 88;
	eng = 100;
	math = 99;

	avg = (kor + eng + math) / 3.0;

	/*
	�й� : 202011
	--------------
	���� :  88��
	���� : 100��
	���� :  99��
	--------------
	��� : xx.xx
	*/

	printf("�й� :%d\n", no);
	puts("-------------");
	printf("���� : %3d��\n", kor);
	printf("���� : %3d��\n", eng);
	printf("���� : %3d��\n", math);
	puts("-------------");
	printf("��� : %.2lf", avg);

	return 0;
}