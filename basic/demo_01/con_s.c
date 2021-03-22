#include <stdio.h>

// 변환영세(변환문자 : conversion specification)
// e.g> %d, %c, %lf, %Lf, %f, %e, %le, %s, ...
// e를 쓰는건 과학적 표기법

int main_cs()
{
	int age = 26;
	double height = 180.8;
	char grade = 'A';

	printf("나이 %d세\n", age);
	printf("키 %.1lfcm의 표준 체중: %.1lfkg\n", height,(height-100)*0.9);
	printf("학점 %c\n", grade);
	printf("거주지: %s\n\n", "인천");
	printf("연봉: %e\n", 1.0e7); //10의 7승

	printf("10진수 %d = 8진수 %o = 16진수 %x\n", age, age, age);

	//변환 명세를 잘 맞춰주지 않으면 값이 나오지 않는다.

	//--------------------------------------------------------------------

	int n1 = 7;
	int n2 = 88;
	int n3 = 100;

	printf("1. %dcm \n", n1);
	printf("2. %dcm \n", n2);
	printf("3. %dcm \n", n3);

	/*
		%d 변환문자에서 필드폭을 지정하는 형식
		필드폭 : 출력에 사용할 전체 칸

		%필드폭d : 사용할 칸을 지정
		%+필드폭d : 부호 출력
		%-필드폭d : 왼쪽 정렬
	*/

	printf("오른쪽 정렬\n");
	printf("1. %3dcm \n", n1);
	printf("2. %3dcm \n", n2);
	printf("3. %3dcm \n", n3);

	int aa = 123;

	printf("\n");
	printf("aa=%d\n", aa);
	printf("aa=%5d\n", aa);
	printf("aa=%+5d\n", aa);
	printf("aa=%-5d\n", aa);
	printf("aa=%-+d\n", aa);

	printf("\n-------------------------------\n");

	double dd = 56.456;

	// 7은 전체자릿수(소수점포함, 소수점아래자리도 포함), .3은 소수점아래 3자리
	printf("dd=%7.3lf\n", dd);

	// 반올림 처리가 되어 소수점 아래 2자리로 표현
	printf("dd=%6.2lf\n", dd);

	// 정수 지정을 안하면 있는 값은 다 나오고, 소수 지정을 안하면 기본값 6자리
	printf("dd=%.2lf\n", dd);
	printf("dd=%10lf\n", dd);

	// 소수점을 찍고 자릿수 지정을 안하면 소수점 다 자르기
	printf("dd=%5.lf\n", dd);

	return 0;
}