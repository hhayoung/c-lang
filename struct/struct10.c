#include <stdio.h>

/* 공용체(Union) */

int main10() {
	union my_union {
		int i;
		double d;
		char c;
	};

	union my_union uni;

	printf("%zd\n", sizeof(union my_union)); // 왜 8바이트? 가장 사이즈가 큰 변수 크기로 할당
	printf("%lld\n", (long long)&uni);
	// 멤버 모두가 시작주소가 동일하다. 메모리를 공유하기 때문에
	printf("%lld %lld %lld\n", (long long)&uni.i, (long long)&uni.d, (long long)&uni.c);

	union my_union save[10];

	printf("%zd\n", sizeof(save)); // 8바이트 * 10개 = 80바이트

	union my_union uni1;
	uni1.c = 'A';
	printf("%c %x %d\n", uni1.c, (int)uni1.c, uni1.i); //uni1.i 에는 쓰레기값?

	uni1.i = 0;
	uni1.c = 'A';
	printf("%c %x %d\n", uni1.c, (int)uni1.c, uni1.i); // uni1.i 쓰레기값 아니고 맞는값

	// 계산하는 방식에 따라서 값이 바뀌는데,
	// 공용체는 여러 개의 멤버가 하나의 메모리를 사용하다 보니까
	// 첫번째가 사용했던 멤버의 값이 다음 변수가 사용하는 값으로 바뀐다.
	
	// 계산하는 방법은 일단은 skip 더 알아봐야 함

	union my_union uni2 = uni1; // 구조체처럼 복사 가능

	// 공용체는 멤버가 여러개인 것처럼 사용하는 것.
	// 문법상 첫번째 원소 하나인 것처럼만 값을 입력할 수 있다.
	union my_union uni3 = { 10 };
	union my_union uni4 = { .c = 'A' };
	// 권장되지 않는 방법
	union my_union uni5 = { .d = 1.23, .i = 100 }; // .을 찍으면 순서와 상관 없음
	// 맨 마지막 값 100만 들어감. union은 값 한개밖에 못 들어감.


	printf("%d %f %c\n", uni5.i, uni5.d, uni5.c);
	// 100 0.000000 d

	uni1.i = 123;
	uni1.d = 1.2;
	uni1.c = 'k';

	printf("%d %f %c\n", uni1.i, uni1.d, uni1.c);

	return 0;
}
/*
	
	메모리 하나를 가지고 여러 개의 타입을 이것저것 바꿔서 사용 가능.
	같은 메모리를 공유하면서 값은 1개씩만 사용할 수 있다.
	한번에 2개씩 선언해도 맨 마지막 1개만 들어감.

	공용체는 멤버가 여러개인 것처럼 사용하는 것.
	실제로는 하나씩밖에 사용 못함.
	
*/