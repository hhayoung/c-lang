#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
  ����Լ�(recursive function)
  : �Լ� �ȿ��� �Լ� �ڽ��� ȣ���ϴ� �Լ�(���ȣ�� : recursive call)

  ����Լ��� ����� ���
  : �������� ��� ȣ���� ���� �ʰ� �Լ��� ������ ������ �� �ִ�
    ����(stopping) ������ �����ؾ� �Ѵ�.
*/

void reverse(int n);

// n���� 1���� �Ųٷ� ����ϱ�
int main_func6() {

    int n;
    printf("n~1���� �Ųٷ� ��� \n");
    scanf("%d", &n);

    reverse(n);

    return 0;
}

void reverse(int n) {
    printf("%3d", n);
    if (n > 1) reverse(n - 1);

    return;
}