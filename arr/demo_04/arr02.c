#include <stdio.h>
#define PERSONS 30 // 설문 응답한 사람 수
// 30이라는 값을 PERSONS 라고 칭하겠다.
// 상수를 고정하는 것. 주로 대문자
// 나중에 숫자만 변경되면 이 부분만 고쳐주면 된다.
#define ALLSTARS 6 // 올스타 후보5명(0은 쓸모없어서 빼려고)

int main_arr2() {

    int survey[PERSONS] = { 1,3,2,5,3,2,1,2,3,4,
                          5,2,3,3,2,1,2,4,1,5,
                          3,5,2,1,2,5,3,2,3,4 };
    int vote[ALLSTARS] = { 0 }; // 0이 나머지 공간에 모두 할당됨.

    for (int i = 0; i < PERSONS; i++) {
        vote[survey[i]]++;
    }
    printf("올스타 득표수 \n");
    printf("=============\n");
    for (int i = 1; i < ALLSTARS; i++) {
        printf("  %d번   %d표\n", i, vote[i]);
    }

    return 0;
}