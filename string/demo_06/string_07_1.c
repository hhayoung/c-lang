/* strncmp �Լ� ���� ���� */
#include <stdio.h>

int mystrncmp(char const* str1, char const* str2, int n);

int main_s7_1() {

    char name1[20] = "Hello";
    char name2[20] = "Hello World";

    if (mystrncmp(name1, name2, 5) > 0) {
        printf("%s�� %s���� ũ��. \n", name1, name2);
    }
    else {
        if (mystrncmp(name1, name2, 5) < 0) {
            printf("%s�� %s���� �۴�.\n", name1, name2);
        }
        else {
            printf("%s�� %s�� ����.\n", name1, name2);
        }
    }
    return 0;
}

int mystrncmp(char const* str1, char const* str2, int n) {
    // [����] �ش���� �˸��� �ڵ�� ä�켼��..
    int index = 0;

    for (; str1[index] && (str1[index] == str2[index]) && (index < (n - 1)); index++) {

    }
    // index < n ���� �ϸ� index++�� �Ǹ鼭 �ϳ� �ö󰡱� ������ n-1������

    printf("index : %d\n", index);
    return str1[index] - str2[index];
}