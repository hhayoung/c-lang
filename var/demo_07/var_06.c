#include <stdio.h>

/*
	ㅁ C언어에서 Object(객체)의미
		- C언어에서는 메모리의 한 공간을 Object라고 한다.(쉽게 말해서, 메모리공간 차지하면 객체)
		- java, C++의 OOP(객체지향)에서의 개념은 한층 더 발전된 개념으로 사용된다.

	ㅁ 식별자(identifier)
		- 변수의 이름, 함수 이름, 매크로 이름
		==> identifier은 Object에 대한 이름

*/

int main_v6() {

	// var_name이라고 부르는 Object를 생성한 것.
	// var_name은 식별자(identifier)
	// 변수의 이름을 통해서 메모리 공간에 접근을 할 수 있음.
	int var_name = 300;

	// ptr은 식별자
	int* ptr = &var_name;

	// 여기서 *ptr은 Object를 가리키는 표현식(expression)이다. 
	*ptr = 10;
	// *ptr = 10은 표현식 여기서 ; 붙으면 문장
	
	// arr은 식별자, Object 는 아니다.
	int arr[100];
	// arr은 arr[0]의 주소값

	// arr[0]는 Object 이다. 메모리 공간을 의미하기 때문에
	// 따라서, arr[0]는 식별자가 아니다.
	arr[0] = 777;


	/* L-value와 R-value의 개념 (오류 메시지에서 찾아볼 수 있음.)
	
		L-value는 Object를 참조하는 표현식
		: Object를 의미한다고 생각하면 됨.

		L-value : =의 왼쪽(Object)
		R-value : =의 오른쪽(constant, variable)

	*/

	// var_name은 메모리 공간을 참조(referring)한다. 
	// 메모리 공간의 값을 변경할 수 있다.(modifiable lvalue)
	var_name = 77;

	int temp = var_name;
	temp = 100 + 200;

	// 100 + 200 = temp;  //error 잘못된 표현식


	// ptr은 식별자
	ptr = &var_name;
	int* ptr2 = arr;

	// *ptr 은 식별자는 아니지만, 메모리 공간의 값을 변경할 수 있다.
	// 즉, modifiable lvalue 표현식이다. (값을 변경할 수 있는 lvalue 표현식)
	*ptr = 77;

	// 여기서의 rvalue는 주소값
	int* ptr3 = arr + 2 * var_name;

	// 여기서 lvalue는 modifiable lvalue 표현식이다. 
	*(arr + 2 * var_name) = 7777;

	
	// lvalue는 str은 modifiable lvalue
	/* 
		str은 얼마든지 다른 문자열상수로 바꿀 수 있다.(포인터를 옮길 수 있다)
		const char* str = "AAA";
		str = "BBB";
	*/
	const char* str = "Constant string";
	// 문자열 포인터의 값은 바꿀 수 없다. 
	// "Constant string"은 문자열 상수값, 그래서 rvalue

	// "Constant string" = "string2"; // 당연히 에러
	str = "string2"; // 이건 가능
	
	// str[0] = 'A'; // 당연히 에러
	// *str = 'A'; // 당연히 에러
	

	return 0;
}