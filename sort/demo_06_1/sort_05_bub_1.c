/* ���� ���� */

#include <stdio.h>
#define SIZE 5

int main_sort5_1() {

    int i, repeat, temp, a[SIZE] = { 5,4,3,2,1 };
    double compare = 0;

    for (repeat = 1; repeat < SIZE; repeat++) {
        /* ���� �ڵ� SIZE-1�� SIZE-repeat�� ������ (��� ����)
            => SIZE-1�� �� ���� ���ĵ� �������� �� for���� ����.
            => SIZE-repeat�� ���ĵ� ���� for�� ���� ����.
        */
        for (i = 0; i < SIZE - repeat; i++) {
            compare++;
            if (a[i] > a[i + 1]) {
                temp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("�� �� Ƚ�� : %.1f", compare);
    printf("\n ���� �� �迭 : ");
    for (i = 0; i < SIZE; i++) {
        printf("%4d", a[i]);
    }
    printf("\n\n");

    return 0;
}