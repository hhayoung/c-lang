#include <stdio.h>
#include <stdlib.h>

/* Memory Leak(�޸� ����) */
int main_m4() {

	printf("----------------test start------------------\n");

	//�� ���� ptr�� ����ϱ� ���� ����
	//int* ptr_bak = NULL;

	for (int i = 0; i < 100000000; i++)
	{
		int n = 100000000;

		int* ptr = (int*)malloc(n * sizeof(n));


		if (!ptr) // if(ptr == NULL) 
		{
			printf("�޸� �Ҵ� ����!!\n");
			exit(EXIT_FAILURE);
		}

		for (int i = 0; i < n; i++) {
			ptr[i] = i + 1; // �޸𸮿� �Ҵ�
		}

		//printf("%d %d\n", ptr[0], ptr[1]);

		//ptr_bak = ptr;
		free(ptr); // ���� ������ �ݳ�

		//ptr = NULL; // �� ����� �����ʹ� NULL ó���� ����.

	}


	// ������ free�� �޸� ������ �ݳ��ع����� 
	// ����Ű�� �ּҰ� ������ �Ŷ� ���� ������ ����Ű�� ��Ÿ�� ������ �߻��Ѵ�.
	//printf("%d %d\n", ptr_bak[0], ptr_bak[1]);

	printf("----------------test end------------------\n");

	return 0;
}