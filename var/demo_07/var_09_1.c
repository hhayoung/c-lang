#include <stdio.h>

// var_09���� ����� ex_ln�� �����ϰ� ����.
// ��, Object(�޸𸮰���)�� �����Ѵٴ� �ǹ�
// ��� extern�� ��� ���������� �����Ǵ� Ư���� �ִ�.

// extern int ex_ln;
int ex_ln;
//-> extern�� ���ֵ� �� �����.
// extern int in_ln;  // in_ln�� static �� �پ extern�ؼ� ������ �� �� ����.

void test_link() {
	printf("Dosomething called \n");
	printf("%d\n", ex_ln);

	//printf("in_ln : %d\n", in_ln);

	ex_ln++;
}