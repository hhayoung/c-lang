/* ��ȯ ���� */
#include <stdio.h>
#define SIZE 10

void copy_list(int*, int*);
void swap(int* p, int* q); // �� ������ ���� ��ȯ�ϴ� �Լ�
void exchange_sort(int* a); // ��ȯ����
void print(int* a);

int main_sort2() {

    int copy[SIZE];
    int list[SIZE] = { 10, 5, 4, 2, 3, 8, 7, 9, 6, 1 }; //�迭 �ʱ�ȭ

    printf(">> ���� �迭 : ");
    print(list);

    copy_list(list, copy);

    printf(">> ��ȯ ���� �迭 : ");
    exchange_sort(copy);
    print(copy);

    return 0;
}

void copy_list(int* a, int* b) { // �迭 ����
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
��ȯ ����
        a[0] a[1] a[2] a[3] a[4]
a�迭     5    4    2    1    3
          4    5                  (a[0]�� a[1] ��) a[1]�� ������ �ڸ� change
          2         4             (a[0]�� a[2] ��) a[2]�� ������ �ڸ� change
          1              2        (a[0]�� a[3] ��) a[3]�� ������ �ڸ� change
          1                   3   (a[0]�� a[4] ��) a[4]�� ������ �ڸ� change

          1    5    4    2    3   -> 4�� ���� ���� ���

               4    5             (a[1]�� a[2] ��) a[2]�� ������ �ڸ� change
               2         4        (a[1]�� a[3] ��) a[3]�� ������ �ڸ� change
               2              3   (a[1]�� a[4] ��) a[4]�� ������ �ڸ� change

          1    2    5    4    3   -> 3�� ���� ���� ���

                    4    5        (a[2]�� a[3] ��) a[3]�� ������ �ڸ� change
                    3         4   (a[2]�� a[4] ��) a[4]�� ������ �ڸ� change

          1    2    3    5    4   -> 2�� ���� ���� ���

                         4    5   (a[3]�� a[4] ��) a[4]�� ������ �ڸ� change

          1    2    3    4    5   -> 1�� ���� ���� ���

          => ���� ��

*/