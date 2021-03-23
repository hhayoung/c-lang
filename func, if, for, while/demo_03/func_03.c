#include <stdio.h>

/*
void 예약어(키워드):
특정한 자리에 명시할 내용이 없음을 나타내는 데
사용하는 키워드

함수가 리턴값이 없다면?
리턴하는 자리에 void를 표시

함수에 매개변수가 없다면?
매개변수 자리에 void또는 생략
*/

void print_line(int n);

int main_func3() {

    printf("컴퓨터 공학과\n");
    print_line(3);

    return 0;
}

void print_line(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("----------------------\n");
    }
    // void라서 return이 없음.
    return;
    // 이게 생략되어 있는 상태
}