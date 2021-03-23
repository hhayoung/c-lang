#include <stdio.h>

// 배열(Array) : 동일한 타입의 많은 자료를 다룰 때 사용
// 변수 : 한 개의 자료만 저장 


int main_arr1() {

    // int arr[4];
    // int arr[4] = {10, 5, 11, 20};
    // int형은 4byte
    // 총 4개니까 16byte 메모리공간 차지
    // double arr2[2] = {11.1, 22.2};
    // double 8byte
    // 메모리 시작주소가 1000번지라고 가정하면,
    // 11.1은 1000번지, 22.2는 1008번지~1015번지

    // int arr[10]; // arr: 배열명(메모리의 시작주소)
    // // int형의 10개의 값을 저장할 수 있는 배열 선언

    // int arr01[4] = {1, 2}; // 배열 초기화 {} 이용
    // // 4: 배열의 크기
    // int arr02[4];

    // int index = 0;

    // for(index=0; index<4; index++) {
    //   printf("arr01[%d] : %d\n",index, arr01[index]);
    // }
    // for(index=0; index<4; index++) {
    //   printf("arr02[%d] : %d\n",index, arr02[index]);
    //   // 배열 초기화를 해주지 않아서 쓰레기값 출력
    // }

    int i, month, sum = 0;

    // 메모리 공간 갯수 13개 만들어서 데이터를 넣겠다.
    int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    // 13이라는 값을 쓰지 않으면 초기화한 갯수만큼 크기의 배열이 만들어 진다.

    printf("1월부터 몇월까지의 총 일수를 구할까요? ");
    scanf("%d", &month);

    for (i = 1; i <= month; i++) {
        sum += days[i];
    }

    printf("1월부터 %d월까지는 총 %d일입니다.\n", month, sum);


    return 0;
}
