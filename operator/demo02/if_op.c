#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 조건 연산자
int main_if_op()
{
	int x;

	printf("정수 입력 : ");
	scanf("%d", &x);

	// 삼항 연산자
	(x % 2 == 0) ? printf("%d는 짝수\n", x) : printf("%d는 홀수\n", x);

	// [문제] 두 수를 입력받아서 몫과 나머지를 아래와 같이 출력하세요.
	/*
	 두 정수 입력받기 : 53 6
	 큰수 / 작은 수 = 8
	 큰수 % 작은 수 = 5
	*/

	// 내 코드
	int m, n;

	printf("두 정수 입력받기 : ");
	scanf("%d %d", &m, &n);
	
	if (m > n) {
		printf("큰수 / 작은 수 = %d\n", m / n);
		printf("큰수 %% 작은 수 = %d\n", m % n);
	}
	else {
		printf("큰수 / 작은 수 = %d\n", n / m);
		printf("큰수 %% 작은 수 = %d\n", n % m);
	}

	// 교수님 코드
	int a, b, max, min;
	
	printf("두 정수 입력 : ");
	scanf("%d %d", &a, &b);

	(a > b) ? (max = a, min = b) : (max = b, min = a);

	printf("\n 큰수 / 작은수 = %d\n", max / min);
	printf("\n 큰수 % 작은수 = %d\n", max % min);


	return 0;
}