#include <stdio.h>
#include <stdlib.h>

/* Memory Leak(메모리 누수) */
int main_m4() {

	printf("----------------test start------------------\n");

	//블럭 안의 ptr을 백업하기 위한 선언
	//int* ptr_bak = NULL;

	for (int i = 0; i < 100000000; i++)
	{
		int n = 100000000;

		int* ptr = (int*)malloc(n * sizeof(n));


		if (!ptr) // if(ptr == NULL) 
		{
			printf("메모리 할당 실패!!\n");
			exit(EXIT_FAILURE);
		}

		for (int i = 0; i < n; i++) {
			ptr[i] = i + 1; // 메모리에 할당
		}

		//printf("%d %d\n", ptr[0], ptr[1]);

		//ptr_bak = ptr;
		free(ptr); // 같은 블럭에서 반납

		//ptr = NULL; // 다 사용한 포인터는 NULL 처리를 해줌.

	}


	// 위에서 free로 메모리 공간을 반납해버리면 
	// 가르키는 주소가 없어진 거라서 없는 공간을 가리키면 런타임 에러가 발생한다.
	//printf("%d %d\n", ptr_bak[0], ptr_bak[1]);

	printf("----------------test end------------------\n");

	return 0;
}