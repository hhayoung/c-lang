#include <stdio.h>
#include <string.h> // strcmp, strcpy

#define SIZE 5
#pragma warning(disable : 4996)


int main_sort5_str() {

	char silver[SIZE][10] = { "ȫ�浿", "�Ӳ���", "������", "����", "������" };
	char temp[10];
	int pass, i;

	// ������
	printf("���޴� ����Ʈ : ");
	for (i = 0; i < SIZE; i++) {
		printf("%s, ", silver[i]);
	}
	printf("\b\b \n");

	// �������� strcmp, strcpy�� �̿��ϼ���.
	for (pass = 1; pass < SIZE; pass++) {
		// �ڵ带 �ϼ��ϼ���.
		for (i = 0; i < SIZE - pass; i++) {
			if (strcmp(silver[i], silver[i + 1]) > 0) {
				strcpy(temp, silver[i]);
				strcpy(silver[i], silver[i + 1]);
				strcpy(silver[i + 1], temp);
			}
		}
	}

	//������
	printf("���޴� ����Ʈ : ");
	for (i = 0; i < SIZE; i++) {
		printf("%s, ", silver[i]);
	}
	printf("\b\b \n");

	return 0;
}