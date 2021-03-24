#include <stdio.h>
#include <string.h>

void selection_sort2(char* arr[], int n);
void swap4(char** xp, char** yp); // ���ڿ��� �޾ƾ��ϴϱ� ����������
void print_str_array(char* arr[], int size);

int main_sort4_str() {

	int a = 100;
	int* p = &a;

	printf("&a ���� : %p \n", &a);
	printf("*&a ���� : %d \n", *&a);
	// *�� &�����ڴ� ���� ��Ⱑ �ǹ����Ƿ� ���� �Ͱ� ����. 
	printf("*&a ���� : %d \n", *&*&*&*&*&*&*&*&*&a);
	printf("a�� ���� : %d \n", a);


	char* arr[] = { "Apple", "Orange", "Banana", "Strawberry", "Pineapple" };

	int n = sizeof(arr) / sizeof(arr[0]);


	printf("%p %p %p\n", arr[0], &arr[0], *&arr[0]);
	/*
		arr[0] �� *&arr[0] �� "Apple"�� �ּҰ�,
		&arr[0]�� arr[0]�� �ּ�
	*/

	printf("%c\n", *arr[0]);  // 'A'

	// �Լ��� ȣ��
	// ������
	print_str_array(arr, n);

	selection_sort2(arr, n);

	// ������
	print_str_array(arr, n);



	return 0;
}

// ���������� �ϱ� ���ؼ� �ʿ��� �˰��� �Լ� �����
void selection_sort2(char* arr[], int n) {
	int i, j, min_idx;

	for (i = 0; i < n - 1; i++) {
		min_idx = i;
		for (j = i + 1; j < n; j++) {
			// ���ڿ��̱� ������ strcmp�Լ� Ȱ��
			// strcmp �̿��ؼ� �ڵ带 �ϼ��Ͻÿ�.
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