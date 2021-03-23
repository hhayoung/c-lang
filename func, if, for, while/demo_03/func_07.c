#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// [문제]
// 재귀함수를 이용해서
// 1~n 까지의 합을 구해보세요.
// : n은 입력받음

int addition(int n);

int main_func7() {

    int n;
    printf("1~n까지의 합 구하기, n : ");
    scanf("%d", &n);

    printf("1부터 %d까지의 합은 %d입니다.", n, addition(n));

    return 0;
}

int addition(int n) {
    int res;

    if (n > 1) {
        res = addition(n - 1) + n;
    }
    else {
        res = 1;
    }
    return res;
}