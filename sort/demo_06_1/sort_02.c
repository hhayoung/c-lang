/* 교환 정렬 */
#include <stdio.h>
#define SIZE 10

void copy_list(int*, int*);
void swap(int* p, int* q); // 두 원소의 값을 교환하는 함수
void exchange_sort(int* a); // 교환정렬
void print(int* a);

int main_sort2() {

    int copy[SIZE];
    int list[SIZE] = { 10, 5, 4, 2, 3, 8, 7, 9, 6, 1 }; //배열 초기화

    printf(">> 원본 배열 : ");
    print(list);

    copy_list(list, copy);

    printf(">> 교환 정렬 배열 : ");
    exchange_sort(copy);
    print(copy);

    return 0;
}

void copy_list(int* a, int* b) { // 배열 복사
    int i;
    for (i = 0; i < SIZE; i++) {
        *(b + i) = *(a + i); // b[i] = a[i];
    }
}

void swap(int* p, int* q) {
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void exchange_sort(int* a) {
    int i, j;
    for (i = 0; i < SIZE - 1; i++) {
        for (j = i + 1; j < SIZE; j++) {
            if (*(a + i) > * (a + j)) {
                swap(a + i, a + j);
            }
        }
    }
}

void print(int* a) {
    int i;
    for (i = 0; i < SIZE; i++) {
        printf("%d ", *(a + i)); // printf("%d", a[i]);
    }
    printf("\n");
}


/*
교환 정렬
        a[0] a[1] a[2] a[3] a[4]
a배열     5    4    2    1    3
          4    5                  (a[0]과 a[1] 비교) a[1]이 작으면 자리 change
          2         4             (a[0]과 a[2] 비교) a[2]이 작으면 자리 change
          1              2        (a[0]과 a[3] 비교) a[3]이 작으면 자리 change
          1                   3   (a[0]과 a[4] 비교) a[4]이 작으면 자리 change

          1    5    4    2    3   -> 4번 비교한 뒤의 모습

               4    5             (a[1]과 a[2] 비교) a[2]이 작으면 자리 change
               2         4        (a[1]과 a[3] 비교) a[3]이 작으면 자리 change
               2              3   (a[1]과 a[4] 비교) a[4]이 작으면 자리 change

          1    2    5    4    3   -> 3번 비교한 뒤의 모습

                    4    5        (a[2]과 a[3] 비교) a[3]이 작으면 자리 change
                    3         4   (a[2]과 a[4] 비교) a[4]이 작으면 자리 change

          1    2    3    5    4   -> 2번 비교한 뒤의 모습

                         4    5   (a[3]과 a[4] 비교) a[4]이 작으면 자리 change

          1    2    3    4    5   -> 1번 비교한 뒤의 모습

          => 정렬 끝

*/