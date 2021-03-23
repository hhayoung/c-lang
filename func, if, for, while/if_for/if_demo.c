#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_if() {

	//int num = 0;
	//printf("점수 : ");
	//scanf("%d", &num);

	//// if ~ else
	//if (num % 2) {
	//	printf("입력한 수 %d는 홀수입니다.\n",num);
	//}
	//else {
	//	printf("입력한 수 %d는 짝수입니다.\n",num);
	//}

	//** if ~ else if ~ else
	int score = -1;
	int level = 0;

	printf("점수 : ");
	scanf("%d", &score);

	if ((score < 0) || (score > 100)) {
		printf("잘못 입력했어요!!");
		return 0; // 프로그램 종료시키기
	}
	level = score / 10;

	//if ((level == 10) || (level == 9)) {
	//	printf("A\n");
	//}
	//else if (level == 8){
	//	printf("B\n");
	//}
	//else if (level == 7) {
	//	printf("C\n");
	//}
	//else if (level == 6) {
	//	printf("D\n");
	//}
	//else {
	//	printf("F\n");
	//}

	/*** switch 문으로 변경 ***/

	switch (level) {
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
		break;
	}

	return 0;
}