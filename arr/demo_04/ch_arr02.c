#include <stdio.h>

int main_ch2() {

    // char starName[4][10] = {"손흥민", "박찬호", "류현진", "박지성" };
    char starName[4][10] = { "Seoul", "Incheon", "Daegu", "Busan" };
    char userName[4][10];

    // char형 2차원 배열에서는 각 행의 저장된 것이 문자열이므로 
    // 배열명과 행첨자(인덱스)만 명시하면 문자열이 출력된다.
    for (int i = 0; i < 4; i++) {
        printf("%s\n", starName[i]);
    }
    printf("\n\n");
    /* userName 배열에 사용자 이름을 입력 받아서 출력해보기 */
    for (int i = 0; i < 4; i++) {
        // gets(userName[i]);
        scanf("%s", userName[i]);
    }
    printf("\n\n");

    for (int i = 0; i < 4; i++) {
        puts(userName[i]);
    }


    return 0;
}