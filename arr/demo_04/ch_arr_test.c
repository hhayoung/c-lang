#include <stdio.h>

/* ���� */
int main_ch_test() {

	char schoolName[10];
	char stuNo[9];
	char stuName[10];

	// �л� ���� �Է¹ޱ�
	printf("�б�����? ");
	scanf("%s", schoolName);
	printf("�й���? ");
	scanf("%s", stuNo);
	getchar(); // ���Ͱ��� �޾�����Ѵ�.
	printf("�̸���? ");
	gets(stuName);

	printf("=======================\n");
	printf("%s ", schoolName);
	printf("%c%c�й� ", stuNo[2], stuNo[3]);
	printf("%s\n", stuName);
	printf("=======================\n");

	return 0;
}