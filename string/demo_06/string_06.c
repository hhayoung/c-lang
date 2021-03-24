/* strcmp 함수 */
#include <stdio.h>
#include <string.h>

int main_s6() {

    int i = 1000000, j = 1000000;

    char name1[20] = "hello";
    char name2[20] = "hello";

    if (i == j) {
        printf("같다. \n");
    }
    else {
        printf("다르다. \n");
    }
    // 변수도 주소도 다르지만 
    // 1000000이라는 값을 찾아서 비교한다.

    if (name1 == name2) {
        printf("같다. \n");
    }
    else {
        printf("다르다. \n");
    }
    // name1과 name2는 배열이니까 포인터.
    // 그래서 주소가 다르기 때문에 다르다고 나온다.

    // 포인터 이용(맨앞글자 비교 'h' == 'h')
    if (*name1 == *name2) {
        printf("같다. \n");
    }
    else {
        printf("다르다. \n");
    }

    // strcmp() 함수
    if (strcmp(name1, name2) == 0) {
        printf("같다. \n");
    }
    else {
        printf("다르다. \n");
    }

    printf("-------------------------------\n");


    // 문자열의 비교는 ascii값을 가지고 비교한다.
    // --------- 사전식 비교 ---------
    // strcmp는 문자열 앞에서부터 비교를 하다가
    // 서로 다른 문자가 나오면 두 문자의 크기를 비교하여
    // 첫번째 인자를 기준으로 크면 1, 작으면 -1을 리턴

    char name11[20] = "abcdefg";
    char name22[20] = "abcdez"; // name11보다 크다
    // char name22[20] = "abcdea"; // name11보다 작다

    if (strcmp(name11, name22) > 0) {
        printf("%s은 %s보다 크다.\n", name11, name22);
    }
    else {
        if (strcmp(name11, name22) < 0) {
            printf("%s은 %s보다 작다.\n", name11, name22);
        }
        else {
            printf("%s은 %s와 같다.\n", name11, name22);
        }
    }

    return 0;
}