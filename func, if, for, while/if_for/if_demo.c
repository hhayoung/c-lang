#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_if() {

	//int num = 0;
	//printf("���� : ");
	//scanf("%d", &num);

	//// if ~ else
	//if (num % 2) {
	//	printf("�Է��� �� %d�� Ȧ���Դϴ�.\n",num);
	//}
	//else {
	//	printf("�Է��� �� %d�� ¦���Դϴ�.\n",num);
	//}

	//** if ~ else if ~ else
	int score = -1;
	int level = 0;

	printf("���� : ");
	scanf("%d", &score);

	if ((score < 0) || (score > 100)) {
		printf("�߸� �Է��߾��!!");
		return 0; // ���α׷� �����Ű��
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

	/*** switch ������ ���� ***/

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