#include <stdio.h>

// extern int g_int; // var_11�� �ִ� g_int�� static�� �����鼭 �̷��� �� �� ����.
int g_int; // �ڵ��ʱ�ȭ�Ǽ� 0�̰�, var_11_2�� g_int�� �������� �� g_int�� �����ϰ� �ȴ�.

void func_11_1() {
	
	g_int += 1;
	printf("func_11_1�ȿ� �ִ� g_i %d %p \n", g_int, &g_int);
}