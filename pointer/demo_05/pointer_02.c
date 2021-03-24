#include <stdio.h>

/*
visual studio
도구 > 옵션 > 텍스트편집기 > C/C++ > 서식 > 기본 서식 스타일 > 비쥬얼스튜디오로 되어있음.
LLVM 선택(요즘엔 gcc보다 컴파일러 LLVM를 많이 사용한다.)
int* a_ptr;
컨트롤 x했다가 컨트롤 v누르면
자동으로 int *a_ptr; 로 된다.
LLVM - 속도가 빠르다.
*/
int main_p2() {

	// 포인터 코딩 스타일

	// LLVM(Low Level Virtual Machine): 저수준 가상머신
	// LLVM은 GCC 컴파일러가 가지고 있는 한계를 극복하여 발전시킨 새로운 컴파일러(C++로 개발)

	// int* a;
	// int *a; // 전통적 방법
	// 둘 다 같은 동작을 하긴 하지만 표현의 차이

	// int* c, d; // c는 포인터 변수, d는 정수형 변수
	// int* c, * d; // c,d는 둘 다 정수형 포인터변수

	// 전통적 스타일을 하겠다 하면 
	// 도구> 텍스트 편집기> c/c++> 서식> 일반> ;과 {} 이거 체크박스를 풀어준다.(자동 서식을 없애준 것)

	int a, b;
	a = 100;

	int* a_ptr; // 포인터 변수 선언(주소값을 저장하는 변수)

	a_ptr = &a;
	// 포인터변수로 지정을 해뒀기 때문에 * 생략해도 된다.

	printf("%d %d \n", a, *a_ptr);
	// a의 주소를 출력하고 싶으면
	printf("%p\n", a_ptr); // %p 는 포인터변수의 16진수 주소 표현
	// %d로 했을 때는 warning이 뜬다.

	*a_ptr = 300; // * : indirection(간접 접근), re-dirention(방향재지정) or dereferencing(역참조)

	printf("%d %d %p\n", a, *a_ptr, a_ptr);
	// 포인터로 값을 변경하는 것이 훨씬 빠르다. 주소는 동일

	// b = a_ptr; // 권장되지 않는 방법(주소값을 정수형으로 사용하지는 않는다.)
	// 정수형 변수 b에 주소값이 들어가는지 확인
	// printf("b: %d\n",b);
	// a의 주소값인 16진수를 정수형으로 변환한 값이 찍힌다.
	// warning은 뜬다. 포인트변수 타입(int *)으로 선언했는데
	// b는 int라서 서로 다른 것. b=(int)a_ptr; 이라고 생각하고
	// 묵인하고 넘어가는 것. 실제로는 이렇게 쓰지 않는다.

	b = *a_ptr; // 이건 값이 들어간 것.
	printf("b: %d\n", b);

	*a_ptr = 700;
	printf("b: %d\n", b);
	printf("%d %d %p %p\n", a, *a_ptr, a_ptr, &b);

	a = 1000;
	printf("%d %d %p %d\n", a, *a_ptr, a_ptr, b);
	// b는 아까 시간에 머물러 있다. a와 연결되어 있는 건 x

	return 0;
}