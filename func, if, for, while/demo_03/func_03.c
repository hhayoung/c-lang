#include <stdio.h>

/*
void �����(Ű����):
Ư���� �ڸ��� ����� ������ ������ ��Ÿ���� ��
����ϴ� Ű����

�Լ��� ���ϰ��� ���ٸ�?
�����ϴ� �ڸ��� void�� ǥ��

�Լ��� �Ű������� ���ٸ�?
�Ű����� �ڸ��� void�Ǵ� ����
*/

void print_line(int n);

int main_func3() {

    printf("��ǻ�� ���а�\n");
    print_line(3);

    return 0;
}

void print_line(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("----------------------\n");
    }
    // void�� return�� ����.
    return;
    // �̰� �����Ǿ� �ִ� ����
}