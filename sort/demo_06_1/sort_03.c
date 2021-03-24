/* 선택 정렬 */
#include <stdio.h>

void selection_sort(int arr[], int n);
void print_array(int arr[], int size);
void swap2(int* xp, int* xq);

int main_sort3() {

    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("정렬 전 배열 >> ");
    print_array(arr, n);

    selection_sort(arr, n); // ascending 오름차순

    printf("정렬 후 배열 >> ");
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
선택 정렬(필요할 때만 교환)

        a[0] a[1] a[2] a[3] a[4]
a배열     5    4    2    1    3
          5    4                      (a[0]이랑 a[1]비교) 최소값: a[1]
               4    2                 (a[1]이랑 a[2]비교) 최소값: a[2]
                    2    1            (a[2]이랑 a[3]비교) 최소값: a[3]
                         1    3       (a[3]이랑 a[4]비교) 최소값: a[3]
          1    4    2    5    3   <- 가장 작은값이랑 a[0]이랑 change

          1    4    2                  (a[1]이랑 a[2]비교) 최소값: a[2]
                    2    5             (a[2]이랑 a[3]비교) 최소값: a[2]
                    2         3        (a[2]이랑 a[4]비교) 최소값: a[2]
          1    2    4    5    3   <- 가장 작은값이랑 a[1]이랑 change

          1    2    4    5    3
                    4    5             (a[2]이랑 a[3]비교) 최소값: a[2]
                    4         3        (a[2]이랑 a[4]비교) 최소값: a[4]
          1    2    3    5    4   <- 가장 작은값이랑 a[2]이랑 change

          1    2    3    5    4
                         5    3        (a[3]이랑 a[4]비교) 최소값: a[4]
          1    2    3    4    5   <- 가장 작은값이랑 a[3]이랑 change

          => 정렬 끝

*/