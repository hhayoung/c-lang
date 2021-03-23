#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ȣ��� �Լ����� �� �ٸ� �Լ��� ȣ���ϴ� ���

/*
������ ��� : 366��

������ ���� :
- ������ 400�� ����̸� ������ ����
- ������ 4�� ��������� 100�� ����� �ƴ� ��� ����
*/

// �Ű����� ���ϰ� ��� ����.(������)
int days(int yy);
int leap_year(int y);

int main_func5() {

    int year;

    printf("�������� Ȯ���ϰ� ���� ������ ? ");
    scanf("%d", &year);

    printf("%d���� %d�ϱ��� �ֽ��ϴ�.\n", year, days(year));

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

// ������ ���� Ȯ�� �Լ�
int leap_year(int y) {
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
        return 1;
    }
    else {
        return 0;
    }
}