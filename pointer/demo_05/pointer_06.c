#include <stdio.h>

// call by value : ���� ���� ȣ��
void swap(int a, int b) {
	// ���⼭�� a,b�� �������� a,b�� ��
	// �����Լ��� a,b�� ���� ������ �ٸ� ������ ���̴�
	printf("swap �� a�ּ� : %p, b �ּ� : %p\n", &a, &b);

	int temp = a;
	a = b;
	b = temp;

	printf("swap �� a�� : %d, b�� : %d\n", a, b);
}

// call by address, call by pointer, call by reference
void swap_address(int* a, int* b) {
	// printf("swap_address �� a�ּ� : %p, b �ּ� : %p\n", &a, &b);
	// main�Լ��� �ּҰ��� �Ѿ���� �ʴ´� -> &a, &b�� ������ �ȵ�.
	// a,b ��ü�� �ּҰ��� ���� �ֱ� ������ �״�� ������ �ȴ�.
	printf("swap_address �� a�ּ� : %p, b �ּ� : %p\n", a, b);

	int temp = *a; // ���� a = a�� �ּҰ�, *a = a�ּҿ� �ִ� ��
	*a = *b;
	*b = temp;

	printf("swap_address �� a�� : %d, b�� : %d\n", *a, *b);
}

int main_p6() {
	int a = 100;
	int b = 300;

	printf("main(�Լ� ȣ�� ��) a�ּ� : %p, b �ּ� : %p\n", &a, &b);

	printf("\n");
	swap(a, b); // call by value
	printf("\n");

	printf("main(swap�Լ� ȣ�� ��) a�ּ� : %p, b �ּ� : %p\n", &a, &b);
	printf("main���� a�� : %d, b�� : %d\n", a, b);

	printf("\n");
	swap_address(&a, &b); // call by address, call by pointer, call by reference
	printf("\n");

	printf("main(swap_address�Լ� ȣ�� ��) a�ּ� : %p, b �ּ� : %p\n", &a, &b);
	printf("main���� a�� : %d, b�� : %d\n", a, b);

	return 0;
}

/*
�Լ��� ȣ���ϸ鼭 a,b�� �Ѱ� �� ��,
a,b��ü�� �����ִ°� �ƴ϶� ���� �����ϴ� ��.
�����Ѵٴ� �ǹ̴� �Ȱ��� ���� �� ����ٴ� �� = �޸𸮿� ���ο� ������ �������
-> ���ο� �ּҰ��� ���´�.

������ �� ���ο� �������� ���� ��ȯ�� ��
���ο� ������ ���� ��ȯ�� ���� ������
�ۿ� �ִ� a,b�� ���� �ּҿ� �״�� �ִ� ���̱� ������ ������ ����
�ۿ� a,b�� ���� ��ȯ���� �ʴ´�

=> �̷� ��� : call by value ���� ���� ȣ��
���������� �����Լ��� �ִ� a,b�� ��ȯ�� �߻����� �ʴ´�
*/

/*
a,b�� ���� ��ȯ�ϰ� �ʹٸ�
a,b�� �ּҰ��� �Ѱ��ָ� �ȴ�. �ּ� �� ��ü�� �Ѱ��ָ� �ȴ�.
�Լ�ȣ���� ��, �Ű������� a�� �ּ�, b�� �ּ� �ʿ� (&a, &b)
�� �ּ��� ���� ��ȯ�ϴ� ���̱� ������ a,b�� ���� ��ȯ�� �ȴ�.
�޸𸮿� �����ؼ� ���� �ٲٴ� ��.

=> �̷� ��� : call by address, call by pointer, call by reference
*/