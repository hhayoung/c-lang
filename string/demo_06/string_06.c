/* strcmp �Լ� */
#include <stdio.h>
#include <string.h>

int main_s6() {

    int i = 1000000, j = 1000000;

    char name1[20] = "hello";
    char name2[20] = "hello";

    if (i == j) {
        printf("����. \n");
    }
    else {
        printf("�ٸ���. \n");
    }
    // ������ �ּҵ� �ٸ����� 
    // 1000000�̶�� ���� ã�Ƽ� ���Ѵ�.

    if (name1 == name2) {
        printf("����. \n");
    }
    else {
        printf("�ٸ���. \n");
    }
    // name1�� name2�� �迭�̴ϱ� ������.
    // �׷��� �ּҰ� �ٸ��� ������ �ٸ��ٰ� ���´�.

    // ������ �̿�(�Ǿձ��� �� 'h' == 'h')
    if (*name1 == *name2) {
        printf("����. \n");
    }
    else {
        printf("�ٸ���. \n");
    }

    // strcmp() �Լ�
    if (strcmp(name1, name2) == 0) {
        printf("����. \n");
    }
    else {
        printf("�ٸ���. \n");
    }

    printf("-------------------------------\n");


    // ���ڿ��� �񱳴� ascii���� ������ ���Ѵ�.
    // --------- ������ �� ---------
    // strcmp�� ���ڿ� �տ������� �񱳸� �ϴٰ�
    // ���� �ٸ� ���ڰ� ������ �� ������ ũ�⸦ ���Ͽ�
    // ù��° ���ڸ� �������� ũ�� 1, ������ -1�� ����

    char name11[20] = "abcdefg";
    char name22[20] = "abcdez"; // name11���� ũ��
    // char name22[20] = "abcdea"; // name11���� �۴�

    if (strcmp(name11, name22) > 0) {
        printf("%s�� %s���� ũ��.\n", name11, name22);
    }
    else {
        if (strcmp(name11, name22) < 0) {
            printf("%s�� %s���� �۴�.\n", name11, name22);
        }
        else {
            printf("%s�� %s�� ����.\n", name11, name22);
        }
    }

    return 0;
}