#include <stdio.h>

// �Լ� ����
int find_large(int a, int b);

int main_func2() {

    int n1, n2, max;

    printf("ù��° ���� : ");
    scanf("%d", &n1);
    printf("�ι�° ���� : ");
    scanf("%d", &n2);

    // �Լ� ȣ��
    max = find_large(n1, n2);

    printf("%d, %d �� ū ���� %d\n", n1, n2, max);

    return 0;
}

// �Լ� ���ǹ�
int find_large(int a, int b) {
    int large;

    if (a > b)
        large = a;
    else
        large = b;

    return large;
}
