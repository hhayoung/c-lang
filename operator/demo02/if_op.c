#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� ������
int main_if_op()
{
	int x;

	printf("���� �Է� : ");
	scanf("%d", &x);

	// ���� ������
	(x % 2 == 0) ? printf("%d�� ¦��\n", x) : printf("%d�� Ȧ��\n", x);

	// [����] �� ���� �Է¹޾Ƽ� ��� �������� �Ʒ��� ���� ����ϼ���.
	/*
	 �� ���� �Է¹ޱ� : 53 6
	 ū�� / ���� �� = 8
	 ū�� % ���� �� = 5
	*/

	// �� �ڵ�
	int m, n;

	printf("�� ���� �Է¹ޱ� : ");
	scanf("%d %d", &m, &n);
	
	if (m > n) {
		printf("ū�� / ���� �� = %d\n", m / n);
		printf("ū�� %% ���� �� = %d\n", m % n);
	}
	else {
		printf("ū�� / ���� �� = %d\n", n / m);
		printf("ū�� %% ���� �� = %d\n", n % m);
	}

	// ������ �ڵ�
	int a, b, max, min;
	
	printf("�� ���� �Է� : ");
	scanf("%d %d", &a, &b);

	(a > b) ? (max = a, min = b) : (max = b, min = a);

	printf("\n ū�� / ������ = %d\n", max / min);
	printf("\n ū�� % ������ = %d\n", max % min);


	return 0;
}