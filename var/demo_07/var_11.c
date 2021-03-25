#include <stdio.h>

/* 전역변수 반복 반복 반복 */

static int g_int = 777;

extern void func_11();
void func_11_1();
void func_11_2();

int main_11() {

	func_11();
	func_11_1();
	func_11_2();

	return 0;
}

void func_11() {
	// 블럭 안에서 전역변수를 쓰려면 extern 필요
	extern int g_int; // 이 코드를 굳이 쓰지 않고 그냥 바로 사용해도 된다.
	g_int += 1; // 바로 이 코드처럼 선언없이 사용해도 된다.
	printf("func_11안에 있는 g_i %d %p \n", g_int, &g_int);
}