#include <stdio.h>

int main_ch2() {

    // char starName[4][10] = {"�����", "����ȣ", "������", "������" };
    char starName[4][10] = { "Seoul", "Incheon", "Daegu", "Busan" };
    char userName[4][10];

    // char�� 2���� �迭������ �� ���� ����� ���� ���ڿ��̹Ƿ� 
    // �迭��� ��÷��(�ε���)�� ����ϸ� ���ڿ��� ��µȴ�.
    for (int i = 0; i < 4; i++) {
        printf("%s\n", starName[i]);
    }
    printf("\n\n");
    /* userName �迭�� ����� �̸��� �Է� �޾Ƽ� ����غ��� */
    for (int i = 0; i < 4; i++) {
        // gets(userName[i]);
        scanf("%s", userName[i]);
    }
    printf("\n\n");

    for (int i = 0; i < 4; i++) {
        puts(userName[i]);
    }


    return 0;
}