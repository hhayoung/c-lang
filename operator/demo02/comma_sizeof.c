#include <stdio.h>

int main_comma_sizeof()
{
	int i, j;
	// �޸� ������
	// : ���� ���ĺ��� ����Ͽ� ���������� ����� ������ ���İ��� ���� �����
	j = (i = 2 + 4, i - 3);

	printf("%d\b", j); // j=3


	// sizeof ������(���� ������)
	/*
		sizeof(����) : ������ ������ ũ��(����Ʈ ��)
		sizeof(���) : ����� ������ ũ��(����Ʈ ��)
		sizeof(����) : ������ ����� ������(�޸�)�� ũ��(����Ʈ ��)
		sizeof(�ڷ���) : �ڷ����� ������ ũ��(�ڷ����� �ݵ�� ��ȣ�� �־�� ��.)
	*/

	int aa = 10;
	printf("%d\n", sizeof aa); // 4
	printf("%d\n", sizeof(short)); // 2

	int bb = 20;
	printf("%d", sizeof bb + 5); // sizeof bb = 4 + 5 = 9
	
	return 0;
}