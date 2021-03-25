#include <stdio.h>

int g_int;   // 앞에 extern 써도되고, 안써도되고
/* 
	var_11의 g_int가 static이 되면서 더이상 참조할 수 없게 되고,
	현재 extern 이 붙었기 때문에 파일들을 돌아다니면서 g_int라는 변수를 찾아 다닌다.
	그래서 var_11_1에도 g_int라는 전역변수가 있기 때문에 
	var_11_1의 g_int를 참조하게 된다. 
	만약에 돌아다니는데도 g_int를 찾지 못하면 오류가 난다. 
*/

void func_11_2() {

	g_int += 1;
	printf("func_11_2안에 있는 g_i %d %p \n", g_int, &g_int);
}