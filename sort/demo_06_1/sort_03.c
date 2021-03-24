/* ���� ���� */
#include <stdio.h>

void selection_sort(int arr[], int n);
void print_array(int arr[], int size);
void swap2(int* xp, int* xq);

int main_sort3() {

    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("���� �� �迭 >> ");
    print_array(arr, n);

    selection_sort(arr, n); // ascending ��������

    printf("���� �� �迭 >> ");
    print_array(arr, n);

    return 0;
}

void selection_sort(int arr[], int n) {
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[min_idx] > arr[j]) {
                min_idx = j;
            }
        }
        // swap
        swap2(&arr[min_idx], &arr[i]);
        // swap(arr+min_idx, arr+i);
    }
}

void print_array(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap2(int* xp, int* xq) {
    int temp;
    temp = *xp;
    *xp = *xq;
    *xq = temp;
}

/*
���� ����(�ʿ��� ���� ��ȯ)

        a[0] a[1] a[2] a[3] a[4]
a�迭     5    4    2    1    3
          5    4                      (a[0]�̶� a[1]��) �ּҰ�: a[1]
               4    2                 (a[1]�̶� a[2]��) �ּҰ�: a[2]
                    2    1            (a[2]�̶� a[3]��) �ּҰ�: a[3]
                         1    3       (a[3]�̶� a[4]��) �ּҰ�: a[3]
          1    4    2    5    3   <- ���� �������̶� a[0]�̶� change

          1    4    2                  (a[1]�̶� a[2]��) �ּҰ�: a[2]
                    2    5             (a[2]�̶� a[3]��) �ּҰ�: a[2]
                    2         3        (a[2]�̶� a[4]��) �ּҰ�: a[2]
          1    2    4    5    3   <- ���� �������̶� a[1]�̶� change

          1    2    4    5    3
                    4    5             (a[2]�̶� a[3]��) �ּҰ�: a[2]
                    4         3        (a[2]�̶� a[4]��) �ּҰ�: a[4]
          1    2    3    5    4   <- ���� �������̶� a[2]�̶� change

          1    2    3    5    4
                         5    3        (a[3]�̶� a[4]��) �ּҰ�: a[4]
          1    2    3    4    5   <- ���� �������̶� a[3]�̶� change

          => ���� ��

*/