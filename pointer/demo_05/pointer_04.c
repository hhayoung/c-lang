#include <stdio.h>

int main_p4() {

	int a = 4, b = 100, c = 6, d = 7;

	int* a_ptr = &a, * b_ptr = &b, * c_ptr = &c, * d_ptr = &d;

	printf("%p %p %p %p\n", &a, &b, &c, &d);
	printf("%p %p %p %p\n", a_ptr, b_ptr, c_ptr, d_ptr);


	return 0;
}
/*
visual studio
����� > â> �޸�> �޸�1 ��� ������ �ΰ� ����

���پ� ��������� ��
a_ptr ���� �����ؼ� �޸�1â�� �ּҿ� ������� a���� 4�� �Ҵ�Ǿ��ִ�.
*/