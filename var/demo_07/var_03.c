/* 상수화 변수 */
#include <stdio.h>

int main_v3() {

	// 변수 선언문 앞에 const 가 오면 값을 변경할 수 없다.
	const int const_var = 3;
	// const_var = 8; // error


	int arr[10] = { 1,2,3,4,5,7,8,9,10 };

	// p1 포인터 변수의 값은 변경 불가, *p1의 값은 변경 가능
	// int* const p1 = arr;

	// p1 = arr + 1; // error
	
	// int const *p1 = arr; 와 같다.
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