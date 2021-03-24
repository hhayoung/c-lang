/* 문자열 함수들 */

#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)


int main_s4() {

    char name[10] = "";
    strcpy(name, "홍길동");
    // strcpy_s(name, sizeof(name), "홍길동");
    // _s가 붙으면 바이트사이즈를 2번째 인자로 넣어줘야함
    /*
     반복문 돌려서 name[0], name[1]에 하나하나씩
     넣어줄 필요가 없다.
     strcpy-> scanf처럼 strcpy_s로 쓰던지 위에 선언해주어야 한다.
    */
    printf("이름 : %s\n", name);
    printf("길이 : %d\n", strlen(name));

    // 문자열 비교함수 strcmp
    if (strcmp(name, "홍길동") == 0) {
        printf("name값은 홍길동");
    }
    else {
        printf("name값은 홍길동이 아니다.");
    }

    return 0;
}

/*
strcpy(s1,s2): s2의 문자열이 s1으로 복사
strlen(s1) : s1의 문자열의 길이
strcmp(s1,s2): 두 문자열의 아스키코드값의 위치를 비교
  사전상 위치가 s1이 s2보다 빠르면 음수,
               s1과 s2가 같으면 0,
               s1이 s2보다 뒤에 오면 양수
*/