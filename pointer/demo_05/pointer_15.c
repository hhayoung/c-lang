#include <stdio.h>

int main_p15() {

    // int arr[2][3] = {{1,2,3},{4,5,6}};

    // // ������ �迭�� �ƴ� �����͸� �ٷ� ����ϰ�����.
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

    // ���� �ڵ�� ����. ���� ������ �迭 �����ϰ� ���� �ʱ�ȭ
    int* parr[2];
    parr[0] = arr[0];
    parr[1] = arr[1];
    // �迭ó�� ����� �� ����.

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d %d %d %d\n", arr[i][j], parr[i][j], *(parr[i] + j), *(*(parr + i) + j));
        }
        printf("\n");
    }

    return 0;
}