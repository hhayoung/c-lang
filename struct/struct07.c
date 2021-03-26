#include <stdio.h>
#define LEN 20

struct names {
    char given[LEN];
    char family[LEN];
};

struct friend {
    struct names full_name;
    char mobile[LEN];

};

int main_07()
{
    struct friend my_friends[2] = {
        {{"길순", "홍"}, "010-1234-1234"},
        {{"말자", "김"}, "010-1234-1231"}

    };
    // friend라는 구조체를 가리키는 포인터 변수 
    struct friend* girl_friend;
    girl_friend = &my_friends[0];

    printf("%zd\n", sizeof(struct friend));

    printf("%lld %s\n", (long long)girl_friend, (*girl_friend).full_name.given);

    girl_friend++;
    // -> : 화살표 연산자
    //    : 간접 멤버 접근 연산자(indirect member) 
    //    : structure pointer access
    printf("%lld %s\n", (long long)girl_friend, girl_friend->full_name.given);

    return 0;
}
