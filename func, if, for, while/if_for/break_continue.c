#include <stdio.h>

int main_break_continue() {

    int n;

    // break문 : n이 0미만이면 무한반복
    while (1) {
        printf("선택할 물건의 개수는? \n");
        scanf("%d", &n);

        if (n >= 0) {
            break;
        }
        printf("다시 입력하세요..\n");
    }

    // continue 문
    int sum = 0;
    printf("정수 n 입력 : ");
    scanf("%d", &n);

    int i = 0;
    while (i <= n) {
        i++;

        if (i % 2 == 1) {
            continue;
        }
        sum += i;
    }
    printf("정수 1에서 %d 이하 짝수들의 합은 %d\n", n, sum);

    return 0;
}