#include <stdio.h>

// 함수 선언
int find_large(int a, int b);

int main_func2() {

    int n1, n2, max;

    printf("첫번째 정수 : ");
    scanf("%d", &n1);
    printf("두번째 정수 : ");
    scanf("%d", &n2);

    // 함수 호출
    max = find_large(n1, n2);

    printf("%d, %d 중 큰 값은 %d\n", n1, n2, max);

    return 0;
}

// 함수 정의문
int find_large(int a, int b) {
    int large;

    if (a > b)
        large = a;
    else
        large = b;

    return large;
}
