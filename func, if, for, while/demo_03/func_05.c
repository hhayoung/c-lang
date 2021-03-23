#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//호출된 함수에서 또 다른 함수를 호출하는 경우

/*
윤년인 경우 : 366일

윤년의 조건 :
- 연도가 400의 배수이면 무조건 윤년
- 연도가 4의 배수이지만 100의 배수가 아닌 경우 윤년
*/

// 매개변수 리턴값 모두 있음.(정수형)
int days(int yy);
int leap_year(int y);

int main_func5() {

    int year;

    printf("윤년인지 확인하고 싶은 연도는 ? ");
    scanf("%d", &year);

    printf("%d년은 %d일까지 있습니다.\n", year, days(year));

    return 0;
}

int days(int yy) {
    if (leap_year(yy) == 1) {
        return 366;
    }
    else {
        return 365;
    }
}

// 윤년의 여부 확인 함수
int leap_year(int y) {
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
        return 1;
    }
    else {
        return 0;
    }
}