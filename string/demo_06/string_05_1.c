/* strlen �Լ��� ������! */

#include <stdio.h>
// #include <string.h> // ���� ����Ŵϱ� �ʿ� X


int myStrLen(char const* str);

int main_s5_1() {

    char name[10] = "ȫ�浿";

    printf("myStrLen�� �̿��� name�� ���� : %d\n", myStrLen(name));

    return 0;
}

int myStrLen(char const* str) {
    int len = 0;

    // str[len]�� �����̸� ���� ��������.
    // ��, null���� ��� ������ �ȴ�.
    for (; str[len]; len++) {}

    // while��
    while (*(str + len)) {
        len++;
    }
    // �Ǵٸ� ���
    for (; *(str + len) != '\0'; len++);
    for (; *(str + len); len++);

    return len;
}



