#include <stdio.h>

// ��ȯ����(��ȯ���� : conversion specification)
// e.g> %d, %c, %lf, %Lf, %f, %e, %le, %s, ...
// e�� ���°� ������ ǥ���

int main_cs()
{
	int age = 26;
	double height = 180.8;
	char grade = 'A';

	printf("���� %d��\n", age);
	printf("Ű %.1lfcm�� ǥ�� ü��: %.1lfkg\n", height,(height-100)*0.9);
	printf("���� %c\n", grade);
	printf("������: %s\n\n", "��õ");
	printf("����: %e\n", 1.0e7); //10�� 7��

	printf("10���� %d = 8���� %o = 16���� %x\n", age, age, age);

	//��ȯ ���� �� �������� ������ ���� ������ �ʴ´�.

	//--------------------------------------------------------------------

	int n1 = 7;
	int n2 = 88;
	int n3 = 100;

	printf("1. %dcm \n", n1);
	printf("2. %dcm \n", n2);
	printf("3. %dcm \n", n3);

	/*
		%d ��ȯ���ڿ��� �ʵ����� �����ϴ� ����
		�ʵ��� : ��¿� ����� ��ü ĭ

		%�ʵ���d : ����� ĭ�� ����
		%+�ʵ���d : ��ȣ ���
		%-�ʵ���d : ���� ����
	*/

	printf("������ ����\n");
	printf("1. %3dcm \n", n1);
	printf("2. %3dcm \n", n2);
	printf("3. %3dcm \n", n3);

	int aa = 123;

	printf("\n");
	printf("aa=%d\n", aa);
	printf("aa=%5d\n", aa);
	printf("aa=%+5d\n", aa);
	printf("aa=%-5d\n", aa);
	printf("aa=%-+d\n", aa);

	printf("\n-------------------------------\n");

	double dd = 56.456;

	// 7�� ��ü�ڸ���(�Ҽ�������, �Ҽ����Ʒ��ڸ��� ����), .3�� �Ҽ����Ʒ� 3�ڸ�
	printf("dd=%7.3lf\n", dd);

	// �ݿø� ó���� �Ǿ� �Ҽ��� �Ʒ� 2�ڸ��� ǥ��
	printf("dd=%6.2lf\n", dd);

	// ���� ������ ���ϸ� �ִ� ���� �� ������, �Ҽ� ������ ���ϸ� �⺻�� 6�ڸ�
	printf("dd=%.2lf\n", dd);
	printf("dd=%10lf\n", dd);

	// �Ҽ����� ��� �ڸ��� ������ ���ϸ� �Ҽ��� �� �ڸ���
	printf("dd=%5.lf\n", dd);

	return 0;
}