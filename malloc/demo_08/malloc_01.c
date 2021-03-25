/* void Æ÷ÀÎÅÍ */
#include <stdio.h>

int main_m1() {

	int arr[] = { 1,2,3,4,5 };
	char name[10] = "Hello";

	void* ptr = 0;

	ptr = arr;
	printf("ptr : %p, arr : %p \n", ptr, arr);

	ptr = name;
	printf("ptr : %p, name : %p \n", ptr, name);

	return 0;
}