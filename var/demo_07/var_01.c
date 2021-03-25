/*
ㅁㅁ 변수와 참조영역
  프로그램에서 선언한 변수는 프로그램 어디서나 사용할 수 있는 것이 아니라
  변수의 참조영역(scope) 안에서만 사용(참조)할 수 있다.

  변수의 참조영역 : 프로그램에서 변수를 참조(사용)할 수 있는 영역

  변수는 참조영역에 따라 지역(local)변수와 전역(global)변수로 나뉜다.

  ㅁ 지역 변수(local variable)
   : 함수안/블록안에서 선언된 변수로 변수가 선언된 함수/블록 안에서만 참조할 수 있다.
   블록은 { }로 묶은 코드로 함수의 본체뿐만 아니라 for문의 본체나 do~while문의 본체도 블록

   : 지역변수의 참조영역 - 그 변수가 선언된 함수/블록

  ㅁ 전역 변수(global variable)
   : 함수 밖에서 선언한 변수로, 전역 변수의 선언문 이후에는 어떤 함수 안에서도 참조할 수 있다.

   : 전역변수의 참조영역 - 자신이 선언된 곳부터 프로그램 끝까지

*/
#include <stdio.h>
#define N 5

// int find_max(int arr[N]);
// int find_max(int [], int n);
int find_max(int* arr, int n);

int main_v1() {

    // 메인함수의 지역변수들
    int maximum, score[N] = { 10,8,6,9,8 };

    // maximum, score의 참조영역
    maximum = find_max(score, 5);

    printf("최대값 : %d\n", maximum);


    return 0;
}

// int find_max(int arr[N])
// int find_max(int arr[], int n)
int find_max(int* arr, int n) {
    int i, max; // find_max 함수의 지역 변수들

    max = arr[0];

    for (i = 0; i < N; i++) {
        if (max < arr[i]) { // i, max, arr의 참조 영역
            max = arr[i];
        }
    }
}