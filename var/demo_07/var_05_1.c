#include <stdio.h>

// main이 없는 곳에서도 전역변수 초기화 가능
// extern int g_i = 10000;
// 연결된 전역변수가 있는 다른 코드에서 초기화를 하면 에러
// 같은 메모리에 있기 때문에 둘 중에 한 곳에서만 초기화해야한다.
// extern이 아닌 처음 선언한 곳에서 초기화하는게 좋다.

// 파일 스코프에 있는 변수가 공유가 될 때는
// 초기화는 한 곳에서만 해야 한다. 
// extern이 없는 곳에서 초기화하는 것이 명확해 보일 수 있음.

int g_i = 10000; // extern 이 없어도 정상적으로 수행된다.

// 함수에 static을 붙이면 다른 파일에서는 접근 불가능
// 이 파일이 아닌 다른 파일에서 test_func()를 부르려고 하면 오류
static void test_func() {
	extern int g_i;

	g_i += 10000;
}

void func_5_1() {

	test_func();
	extern int g_i; // 함수안에서 사용하려할 때도 extern g_i를 선언해줘야 함.

	g_i += 7;
	printf("func안의 g_i : %d %p\n", g_i, &g_i);
}
