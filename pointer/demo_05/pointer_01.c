#include <stdio.h>

int main_p1() {

	// int a;
	// int b;
	// int c;

	// a = 7;
	// b = 8;
	// c = a + b;
	// 실제 메모리상에는 
	// 주소를 표현할 때는 1바이트로 처리
	// 운영체제마다 일반적으로 1바이트로 처리

	// 메모리상 그림을 그릴 때 위에서부터 하지만
	// 밑에서부터 할 수도 있다.
	// 밑에서부터 99번지 100번지 101번지 ... 110번지

	// 변수들은 스택메모리에 저장된다. 

	// 스택(stack) 메모리 힙(heap) 메모리
	// 메모리를 구분할 때 
	// 스택 영역, 힙 영역이 있는데
	// 지역변수나 함수 => 스택
	// 동적으로 할당되는, 런타임시 생성되는 그런 변수들 => 힙
	// 보통은 스택메모리를 많이 사용한다.

	// 스택 위에서 아래로 저장.
	// 힙 아래에서 위로 저장.

	// a라고 하는 변수는 예를 들어 107번지 시작번지
	// b는 103번지
	// c는 109번지

	// a = 107번지에 있는 값

	int a = 7;

	// int 형 변수의 주소를 저장하는 변수 선언
	// 포인터 변수의 선언
	int* a_ptr = &a; // 포인터 변수에 저장되어 있는 값은 다른 변수의 주소

	// &a : a변수의 주소번지
	// 예를 들어 a의 주소를 128번지라고 하면,
	// 128번지를 정해주는 변수 포인터변수
	// a는 int형 
	// int 형 변수의 주소를 저장하는 변수 선언 = 포인터변수

	// * : 주소값을 저장하는 변수라는 것을 알려준다.
	// 다른 변수의 주소를 저장하고 있는 변수

	//c언어 전통적인 방법
	// int *a_ptr;
	// 약간씩 컴파일러마다 차이가 있다.

	// int (*a_ptr) = &a; //*a_ptr는 int 자료형이라는 의미이다.

	//* : 간접접근(indirection), 방향재지정(redirection), 역참조(dereferencing)
	// 역방향으로 값을 가르키고 있는 것.
	* a_ptr = 9;
	printf("%d %d", a, *a_ptr);
	// 9 9
	// a변수에 있는 값을 바꿔주는 역할을 한 것


	return 0;
}