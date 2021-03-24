#include <stdio.h>

/* const 한정자(qualifier) */
// 실제 많이 사용하게 될 const 키워드
// c에서도 많이 쓰고, c++에서 특히 많이 쓴다.

/*
  값이 절대로 바뀌면 안될 때는 const를 붙이면 된다.
  다른 사람의 코드를 봤을 때 const 키워드를 확인해서
  개발자의 의도를 알아차릴 수 있다.
*/
int main_p11() {

	// const double PI = 3.141592;
	double PI = 3.141592;
	PI = 2.14159; // const로 선언해놓으면 값을 바꿀 수 없다.


	int arr[3] = { 1,2,3 };
	// const int arr[3] = {1,2,3}; // 배열에도 적용된다.
	arr[1] = 100; // 배열에도 const 붙어있으면 값 변경 X.


	// const double arr2[3] = {1.0,2.0,3.0};
	double arr2[3] = { 1.0,2.0,3.0 };
	// arr2[0] = 100.0;


	double* ptr = arr2;
	*ptr = 3.0;  //ptr[0] = 3.0;  arr2[0] 와 동일
	printf("%f %f\n", ptr[2], arr2[2]);
	// 같은 값이 출력된다. -> 포인터도 배열처럼 사용가능하다.
	// ptr[2] = 100.0; 는 arr2[2] = 100.0 과 동일

	// const double *ptr = arr2;
	//┌ const 붙이면 에러 발생
	// *ptr = 3.0;  

	ptr++;
	// 배열의 두번째 요소를 가리킴 -> 값을 ++ 하는게 아니라서 가능.
	// 만약 개발자가 이거자체도 못하게 막으려고 한다면,
	// 포인터 변수 앞에 const
	// const double* const ptr = arr2;

	// const double *ptr = arr2; 
	// -> 포인터가 가리키고 있는 값을 못 바꾼다.
	// const double* const ptr = arr2;
	// -> 포인터의 주소값을 못바꾼다.

	printf("%f %f\n", ptr[2], arr2[2]);

	return 0;
}