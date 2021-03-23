#include <stdio.h>

/* 문제 */
int main_ch_test() {

	char schoolName[10];
	char stuNo[9];
	char stuName[10];

	// 학생 정보 입력받기
	printf("학교명은? ");
	scanf("%s", schoolName);
	printf("학번은? ");
	scanf("%s", stuNo);
	getchar(); // 엔터값을 받아줘야한다.
	printf("이름은? ");
	gets(stuName);

	printf("=======================\n");
	printf("%s ", schoolName);
	printf("%c%c학번 ", stuNo[2], stuNo[3]);
	printf("%s\n", stuName);
	printf("=======================\n");

	return 0;
}