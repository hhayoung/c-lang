#include <stdio.h>

int main_put()
{
	// putchar('문자') : 문자 출력

	char ch = 'A';

	putchar(ch);
	putchar('+');
	putchar('\n');

	// puts("문자열") : 문자열 출력 후 줄바꿈
	puts("Hello World!!");
	puts("Hello World!!");
	puts("Hello World!!");
	puts("");

	int no, kor, eng, math;
	double avg;

	no = 202011;
	kor = 88;
	eng = 100;
	math = 99;

	avg = (kor + eng + math) / 3.0;

	/*
	학번 : 202011
	--------------
	국어 :  88점
	영어 : 100점
	수학 :  99점
	--------------
	평균 : xx.xx
	*/

	printf("학번 :%d\n", no);
	puts("-------------");
	printf("국어 : %3d점\n", kor);
	printf("영어 : %3d점\n", eng);
	printf("수학 : %3d점\n", math);
	puts("-------------");
	printf("평균 : %.2lf", avg);

	return 0;
}