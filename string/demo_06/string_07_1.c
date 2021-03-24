/* strncmp 함수 동작 원리 */
#include <stdio.h>

int mystrncmp(char const* str1, char const* str2, int n);

int main_s7_1() {

    char name1[20] = "Hello";
    char name2[20] = "Hello World";

    if (mystrncmp(name1, name2, 5) > 0) {
        printf("%s은 %s보다 크다. \n", name1, name2);
    }
    else {
        if (mystrncmp(name1, name2, 5) < 0) {
            printf("%s은 %s보다 작다.\n", name1, name2);
        }
        else {
            printf("%s은 %s와 같다.\n", name1, name2);
        }
    }
    return 0;
}

int mystrncmp(char const* str1, char const* str2, int n) {
    // [문제] 해당블럭을 알맞은 코드로 채우세요..
    int index = 0;

    for (; str1[index] && (str1[index] == str2[index]) && (index < (n - 1)); index++) {

    }
    // index < n 으로 하면 index++이 되면서 하나 올라가기 때문에 n-1까지만

    printf("index : %d\n", index);
    return str1[index] - str2[index];
}