#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_for() {

	/*
	for (�ʱⰪ; ����; ������) {

	}
	*/

	// 1~n������ �� ���ϱ�(n=10�� ��)
	int n, sum;
	printf("1~n������ �� ���ϱ�\n");
	printf("n �Է� : ");
	scanf("%d", &n);

	sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n",n, sum);

	return 0;
}