/* ���ȭ ���� */
#include <stdio.h>

int main_v3() {

	// ���� ���� �տ� const �� ���� ���� ������ �� ����.
	const int const_var = 3;
	// const_var = 8; // error


	int arr[10] = { 1,2,3,4,5,7,8,9,10 };

	// p1 ������ ������ ���� ���� �Ұ�, *p1�� ���� ���� ����
	// int* const p1 = arr;

	// p1 = arr + 1; // error
	
	// int const *p1 = arr; �� ����.
	const int* p1 = arr;
	// p1[0] = 10; // error

	const int* p2 = arr;
	p2 = arr + 1;
	// p2[0] = 10; // error

	const int* const p3 = arr;
	// p3 = arr + 1; // error
	// p3[0] = 10; // error


	return 0;
}