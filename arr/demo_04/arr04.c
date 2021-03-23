#include <stdio.h>

/*
    이차배열
*/
int main_arr4() {

    int arr[2][3] = { {1,2,3}, {4,5,6} };

    // int arr[2][3] = { 1,2,3,4,5,6 }; // 같은 값 나옴.

    // int arr[2][3] = { 1,2 }; // 나머지 공간은 전부 0으로 채워짐.

    // 배열과 반복문은 뗄 수 없는 사이
    // 배열의 모든 값을 출력할 때는 반복문 필요
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < 3; i++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    // printf("%d\n\n",arr[1][1]);

    return 0;
}