/* strncmp �Լ� */
#include <stdio.h>
#include <string.h>

int main_s7() {

    char name1[20] = "Hello";
    char name2[20] = "Hello World";

    // �츮�� ���ϴ� ��ŭ�� ���ڼ��� ��
    if (strncmp(name1, name2, 5) > 0) {
        printf("%s�� %s���� ũ��. \n", name1, name2);
    }
    else {
        if (strncmp(name1, name2, 5) < 0) {
            printf("%s�� %s���� �۴�.\n", name1, name2);
        }
        else {
            printf("%s�� %s�� ����.\n", name1, name2);
        }
    }

    return 0;
}