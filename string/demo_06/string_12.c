#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

#define N 10

int main_s12() {

    char name[N][9] = { "홍길동", "손흥민", "박지성", "류현진", "김연아", "일지매", "임꺽정", "손흥민", "홍길동", "장길산" };

    char tel[N][14] = { "010-1234-1111", "010-1234-2222", "010-1234-3333", "010-1234-4444", "010-1234-5555", "010-1234-6666", "010-1234-7777", "010-1234-8888", "010-1234-9999", "010-1234-0000" };

    double grade[N] = { 4.2, 4.0, 3.2, 4.3, 3.5,
                        2.8, 4.0, 3.8, 3.2, 2.7 };


    /* strcmp 를 이용해서 문제 풀기 */

    char who[9]; // 사용자가 찾고자 하는 학생의 이름을 저장하는 배열
    int cnt = 0; // who에 있는 이름과 같은 학생수를 counting하기 위한 변수

    printf("찾고자 하는 학생 이름은 ? ");
    scanf("%s", who);

    printf("===========================\n");
    printf("  이름\t전화번호\t평점\n");
    printf("===========================\n");

    for (int i = 0; i < N; i++) {
        if (strcmp(who, name[i]) == 0) {
            cnt++;
            printf("  %s\t%s\%.1f\n", name[i], tel[i], grade[i]);
        }
    }
    printf("총 %d명의 학생을 찾았습니다.\n", cnt);


    // 교수님 코드
    // for(int i=0; i<N; i++) {
    //   if(strcmp(who, name[i]) == 0) {
    //     cnt++;
    //     printf("  %-8s\t%-14s\t%5.1lf \n", name[i], tel[i], grade[i]);
    //   }
    // }
    // if(cnt == 0) {
    //   printf("   %s 학생은 존재하지 않습니다.. \n", who);
    // } else {
    //   printf("   총 %d명의 학생을 찾았습니다. \n", cnt);
    // }

    return 0;
}

