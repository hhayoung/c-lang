#include <stdio.h>

// extern int g_int; // var_11에 있는 g_int에 static이 붙으면서 이렇게 쓸 수 없다.
int g_int; // 자동초기화되서 0이고, var_11_2의 g_int는 이제부터 이 g_int를 참조하게 된다.

void func_11_1() {
	
	g_int += 1;
	printf("func_11_1안에 있는 g_i %d %p \n", g_int, &g_int);
}