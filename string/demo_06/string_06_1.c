/* strcmp 함수의 동작원리 */
#include <stdio.h>

int mystrcmp(const char* str1, char const* str2);
int main_s6_1() {

    // char name1[20] = "Hello";
    // char name2[20] = "Hells";

    // 한글도 가능
    char name1[20] = "홍길동";
    char name2[20] = "홍길북";

    if (mystrcmp(name1, name2) > 0) {
        printf("%s은 %s보다 크다. \n", name1, name2);
    }
    else {
        if (mystrcmp(name1, name2) < 0) {
            printf("%s은 %s보다 작다.\n", name1, name2);
        }
        else {
            printf("%s은 %s와 같다.\n", name1, name2);
        }
    }

    return 0;
}

int mystrcmp(const char* str1, char const* str2) {
    int index = 0;

    for (; str1[index] && (str1[index] == str2[index]); index++) {

    }

    return str1[index] - str2[index]; // 아스키코드 - 아스키코드
}

/*
01234
abcd
abcef 가 있다고 했을떄

0일때 str1[0] 일단 있으니 참 && a=a 참
1일때 str1[1] 있으니 참 && b=b 참
2일때 str1[2] 있으니 참 && c=c 참
3일때 str1[3] 있으니 참 && d=e 거짓이니까 for문 끝남

str1[3] - str2[3]
d - e;   d < e
=> 음수

*/