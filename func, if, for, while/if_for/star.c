#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_test() {

	/*
	
	[문제1] 아래와 같이 '*'을 출력하세요.
	*
	**
	***
	****
	*****

	[문제2] 행, 열에 출력될 별의 갯수를(행수, 열수)를
	입력받아 아래와 같이 출력하세요.
	힌트 > 사용자 입력값: n.
		   첫번째 line: n개 별출력
		   마지막 line: n개 별출력
		   나머지 line: 별2개, 공백(n-2개)

	*****
	*   *
	*   *
	*   *
	*****
	
	*/


	// 문제 1
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 문제 2
	int n;
	printf("사용자 입력값: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i == 1 || i == n) {
			for (int j = 1; j <= n; j++) {
				printf("*");
			}
			if (i == n) {
				break;
			}
		}
		else {
			printf("*");
			for (int j = 1; j <= n - 2; j++) {
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	/*
	[문제3] 10명의 학생의 점수를 입력받아
			70점 이상의 학생은 '합격'
			70점 미만의 학생은 '불합격'
			처리하여 다음과 같이 출력하세요.

			1번 학생 점수? 80
			2번 학생 점수? 77
			3번 학생 점수? 50
			~~
			==================
			평균 : 78.xx
			합격자 : 6명
			불합격자 : 4명
	*/

	int student[10];
	int sum = 0;
	double avg;
	int pass = 0, fail = 0;

	for (int i = 0; i < 10; i++) {
		printf("%d번 학생 점수? ",i+1);
		scanf("%d", &student[i]);
	}
	printf("======================\n");
	// 평균 구하기
	for (int i = 0; i < 10; i++) {
		sum += student[i];
	}
	avg = (double)sum / 10;
	for (int i = 0; i < 10; i++) {
		if (student[i] >= 70) {
			pass++;
		}
		else {
			fail++;
		}
	}
	printf("평균 : %.2lf\n", avg);
	printf("합격자 : %d명\n", pass);
	printf("불합격자 : %d명\n", fail);

	return 0;
}


/*
[문제]

	 *
	**
   ***
  ****
 *****
******

[문제]

	 *
    ***
   *****
  *******
 *********
***********
	
[문제]

***********
 *********
  *******
   *****
	***
	 *

[문제]

	 *
	***
   *****
  *******
 *********
***********
 *********
  *******
   *****
    ***
	 *
	
*/