#include <stdio.h>

// �Ű������� ���ϰ��� ���� �Լ�
void print_title();
void print_information(void);

int main_func4() {

	print_title();
	print_information();

	return 0;
}

void print_title() {
	printf("--------------------\n");
	printf("---- C Language ----\n");
	printf("--------------------\n");
}

void print_information() {
	printf("\n\n");
	printf("%21s \n", "�����б�");
	printf("%20s \n", "�踻��");
}