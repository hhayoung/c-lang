#include <stdio.h>

// var_09에서 선언된 ex_ln을 공유하고 있음.
// 즉, Object(메모리공간)를 공유한다는 의미
// 사실 extern이 없어도 전역변수는 공유되는 특성이 있다.

// extern int ex_ln;
int ex_ln;
//-> extern을 없애도 잘 수행됨.
// extern int in_ln;  // in_ln에 static 이 붙어서 extern해서 가져올 수 가 없다.

void test_link() {
	printf("Dosomething called \n");
	printf("%d\n", ex_ln);

	//printf("in_ln : %d\n", in_ln);

	ex_ln++;
}