#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main_ch1() {

    // C���� StringŸ��(���ڿ� Ÿ��)�� ����.
    // char �� 1���� �迭�� �̿��ؼ� ���ڿ� ó���Ѵ�.
    // ���ڿ� ǥ�� : " "
    // ���� ǥ�� : ' '

    // char city[10] = "Seoul";
    // printf("City : %s\n",city);

    // �迭�� �ּҿ�����(&)�� ���� �ʾƵ� �ȴ�.
    // �迭�� = �ּ�
    // scanf("%s", city, sizeof(city));
    // sizeof(city) : �迭�� ũ�⸸ŭ ���� �� �ֵ��� ����
    // scanf�� ����Ű, ��Ű, ����Ű�� ���� ���鹮�ڸ� �Է��ϸ� ���� ������ ���ڵ鸸 �迭�� ����ȴ�.

    // printf("City : %s\n",city);

    /* ���ڿ� ���� �Է� �Լ� gets */
    // char name[12]; // �ι��ڸ� ������ 11���� ���ڸ� ������ �� ����

    // ����Ű�� �Է��� �������� ��� ���ڸ� �迭�� ������ �� �ִ�.
    // ���ڿ��� �Է¹޴� �Լ��̹Ƿ� �տ� %s ���˹��ڸ� ������ �ʿ䰡 ����.
    // gets(name);
    // printf("User Name : %s\n",name);

    /* ���ڿ� ���� ��� �Լ� puts */
    // char name[20] = "Hong gil dong";
    // puts(name); // �ڵ� �ٹٲ� ó��

    /* ���ڿ��� ���� �ǹ��ϴ� null ���� */
    char book[5] = { 'C','/','C','+','+' };

    // ���� ������ ���
    for (int i = 0; i < 5; i++) {
        printf("%c", book[i]);
    }

    printf("\n ���ڿ� ������ ����ϱ�\n");
    printf("%s\n", book);
    //visual studio������ ������ ���.

    return 0;
}