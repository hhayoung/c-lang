#include <stdio.h>

// 매개변수도 리턴값도 없는 함수
void print_title();
void print_information(void);

int main_func4() {

	print_title();
	print_information();

	return 0;
}

void print_title() {
	printf("--------------------\n");
	printf("---- C Language ----\n");
	printf("--------------------\n");
}

void print_information() {
	printf("\n\n");
	printf("%21s \n", "연희학교");
	printf("%20s \n", "김말똥");
}