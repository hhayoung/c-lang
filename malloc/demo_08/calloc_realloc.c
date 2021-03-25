#include <stdio.h>
#include <stdlib.h>

int main() {

	/* calloc */
	int n = 10;

	int* ptr = NULL;
	// ptr = (int*)malloc(sizeof(int) * n);
	// contiguous allocation, malloc과의 차이는 파라미터가 2개라는것
	ptr = (int*)calloc(n, sizeof(int));

	if (!ptr) exit(1);

	// calloc은 0으로 초기화 해줌
	for (int i = 0; i < n; i++) {
		printf("%d ", ptr[i]);
	}

	/*
		realloc : 재할당
		메모리를 더 할당을 요구하면,
		있던 데이터는 그대로 복사를 하고,
		새롭게 추가된 공간은 초기화를 해주지 않는다.

		메모리를 할당받을 수 없는 경우에는 NULL을 리턴한다.

		형식>
		realloc(ptr, n * sizeof(int));

		ptr 인자가 NULL이면 malloc 처럼 동작한다.
		두번째 인자가 0이면 ptr이 가리키는 
		메모리 블럭을 free한다.
	*/

	for (int i = 0; i < n; i++) {
		ptr[i] = i + 1;
	}
	printf("\n");
	
	n = 20;

	int* ptr2 = NULL;
	// ptr은 이미 할당받은 메모리 블럭
	ptr2 = (int*)realloc(ptr, n * sizeof(int));

	// 실무에서는 다음과 같이 사용하는 경우도 많음
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