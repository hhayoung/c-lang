#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
while(����) {
	// �ݺ� ����� �ڵ�
}
*/
int main_while() {

	//int sum = 0;
	//int cnt = 0;
	//cnt = 1;

	//while (cnt <= 10) {
	//	sum += cnt;
	//	cnt++;
	//}
	//printf("1���� 10������ ���� %d\n", sum);

	// do while ��
	int sum = 0;
	int num = 0;

	// ����ڷκ��� �Է¹��� ���� ������ �Ǹ� ����
	do {
		sum += num;
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &num);
	} while (num >= 0);

	printf("�հ� : %d\n", sum);

	return 0;
}