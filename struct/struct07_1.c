#include <stdio.h>

struct my_data
{
	int a;
	char c;
	float arr[2];
};

int main_07_1()
{
	//struct my_data d1 = { 1234, 'A', {1.1f, 2.2f} };
	struct my_data d1 = { 1234, 'A', };
	d1.arr[0] = 1.1f;
	d1.arr[1] = 2.2f;

	printf("%d %c %lld\n", d1.a, d1.c, (long long)d1.arr);
	printf("%f %f\n", d1.arr[0], d1.arr[1]); //arr�� ��� 
	printf("%lld %lld\n\n", (long long)&d1.arr[0], (long long)&d1.arr[1]);

	// ����ü ����
	/*struct my_data d2;
	d2.a = d1.a;
	d2.c = d1.c;
	d2.arr[0] = d1.arr[0];
	d2.arr[1] = d1.arr[1];*/

	struct my_data d2 = d1; // �� �ڵ带 �� �ٷ� �����ϰ�. d1�� ������ ����.

	printf("%d %c %lld\n", d2.a, d2.c, (long long)d2.arr);
	printf("%f %f\n", d2.arr[0], d2.arr[1]); //arr�� ��� 
	printf("%lld %lld\n\n", (long long)&d2.arr[0], (long long)&d2.arr[1]);
	// �޸� ���� ���� ����� ������ �ּ� ���� �޶���.


	return 0;
}