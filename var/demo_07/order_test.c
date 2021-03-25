#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)


void display_service(void);	// ���� ��� ǥ��
void display_item(void);	// ��ǰ ��� ǥ��
void order_sheet(void);		// �ֹ� ������ ǥ��
void ordering(void);		// �ֹ��ϱ�
void cleaning();			// ȭ�� �����

#define N 6		// ��ǰ ������ 5�̳� ÷���� ������ ���� 5+1�� ����
/*
�ܰ�, ��ǰ��, �ֹ� ������ ������ �迭�� ÷�ڸ� 0~4�� �ƴ�
1~5���� ����ϱ� ���� ��ǰ������ 1 ���� ������
*/
char name[N][10] = { "", "��Ʈ", "����", "���찳", "����", "����" }; // ��ǰ��
int unit_cost[N] = { 0,1000,500,300,800,1500 }; // ��ǰ�� �ܰ�
int number[N] = { 0 };

int main() {
	int service;	// ����ڰ� ���ϴ� ���� ��ȣ

	do {
		display_service();		// ����ڿ��� �����ϴ� ���� ����� ǥ��
		printf("���ϴ� ���񽺸� �����ϼ���: ");
		scanf("%d", &service);	// ����ڰ� ���ϴ� ���� ��ȣ �Է¹ޱ�

		switch (service) {
		case 1:
			ordering();	// �ֹ��ϱ�
			break;
		case 2:
			order_sheet();	// �ֹ������� ǥ��
			break;
		case 3:
			exit(0);	// ���α׷� ����
		}

		cleaning();		// ����ڰ� ȭ���� Ȯ���� �� ȭ���� �����

	} while (service != 3);

	return 0;
}

// �ֹ��ϱ�
void ordering() {
	int item, n;

	display_item();		// ��ǰ�� ���� ǥ��
	printf("���ϴ� ��ǰ�� ��ȣ��? ");
	scanf("%d", &item);
	printf("%s��(��) �ֹ��� ������? ", name[item]);
	scanf("%d", &n);

	number[item] += n;	// �ش� ��ǰ�� �� �ֹ� ������ ������
	printf("\n �ֹ��Ͻ� %s %d���� �� %d���Դϴ�. \n", name[item], n, n * unit_cost[item]);
}

// �ֹ� ������ ǥ��
void order_sheet() {
	int i, cost, total_cost = 0;

	printf("\n   ��ǰ �ֹ� ������   \n");
	printf("========================\n");
	printf(" ��ǰ��   ����   ���� \n");
	printf("------------------------\n");

	for (i = 1; i < N; i++) {
		if (number[i] > 0) {	// ����ڰ� �ֹ��� ��ǰ�� ǥ���ϱ�
			cost = unit_cost[i] * number[i];
			printf(" %-7s %3d %7d \n", name[i], number[i], cost);
			total_cost = cost;
		}
	}
	printf("========================\n");
	printf(" �Ѿ�         %7d�� \n", total_cost);
}

// ���� ��� ǥ��
void display_service() {
	printf("\n>> ȯ���մϴ�. \n");
	printf("========================\n");
	printf("== 1. ��ǰ �ֹ��ϱ�   ==\n");
	printf("== 2. �ֹ��� Ȯ���ϱ� ==\n");
	printf("== 3. �����ϱ�        ==\n");
	printf("========================\n");
}

// ��ǰ ��� ǥ��
void display_item() {
	int i;

	printf("\n>> ��ǰ �ֹ� �����Դϴ�. \n");
	printf("========================\n");
	for (i = 1; i < N; i++) {
		printf(" %d   %7s   %7d \n", i, name[i], unit_cost[i]);
	}
	printf("========================\n");
}

// ����ڰ� �ƹ�Ű�� ���� ������ ��� ��� �� ȭ�� �����
void cleaning() {
	getchar();
	printf("\n��� ���񽺸� ���Ͻø� �ƹ�Ű�� ��������.");
	getchar();
	system("cls");
}