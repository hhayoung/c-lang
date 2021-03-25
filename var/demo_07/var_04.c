/* static ��������(in block) */
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

	count(); // �� ����X
	count(); // �� ����X
	counter_caller(); // �� ����X, �ּҴ� ��? 
	/*
		���������� ���� ���ø޸𸮿� ����ȴ�. ���� counter_caller()�� �Լ� 
		���ο��� counter_caller �Լ��� ȣ���� ��, �Լ��� ���ÿ��� �Ǵٸ� ������ ����.
		=> count()�� �ּҿ� counter_caller �Լ����� ȣ���� count()�� �ּҰ� �ٸ���. 
		
		������������ �� Auto�� �����Ǿ� ������?
		���� �����س��� �� ����� �ڵ����� ����������� ������ auto�� ���� ��.
		���ÿ� ������ �����ϸ� ���������� ����� ���ÿ����� �������� �ϳ��� ������.
		�ڵ�󿡼� ���� ����� �ڵ����� ���ÿ��� �����.
		push�Ѵٰ� �ڵ����� pop��.
		���������� �ʾƵ� �ڵ����� pop��.
		�׷��� ������ �þ�� �پ�����.
	*/

	static_count();
	static_count();
	static_counter_caller();
	/*
		�޸𸮿� ���ð� �� �޸� ���� �ؿ� BSS ����(size ����)
		static ������ BSS ������ ����ȴ�. 
		�׷��� �ּҰ� �ٲ��� �ʴ� ��.
	*/

	return 0;
}

/* ���
	count = 0 11533592
	count = 0 11533592
	count = 0 11533380
	static count = 0 15507772
	static count = 1 15507772
	static count = 2 15507772
*/