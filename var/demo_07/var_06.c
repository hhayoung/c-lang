#include <stdio.h>

/*
	�� C���� Object(��ü)�ǹ�
		- C������ �޸��� �� ������ Object��� �Ѵ�.(���� ���ؼ�, �޸𸮰��� �����ϸ� ��ü)
		- java, C++�� OOP(��ü����)������ ������ ���� �� ������ �������� ���ȴ�.

	�� �ĺ���(identifier)
		- ������ �̸�, �Լ� �̸�, ��ũ�� �̸�
		==> identifier�� Object�� ���� �̸�

*/

int main_v6() {

	// var_name�̶�� �θ��� Object�� ������ ��.
	// var_name�� �ĺ���(identifier)
	// ������ �̸��� ���ؼ� �޸� ������ ������ �� �� ����.
	int var_name = 300;

	// ptr�� �ĺ���
	int* ptr = &var_name;

	// ���⼭ *ptr�� Object�� ����Ű�� ǥ����(expression)�̴�. 
	*ptr = 10;
	// *ptr = 10�� ǥ���� ���⼭ ; ������ ����
	
	// arr�� �ĺ���, Object �� �ƴϴ�.
	int arr[100];
	// arr�� arr[0]�� �ּҰ�

	// arr[0]�� Object �̴�. �޸� ������ �ǹ��ϱ� ������
	// ����, arr[0]�� �ĺ��ڰ� �ƴϴ�.
	arr[0] = 777;


	/* L-value�� R-value�� ���� (���� �޽������� ã�ƺ� �� ����.)
	
		L-value�� Object�� �����ϴ� ǥ����
		: Object�� �ǹ��Ѵٰ� �����ϸ� ��.

		L-value : =�� ����(Object)
		R-value : =�� ������(constant, variable)

	*/

	// var_name�� �޸� ������ ����(referring)�Ѵ�. 
	// �޸� ������ ���� ������ �� �ִ�.(modifiable lvalue)
	var_name = 77;

	int temp = var_name;
	temp = 100 + 200;

	// 100 + 200 = temp;  //error �߸��� ǥ����


	// ptr�� �ĺ���
	ptr = &var_name;
	int* ptr2 = arr;

	// *ptr �� �ĺ��ڴ� �ƴ�����, �޸� ������ ���� ������ �� �ִ�.
	// ��, modifiable lvalue ǥ�����̴�. (���� ������ �� �ִ� lvalue ǥ����)
	*ptr = 77;

	// ���⼭�� rvalue�� �ּҰ�
	int* ptr3 = arr + 2 * var_name;

	// ���⼭ lvalue�� modifiable lvalue ǥ�����̴�. 
	*(arr + 2 * var_name) = 7777;

	
	// lvalue�� str�� modifiable lvalue
	/* 
		str�� �󸶵��� �ٸ� ���ڿ������ �ٲ� �� �ִ�.(�����͸� �ű� �� �ִ�)
		const char* str = "AAA";
		str = "BBB";
	*/
	const char* str = "Constant string";
	// ���ڿ� �������� ���� �ٲ� �� ����. 
	// "Constant string"�� ���ڿ� �����, �׷��� rvalue

	// "Constant string" = "string2"; // �翬�� ����
	str = "string2"; // �̰� ����
	
	// str[0] = 'A'; // �翬�� ����
	// *str = 'A'; // �翬�� ����
	

	return 0;
}