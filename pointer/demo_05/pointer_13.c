#include <stdio.h>

/* ���� ������ */

int main_p13() {

	int a = 1;
	int* ptr = &a;

	*ptr = 2;

	printf("%d %d\n", a, *ptr);

	int** pptr = &ptr;

	// **pptr = 3;
	*(*pptr) = 3;


	/*
	*(*pptr) = 3;
	1) *pptr
	pptr�� ptr�� �ּҸ� ���� �ִµ� �տ� *�̰� �پ��� ������
	ptr�� �ּҰ� ����Ű�� �ִ� �� = 100
	2) *(*pptr)
	100�� a�� �ּ��ε� �տ� * �̰� �پ��� ������
	100�� ����Ű�� �ִ� �� = 2
	�� ���� 3���� �ٲٰڴ� = a�� ���� �ٲٰڴ�.
	*/

	printf("%d %d\n", a, **pptr);

	return 0;
}