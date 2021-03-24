/* 포인터를 이용한 두 문자열 교환하기 */
#include <stdio.h>

int main_sort1() {

	char* first = "GilDong", * last = "Hong";
	char* temp;

	printf("Name: %s %s\n", first, last);

	temp = first;
	first = last;
	last = temp;

	printf("Name: %s %s\n", first, last);

	return 0;
}
