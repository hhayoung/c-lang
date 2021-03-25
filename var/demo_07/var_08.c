#include <stdio.h>

/*
	지역변수와 전역변수
*/
void func(int);

int main_v8() {
	
	// 함수 블럭이 끝나면 자동으로 사라지기 때문에 auto가 붙는 것(auto 생략가능)
	auto int a;

	// 전역변수는 초기화를 해주지 않아도 0으로 초기화.

	// 지역변수는 반드시 초기화 해야 한다. 쓰레기값이 들어감.
	// 스택에 매번 들어갔다 나왔다 반복
	// 자동 초기화하지 않는다.

	/* 
		전역 변수는 스택메모리에 쌓이지 않기 때문에 고정인데,
		지역 변수는 스택메모리에 쌓이기 때문에 값이 일정하지 않다.
		변수 a가 스택에 쌓였다가 빠져나가고,
		그 다음으로 변수 b가 들어왔을 때 값을 초기화하지 않았다면
		전에 있던 변수 a가 가지고 있던 값이 들어갈 수도 있다. (쓰레기값)
	*/
	
	a = 1000;

	int i = 1;
	int j = 2;

	printf("i %lld\n", (long long)&i);

	{
		int i = 3; // 블럭 밖의 i는 hiding
		printf("i %lld\n", (long long)&i);
		printf("j = %d\n", j);
		int ii = 77;
	}
	// 이 영역에서 ii는 블럭을 벗어나면서 스택에서 자동으로 pop 된다.
	// ii = 1010; // error

	// 블럭밖의 i = 1
	printf("i %lld\n", (long long)&i);


	// m 의 주소값이 각각 다르다.
	for (int m = 1; m < 2; m++)
		printf("m %lld\n", (long long)&m); // m의 수명은 여기까지
	
	for (int m = 1; m < 2; m++) {
		printf("m %lld\n", (long long)&m);
	} // m의 수명은 여기까지

	// 함수 호출
	func(77);

	return 0;
}

void func(int k) {

	/*
		함수를 호출하게 되면 스택영역에 함수스택영역이 따로 생성된다.
		만약에 또 다른 함수를 호출하면 또다른 함수스택영역이 만들어진다.
		=> 함수마다 각각의 스택영역이 생성된다.
	*/
	int i = k * 2;
	printf("i %lld\n", (long long)&i);
}