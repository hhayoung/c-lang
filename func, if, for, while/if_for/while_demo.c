#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
while(조건) {
	// 반복 수행될 코드
}
*/
int main_while() {

	//int sum = 0;
	//int cnt = 0;
	//cnt = 1;

	//while (cnt <= 10) {
	//	sum += cnt;
	//	cnt++;
	//}
	//printf("1부터 10까지의 합은 %d\n", sum);

	// do while 문
	int sum = 0;
	int num = 0;

	// 사용자로부터 입력받은 값이 음수가 되면 종료
	do {
		sum += num;
		printf("정수를 입력하세요 : ");
		scanf("%d", &num);
	} while (num >= 0);

	printf("합계 : %d\n", sum);

	return 0;
}