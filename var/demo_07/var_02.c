/***
�� ����(dynamic)�� ����(static)�� �ǹ�

  ���� : ���� ������ �ʿ��� ������ ó���ϴ� ��
  ���� : �ʿ��� ���� �̸� ó���صΰ�, ó������ ������ ���������� �����ϴ� ��

  ����(�ڵ�)������ �������� ���� �Ҵ�� ������ ������,
  ���������� ���� �Ҵ�� ���� �ִ�.

�� ���������� ���������� ����� �� ���� ������ �� ����.
   ��, �Լ��� ����� �� ���� �������� ����.
   �����Ϸ��� �������� ����� ���� �� ������, ���������� ����ϸ� ������ �� ����.

�� ��������(static ���� : static�� �տ� �ٿ��ش�.)
  : ���α׷��� ����� ������ �����Ҹ� �������� �Ҵ�޾Ƽ� ������ ���� ������ �����Ǵ� ����

  ���� > static �ڷ��� ���������� = �ʱⰪ;
        -> �ʱⰪ�� ���� ��� �ڵ����� 0���� �ʱ�ȭ

    : ���� ������ ���� ���������� ���� ���������� ������.
    : ��κ� ���� ���������� ���

***/

#include <stdio.h>

void Foo();

int main_v2() {

    Foo();
    Foo();

    return 0;
}

void Foo() {

    static int static_var = 0;

    int local_var = 0;

    local_var++;
    static_var++;

    printf("static_var : %d, local_var : %d\n", static_var, local_var);

    // ù��° ȣ��
    // static_var : 1, local_var : 1
    // �ι�° ȣ��
    // static_var : 2, local_var : 1
    // -> local_var�� �Լ��� �����鼭 ���� �������.
}