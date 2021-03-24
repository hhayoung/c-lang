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
디버그 > 창> 메모리> 메모리1 열어서 옆에다 두고 보기

한줄씩 디버그했을 때
a_ptr 값을 복사해서 메모리1창의 주소에 써넣으면 a값인 4가 할당되어있다.
*/