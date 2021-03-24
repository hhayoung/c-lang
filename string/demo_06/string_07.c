/* strncmp 함수 */
#include <stdio.h>
#include <string.h>

int main_s7() {

    char name1[20] = "Hello";
    char name2[20] = "Hello World";

    // 우리가 원하는 만큼의 문자수만 비교
    if (strncmp(name1, name2, 5) > 0) {
        printf("%s은 %s보다 크다. \n", name1, name2);
    }
    else {
        if (strncmp(name1, name2, 5) < 0) {
            printf("%s은 %s보다 작다.\n", name1, name2);
        }
        else {
            printf("%s은 %s와 같다.\n", name1, name2);
        }
    }

    return 0;
}