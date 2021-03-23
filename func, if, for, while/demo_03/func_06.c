#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
  재귀함수(recursive function)
  : 함수 안에서 함수 자신을 호출하는 함수(재귀호출 : recursive call)

  재귀함수를 사용할 경우
  : 언젠가는 재귀 호출을 하지 않고 함수의 실행을 종료할 수 있는
    정지(stopping) 조건을 포함해야 한다.
*/

void reverse(int n);

// n에서 1까지 거꾸로 출력하기
int main_func6() {

    int n;
    printf("n~1까지 거꾸로 출력 \n");
    scanf("%d", &n);

    reverse(n);

    return 0;
}

void reverse(int n) {
    printf("%3d", n);
    if (n > 1) reverse(n - 1);

    return;
}