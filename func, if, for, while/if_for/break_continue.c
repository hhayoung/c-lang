#include <stdio.h>

int main_break_continue() {

    int n;

    // break�� : n�� 0�̸��̸� ���ѹݺ�
    while (1) {
        printf("������ ������ ������? \n");
        scanf("%d", &n);

        if (n >= 0) {
            break;
        }
        printf("�ٽ� �Է��ϼ���..\n");
    }

    // continue ��
    int sum = 0;
    printf("���� n �Է� : ");
    scanf("%d", &n);

    int i = 0;
    while (i <= n) {
        i++;

        if (i % 2 == 1) {
            continue;
        }
        sum += i;
    }
    printf("���� 1���� %d ���� ¦������ ���� %d\n", n, sum);

    return 0;
}