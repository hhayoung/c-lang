/* 버블 정렬 */

#include <stdio.h>
#define SIZE 5

int main_sort5_1() {

    int i, repeat, temp, a[SIZE] = { 5,4,3,2,1 };
    double compare = 0;

    for (repeat = 1; repeat < SIZE; repeat++) {
        /* 앞의 코드 SIZE-1과 SIZE-repeat의 차이점 (결과 동일)
            => SIZE-1은 맨 뒤의 정렬된 곳까지도 다 for문이 돈다.
            => SIZE-repeat은 정렬된 곳은 for문 돌지 않음.
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
    printf("총 비교 횟수 : %.1f", compare);
    printf("\n 정렬 후 배열 : ");
    for (i = 0; i < SIZE; i++) {
        printf("%4d", a[i]);
    }
    printf("\n\n");

    return 0;
}