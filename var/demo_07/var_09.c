#include <stdio.h>

/*
	�� Linkage
		file�� �����Ϸ��� �������� �ϱ� ���� �ּ� �����̴�.(file = translation unit)

		���� ���� ������Ʈ �ȿ��� ���� ���� ������ �����Ѵ�. 
		�����Ϸ��� �� ���� ���� ������ ���� ���� ���� ������ �Ѵ�.

		������ object ������ �����Ǹ� �� object������ 
		Linker�� ������ �κ��� ������ ������ ���ش�. 
		�̷��� ���� Linkage��� �Ѵ�. 
		���� �۾� -> Linkage

		src ---(������)---> obj ---(Linker)---> exe
	
*/

// external link
int ex_ln; // ����(global)���� : file scope�� �ִ� ����

// internal linkage (���ο���: file �ȿ����� ���)
// linkage type�� �ǹ��ϴ� Ű����
static int in_ln; 
// block �ȿ��� ���Ǵ� static�� Object�� ����/����(storage duration)�� �ǹ��Ѵ�.

// ���� ������������ static�� ������ linkage�� Ÿ���� �ǹ�(�ܺθ�ũ���� ���θ�ũ����) 
// ���������� static�� ���̸� ���� �����ϴ��� ���ϴ���

void test_link();
// -> ��� �� �����. warning�� ���.
// warning C4013: 'test_link'��(��) ���ǵ��� �ʾҽ��ϴ�.

int main_v9() {

	ex_ln = 2000;

	test_link();

	printf("%d\n", ex_ln);

	return 0;
}