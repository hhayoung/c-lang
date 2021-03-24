#include <stdio.h>
#include <string.h> // strcmp, strcpy

#define SIZE 5
#pragma warning(disable : 4996)


int main_sort5_str() {

	char silver[SIZE][10] = { "홍길동", "임꺽정", "강감찬", "장길산", "일지매" };
	char temp[10];
	int pass, i;

	// 정렬전
	printf("은메달 리스트 : ");
	for (i = 0; i < SIZE; i++) {
		printf("%s, ", silver[i]);
	}
	printf("\b\b \n");

	// 버블정렬 strcmp, strcpy를 이용하세요.
	for (pass = 1; pass < SIZE; pass++) {
		// 코드를 완성하세요.
		for (i = 0; i < SIZE - pass; i++) {
			if (strcmp(silver[i], silver[i + 1]) > 0) {
				strcpy(temp, silver[i]);
				strcpy(silver[i], silver[i + 1]);
				strcpy(silver[i + 1], temp);
			}
		}
	}

	//정렬후
	printf("은메달 리스트 : ");
	for (i = 0; i < SIZE; i++) {
		printf("%s, ", silver[i]);
	}
	printf("\b\b \n");

	return 0;
}