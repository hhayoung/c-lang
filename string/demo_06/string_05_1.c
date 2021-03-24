/* strlen 함수를 만들어보자! */

#include <stdio.h>
// #include <string.h> // 직접 만들거니까 필요 X


int myStrLen(char const* str);

int main_s5_1() {

    char name[10] = "홍길동";

    printf("myStrLen을 이용한 name의 길이 : %d\n", myStrLen(name));

    return 0;
}

int myStrLen(char const* str) {
    int len = 0;

    // str[len]이 거짓이면 루프 빠져나옴.
    // 즉, null값인 경우 거짓이 된다.
    for (; str[len]; len++) {}

    // while문
    while (*(str + len)) {
        len++;
    }
    // 또다른 방법
    for (; *(str + len) != '\0'; len++);
    for (; *(str + len); len++);

    return len;
}



