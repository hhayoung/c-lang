#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main_ch1() {

    // C언어는 String타입(문자열 타입)이 없다.
    // char 형 1차원 배열을 이용해서 문자열 처리한다.
    // 문자열 표현 : " "
    // 문자 표현 : ' '

    // char city[10] = "Seoul";
    // printf("City : %s\n",city);

    // 배열은 주소연산자(&)를 쓰지 않아도 된다.
    // 배열명 = 주소
    // scanf("%s", city, sizeof(city));
    // sizeof(city) : 배열의 크기만큼 넣을 수 있도록 지정
    // scanf는 공백키, 탭키, 엔터키와 같은 공백문자를 입력하면 이전 까지의 문자들만 배열에 저장된다.

    // printf("City : %s\n",city);

    /* 문자열 전용 입력 함수 gets */
    // char name[12]; // 널문자를 제외한 11개의 문자를 저장할 수 있음

    // 엔터키를 입력할 때까지의 모든 문자를 배열에 저장할 수 있다.
    // 문자열만 입력받는 함수이므로 앞에 %s 포맷문자를 적어줄 필요가 없다.
    // gets(name);
    // printf("User Name : %s\n",name);

    /* 문자열 전용 출력 함수 puts */
    // char name[20] = "Hong gil dong";
    // puts(name); // 자동 줄바꿈 처리

    /* 문자열의 끝을 의미하는 null 문자 */
    char book[5] = { 'C','/','C','+','+' };

    // 문자 단위로 출력
    for (int i = 0; i < 5; i++) {
        printf("%c", book[i]);
    }

    printf("\n 문자열 단위로 출력하기\n");
    printf("%s\n", book);
    //visual studio에서는 깨져서 출력.

    return 0;
}