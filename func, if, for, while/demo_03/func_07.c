#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// [����]
// ����Լ��� �̿��ؼ�
// 1~n ������ ���� ���غ�����.
// : n�� �Է¹���

int addition(int n);

int main_func7() {

    int n;
    printf("1~n������ �� ���ϱ�, n : ");
    scanf("%d", &n);

    printf("1���� %d������ ���� %d�Դϴ�.", n, addition(n));

    return 0;
}

int addition(int n) {
    int res;

    if (n > 1) {
        res = addition(n - 1) + n;
    }
    else {
        res = 1;
    }
    return res;
}