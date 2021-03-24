#include <stdio.h>
#include <string.h>

void selection_sort2(char* arr[], int n);
void swap4(char** xp, char** yp); // 문자열을 받아야하니까 이중포인터
void print_str_array(char* arr[], int size);

int main_sort4_str() {

	int a = 100;
	int* p = &a;

	printf("&a 값은 : %p \n", &a);
	printf("*&a 값은 : %d \n", *&a);
	// *와 &연산자는 서로 상쇄가 되버리므로 없는 것과 같다. 
	printf("*&a 값은 : %d \n", *&*&*&*&*&*&*&*&*&a);
	printf("a의 값은 : %d \n", a);


	char* arr[] = { "Apple", "Orange", "Banana", "Strawberry", "Pineapple" };

	int n = sizeof(arr) / sizeof(arr[0]);


	printf("%p %p %p\n", arr[0], &arr[0], *&arr[0]);
	/*
		arr[0] 과 *&arr[0] 은 "Apple"의 주소값,
		&arr[0]은 arr[0]의 주소
	*/

	printf("%c\n", *arr[0]);  // 'A'

	// 함수들 호출
	// 정렬전
	print_str_array(arr, n);

	selection_sort2(arr, n);

	// 정렬후
	print_str_array(arr, n);



	return 0;
}

// 선택정렬을 하기 위해서 필요한 알고리즘 함수 만들기
void selection_sort2(char* arr[], int n) {
	int i, j, min_idx;

	for (i = 0; i < n - 1; i++) {
		min_idx = i;
		for (j = i + 1; j < n; j++) {
			// 문자열이기 때문에 strcmp함수 활용
			// strcmp 이용해서 코드를 완성하시오.
			if (strcmp(arr[j], arr[min_idx]) < 0) {
				min_idx = j;
			}
		}
		swap4(&arr[min_idx], &arr[i]);
	}
}

void swap4(char** xp, char** yp) {
	char* temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void print_str_array(char* arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		puts(arr[i]);
	}
	printf("\n");
}