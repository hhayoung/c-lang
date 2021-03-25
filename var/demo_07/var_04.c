/* static 지역변수(in block) */
#include <stdio.h>

void count() {
	int cnt = 0;
	printf("count = %d %lld\n", cnt, (long long)&cnt);
	cnt++;
}

void static_count() {
	static int cnt = 0;
	printf("static count = %d %lld\n", cnt, (long long)&cnt);
	cnt++;
}

void counter_caller() {
	count();
}

void static_counter_caller() {
	static_count();
}

int main_v4() {

	count(); // 값 유지X
	count(); // 값 유지X
	counter_caller(); // 값 유지X, 주소는 왜? 
	/*
		지역변수는 보통 스택메모리에 저장된다. 지금 counter_caller()는 함수 
		메인에서 counter_caller 함수를 호출할 때, 함수는 스택에서 또다른 영역에 저장.
		=> count()의 주소와 counter_caller 함수에서 호출한 count()의 주소가 다르다. 
		
		지역변수에는 왜 Auto가 생략되어 있을까?
		블럭에 선언해놓고 블럭 벗어나면 자동으로 사라져버리기 때문에 auto가 붙은 것.
		스택에 변수를 생성하면 지역변수를 만들면 스택영역에 지역변수 하나가 생성됨.
		코드상에서 블럭을 벗어나면 자동으로 스택에서 사라짐.
		push됏다가 자동으로 pop됨.
		누가해주지 않아도 자동으로 pop됨.
		그래서 공간이 늘어났다 줄어들었다.
	*/

	static_count();
	static_count();
	static_counter_caller();
	/*
		메모리에 스택과 힙 메모리 영역 밑에 BSS 영역(size 고정)
		static 변수는 BSS 영역에 저장된다. 
		그래서 주소가 바뀌지 않는 것.
	*/

	return 0;
}

/* 출력
	count = 0 11533592
	count = 0 11533592
	count = 0 11533380
	static count = 0 15507772
	static count = 1 15507772
	static count = 2 15507772
*/