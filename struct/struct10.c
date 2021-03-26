#include <stdio.h>

/* ����ü(Union) */

int main10() {
	union my_union {
		int i;
		double d;
		char c;
	};

	union my_union uni;

	printf("%zd\n", sizeof(union my_union)); // �� 8����Ʈ? ���� ����� ū ���� ũ��� �Ҵ�
	printf("%lld\n", (long long)&uni);
	// ��� ��ΰ� �����ּҰ� �����ϴ�. �޸𸮸� �����ϱ� ������
	printf("%lld %lld %lld\n", (long long)&uni.i, (long long)&uni.d, (long long)&uni.c);

	union my_union save[10];

	printf("%zd\n", sizeof(save)); // 8����Ʈ * 10�� = 80����Ʈ

	union my_union uni1;
	uni1.c = 'A';
	printf("%c %x %d\n", uni1.c, (int)uni1.c, uni1.i); //uni1.i ���� �����Ⱚ?

	uni1.i = 0;
	uni1.c = 'A';
	printf("%c %x %d\n", uni1.c, (int)uni1.c, uni1.i); // uni1.i �����Ⱚ �ƴϰ� �´°�

	// ����ϴ� ��Ŀ� ���� ���� �ٲ�µ�,
	// ����ü�� ���� ���� ����� �ϳ��� �޸𸮸� ����ϴ� ���ϱ�
	// ù��°�� ����ߴ� ����� ���� ���� ������ ����ϴ� ������ �ٲ��.
	
	// ����ϴ� ����� �ϴ��� skip �� �˾ƺ��� ��

	union my_union uni2 = uni1; // ����üó�� ���� ����

	// ����ü�� ����� �������� ��ó�� ����ϴ� ��.
	// ������ ù��° ���� �ϳ��� ��ó���� ���� �Է��� �� �ִ�.
	union my_union uni3 = { 10 };
	union my_union uni4 = { .c = 'A' };
	// ������� �ʴ� ���
	union my_union uni5 = { .d = 1.23, .i = 100 }; // .�� ������ ������ ��� ����
	// �� ������ �� 100�� ��. union�� �� �Ѱ��ۿ� �� ��.


	printf("%d %f %c\n", uni5.i, uni5.d, uni5.c);
	// 100 0.000000 d

	uni1.i = 123;
	uni1.d = 1.2;
	uni1.c = 'k';

	printf("%d %f %c\n", uni1.i, uni1.d, uni1.c);

	return 0;
}
/*
	
	�޸� �ϳ��� ������ ���� ���� Ÿ���� �̰����� �ٲ㼭 ��� ����.
	���� �޸𸮸� �����ϸ鼭 ���� 1������ ����� �� �ִ�.
	�ѹ��� 2���� �����ص� �� ������ 1���� ��.

	����ü�� ����� �������� ��ó�� ����ϴ� ��.
	�����δ� �ϳ����ۿ� ��� ����.
	
*/