/* strcmp �Լ��� ���ۿ��� */
#include <stdio.h>

int mystrcmp(const char* str1, char const* str2);
int main_s6_1() {

    // char name1[20] = "Hello";
    // char name2[20] = "Hells";

    // �ѱ۵� ����
    char name1[20] = "ȫ�浿";
    char name2[20] = "ȫ���";

    if (mystrcmp(name1, name2) > 0) {
        printf("%s�� %s���� ũ��. \n", name1, name2);
    }
    else {
        if (mystrcmp(name1, name2) < 0) {
            printf("%s�� %s���� �۴�.\n", name1, name2);
        }
        else {
            printf("%s�� %s�� ����.\n", name1, name2);
        }
    }

    return 0;
}

int mystrcmp(const char* str1, char const* str2) {
    int index = 0;

    for (; str1[index] && (str1[index] == str2[index]); index++) {

    }

    return str1[index] - str2[index]; // �ƽ�Ű�ڵ� - �ƽ�Ű�ڵ�
}

/*
01234
abcd
abcef �� �ִٰ� ������

0�϶� str1[0] �ϴ� ������ �� && a=a ��
1�϶� str1[1] ������ �� && b=b ��
2�϶� str1[2] ������ �� && c=c ��
3�϶� str1[3] ������ �� && d=e �����̴ϱ� for�� ����

str1[3] - str2[3]
d - e;   d < e
=> ����

*/