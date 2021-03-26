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
        {{"���", "ȫ"}, "010-1234-1234"},
        {{"����", "��"}, "010-1234-1231"}

    };
    // friend��� ����ü�� ����Ű�� ������ ���� 
    struct friend* girl_friend;
    girl_friend = &my_friends[0];

    printf("%zd\n", sizeof(struct friend));

    printf("%lld %s\n", (long long)girl_friend, (*girl_friend).full_name.given);

    girl_friend++;
    // -> : ȭ��ǥ ������
    //    : ���� ��� ���� ������(indirect member) 
    //    : structure pointer access
    printf("%lld %s\n", (long long)girl_friend, girl_friend->full_name.given);

    return 0;
}
