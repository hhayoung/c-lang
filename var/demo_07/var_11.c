#include <stdio.h>

/* �������� �ݺ� �ݺ� �ݺ� */

static int g_int = 777;

extern void func_11();
void func_11_1();
void func_11_2();

int main_11() {

	func_11();
	func_11_1();
	func_11_2();

	return 0;
}

void func_11() {
	// �� �ȿ��� ���������� ������ extern �ʿ�
	extern int g_int; // �� �ڵ带 ���� ���� �ʰ� �׳� �ٷ� ����ص� �ȴ�.
	g_int += 1; // �ٷ� �� �ڵ�ó�� ������� ����ص� �ȴ�.
	printf("func_11�ȿ� �ִ� g_i %d %p \n", g_int, &g_int);
}