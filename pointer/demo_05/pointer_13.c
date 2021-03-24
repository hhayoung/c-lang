#include <stdio.h>

/* 이중 포인터 */

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
	pptr은 ptr의 주소를 갖고 있는데 앞에 *이게 붙었기 때문에
	ptr의 주소가 가리키고 있는 값 = 100
	2) *(*pptr)
	100은 a의 주소인데 앞에 * 이게 붙었기 때문에
	100이 가리키고 있는 값 = 2
	그 값을 3으로 바꾸겠다 = a의 값을 바꾸겠다.
	*/

	printf("%d %d\n", a, **pptr);

	return 0;
}