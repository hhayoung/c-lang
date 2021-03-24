#include <stdio.h>

// call by value : 값에 의한 호출
void swap(int a, int b) {
	// 여기서의 a,b는 지역변수 a,b일 뿐
	// 메인함수의 a,b의 값을 복사한 다른 변수일 뿐이다
	printf("swap 안 a주소 : %p, b 주소 : %p\n", &a, &b);

	int temp = a;
	a = b;
	b = temp;

	printf("swap 안 a값 : %d, b값 : %d\n", a, b);
}

// call by address, call by pointer, call by reference
void swap_address(int* a, int* b) {
	// printf("swap_address 안 a주소 : %p, b 주소 : %p\n", &a, &b);
	// main함수의 주소값이 넘어오지 않는다 -> &a, &b를 찍으면 안됨.
	// a,b 자체가 주소값을 갖고 있기 때문에 그대로 찍으면 된다.
	printf("swap_address 안 a주소 : %p, b 주소 : %p\n", a, b);

	int temp = *a; // 현재 a = a의 주소값, *a = a주소에 있는 값
	*a = *b;
	*b = temp;

	printf("swap_address 안 a값 : %d, b값 : %d\n", *a, *b);
}

int main_p6() {
	int a = 100;
	int b = 300;

	printf("main(함수 호출 전) a주소 : %p, b 주소 : %p\n", &a, &b);

	printf("\n");
	swap(a, b); // call by value
	printf("\n");

	printf("main(swap함수 호출 후) a주소 : %p, b 주소 : %p\n", &a, &b);
	printf("main에서 a값 : %d, b값 : %d\n", a, b);

	printf("\n");
	swap_address(&a, &b); // call by address, call by pointer, call by reference
	printf("\n");

	printf("main(swap_address함수 호출 후) a주소 : %p, b 주소 : %p\n", &a, &b);
	printf("main에서 a값 : %d, b값 : %d\n", a, b);

	return 0;
}

/*
함수를 호출하면서 a,b를 넘겨 줄 때,
a,b자체를 보내주는게 아니라 값을 복사하는 것.
복사한다는 의미는 똑같은 것을 또 만든다는 것 = 메모리에 새로운 공간이 만들어짐
-> 새로운 주소값을 갖는다.

복사한 그 새로운 공간에서 값을 교환한 것
새로운 공간의 값이 교환된 것은 맞지만
밖에 있는 a,b는 기존 주소에 그대로 있는 것이기 때문에 관련이 없다
밖에 a,b는 값이 교환되지 않는다

=> 이런 방식 : call by value 값에 의한 호출
실질적으로 메인함수에 있는 a,b는 교환이 발생하지 않는다
*/

/*
a,b의 값을 교환하고 싶다면
a,b의 주소값을 넘겨주면 된다. 주소 그 자체를 넘겨주면 된다.
함수호출할 때, 매개변수로 a의 주소, b의 주소 필요 (&a, &b)
그 주소의 값을 교환하는 것이기 때문에 a,b의 값은 교환이 된다.
메모리에 접근해서 값을 바꾸는 것.

=> 이런 방식 : call by address, call by pointer, call by reference
*/