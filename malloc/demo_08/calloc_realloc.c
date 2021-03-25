#include <stdio.h>
#include <stdlib.h>

int main() {

	/* calloc */
	int n = 10;

	int* ptr = NULL;
	// ptr = (int*)malloc(sizeof(int) * n);
	// contiguous allocation, malloc���� ���̴� �Ķ���Ͱ� 2����°�
	ptr = (int*)calloc(n, sizeof(int));

	if (!ptr) exit(1);

	// calloc�� 0���� �ʱ�ȭ ����
	for (int i = 0; i < n; i++) {
		printf("%d ", ptr[i]);
	}

	/*
		realloc : ���Ҵ�
		�޸𸮸� �� �Ҵ��� �䱸�ϸ�,
		�ִ� �����ʹ� �״�� ���縦 �ϰ�,
		���Ӱ� �߰��� ������ �ʱ�ȭ�� ������ �ʴ´�.

		�޸𸮸� �Ҵ���� �� ���� ��쿡�� NULL�� �����Ѵ�.

		����>
		realloc(ptr, n * sizeof(int));

		ptr ���ڰ� NULL�̸� malloc ó�� �����Ѵ�.
		�ι�° ���ڰ� 0�̸� ptr�� ����Ű�� 
		�޸� ���� free�Ѵ�.
	*/

	for (int i = 0; i < n; i++) {
		ptr[i] = i + 1;
	}
	printf("\n");
	
	n = 20;

	int* ptr2 = NULL;
	// ptr�� �̹� �Ҵ���� �޸� ��
	ptr2 = (int*)realloc(ptr, n * sizeof(int));

	// �ǹ������� ������ ���� ����ϴ� ��쵵 ����
	// ptr = (int*)realloc(ptr, n * sizeof(int));

	printf("%p %p \n", ptr, ptr2);

	if (!ptr2) exit(1);
	else
		ptr = NULL;

	for (int i = 0; i < n; i++) {
		printf("%d ", ptr2[i]);
	}
	printf("\n");
	
	free(ptr2);

	return 0;
}