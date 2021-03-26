/*
   중첩 구조체(nested structures)
   : 구조체 안에 멤버가 구조체인 경우
*/

#include <stdio.h>
#define LEN 20

struct names {
    char given[LEN];
    char family[LEN];
};

struct reservation {
    struct names guest;
    struct names host;
    char food[LEN];
    char place[LEN];

    int year;
    int month;
    int day;
    int hours;
    int minutes;
};

int main_06() {

    struct reservation res = {
       .guest = {"길동", "홍"},
       .host = {"말똥","김"},
       .place = {"인천 식당"},
       .food = {"갈비탕"},
       .year = 1999,
       .month = 10,
       .day = 10,
       .hours = 19,
       .minutes = 30
    };

    /*
       긴 내용을 문자열로 만들 때,
       "\
       여기에 적어주기(여러줄 쓸 때는 마지막에는 \(역슬래쉬))
       ";
    */
    const char* formatted =
        "\
안녕하세요 %s %s 님, \n당신에게 %s을 대접하고 싶습니다. \n\
장소와 일시 : %s %d %d %d at %d:%d.\n\
\n\
%s %s 로부터\
      ";

    printf(formatted, res.guest.family, res.guest.given, res.food, res.place, res.year, res.month, res.day, res.hours, res.minutes, res.host.family, res.host.given);

    return 0;
}