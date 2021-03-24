#include <stdio.h>

int main_p15() {

    // int arr[2][3] = {{1,2,3},{4,5,6}};

    // // 포인터 배열이 아닌 포인터를 바로 사용하고있음.
    // int *parr0 = arr[0];
    // int *parr1 = arr[1];

    // for(int i=0;i<3;i++) {
    //   printf("%d ",parr0[i]);
    // }
    // printf("\n");
    // for(int i=0;i<3;i++) {
    //   printf("%d ",parr1[i]);
    // }
    // printf("\n");

    int arr[2][3] = { {1,2,3},{4,5,6} };

    // int *parr[2] = { arr[0], arr[1] };

    // 위의 코드와 동일. 먼저 포인터 배열 선언하고 값을 초기화
    int* parr[2];
    parr[0] = arr[0];
    parr[1] = arr[1];
    // 배열처럼 사용할 수 있음.

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d %d %d %d\n", arr[i][j], parr[i][j], *(parr[i] + j), *(*(parr + i) + j));
        }
        printf("\n");
    }

    return 0;
}