/*
strcat() and strncat() ÇÔ¼ö
: string concatenation
*/
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main_s8() {

	char str1[100] = "First string";
	char str2[] = "Second string";

	strcat(str1, ", ");
	// strcat(str1, str2);

	strncat(str1, str2, 2);

	puts(str1);

	return 0;
}