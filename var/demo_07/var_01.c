/*
���� ������ ��������
  ���α׷����� ������ ������ ���α׷� ��𼭳� ����� �� �ִ� ���� �ƴ϶�
  ������ ��������(scope) �ȿ����� ���(����)�� �� �ִ�.

  ������ �������� : ���α׷����� ������ ����(���)�� �� �ִ� ����

  ������ ���������� ���� ����(local)������ ����(global)������ ������.

  �� ���� ����(local variable)
   : �Լ���/��Ͼȿ��� ����� ������ ������ ����� �Լ�/��� �ȿ����� ������ �� �ִ�.
   ����� { }�� ���� �ڵ�� �Լ��� ��ü�Ӹ� �ƴ϶� for���� ��ü�� do~while���� ��ü�� ���

   : ���������� �������� - �� ������ ����� �Լ�/���

  �� ���� ����(global variable)
   : �Լ� �ۿ��� ������ ������, ���� ������ ���� ���Ŀ��� � �Լ� �ȿ����� ������ �� �ִ�.

   : ���������� �������� - �ڽ��� ����� ������ ���α׷� ������

*/
#include <stdio.h>
#define N 5

// int find_max(int arr[N]);
// int find_max(int [], int n);
int find_max(int* arr, int n);

int main_v1() {

    // �����Լ��� ����������
    int maximum, score[N] = { 10,8,6,9,8 };

    // maximum, score�� ��������
    maximum = find_max(score, 5);

    printf("�ִ밪 : %d\n", maximum);


    return 0;
}

// int find_max(int arr[N])
// int find_max(int arr[], int n)
int find_max(int* arr, int n) {
    int i, max; // find_max �Լ��� ���� ������

    max = arr[0];

    for (i = 0; i < N; i++) {
        if (max < arr[i]) { // i, max, arr�� ���� ����
            max = arr[i];
        }
    }
}