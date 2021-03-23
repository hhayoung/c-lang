#include <stdio.h>

/*
	형변환(casting, type conversion)
	- 자동 형변환 : 컴파일러가 자동으로 함.
	예1>
	int i = 100;
	double j = 1.13;
	printf("%.2lf",i + j); // 100.0 + 1.13

	예2>
	int i;
	i = 3.14;  // 소수점 이하 값은 잘린다. 
	// 3.14를 정수형으로 자동형변환해서 i에 저장한다.
	// 위의 경우에는 경고 메시지가 나온다.
	// 경고 메시지 없게 하려면 -> (int)3.14 로 강제형변환

	- 강제 형변환 : 개발자가 직접 명시함
	- (자료형)피연산자
	예>
	(double)5
	int sum;
	(double)sum;

	예) 파이썬
	a = 10, a = '10'
	자동으로 정수형 10이 들어가고, 문자열 10이 들어가고 자동형변환
	list(tup_)
	튜플 변수를 리스트로 강제형변환

*/
int main_casting()
{
	char ch = 'A';
	int x = 10, y = 4, sum;
	double pi = 3.14, avg;

	sum = ch + 2; // 자동 형변환(데이터손실없음)
	sum = pi; // 자동 형변환(소수점잘림, 데이터손실발생)

	printf("정수 나눔 x / y = %d\n", x / y); // 2
	printf("실수 나눔 x / y = %lf\n", (double)x / (double)y); // 2.500000

	sum = (double)x / (double)y; // 소수점 잘림

	avg = (double)(x / y); // 2.000000
	avg = (double)x / y; // 2.500000 하나만 형변환해줘도 된다.



	return 0;
}