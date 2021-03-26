/*
   ��ø ����ü(nested structures)
   : ����ü �ȿ� ����� ����ü�� ���
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
       .guest = {"�浿", "ȫ"},
       .host = {"����","��"},
       .place = {"��õ �Ĵ�"},
       .food = {"������"},
       .year = 1999,
       .month = 10,
       .day = 10,
       .hours = 19,
       .minutes = 30
    };

    /*
       �� ������ ���ڿ��� ���� ��,
       "\
       ���⿡ �����ֱ�(������ �� ���� ���������� \(��������))
       ";
    */
    const char* formatted =
        "\
�ȳ��ϼ��� %s %s ��, \n��ſ��� %s�� �����ϰ� �ͽ��ϴ�. \n\
��ҿ� �Ͻ� : %s %d %d %d at %d:%d.\n\
\n\
%s %s �κ���\
      ";

    printf(formatted, res.guest.family, res.guest.given, res.food, res.place, res.year, res.month, res.day, res.hours, res.minutes, res.host.family, res.host.given);

    return 0;
}