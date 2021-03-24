#include <stdio.h>

/* const ��� �� */

// �迭 ����(���)�� ����ϴ� �Լ�
void print_array(const int arr[], const int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//�迭�� ��� ��ҿ� ���� �����ִ� �Լ�
/*
���� Ÿ���� void���� ��� ���� �ٲ��.
��, �޸𸮿��� ���� ó����.
��ȯ���� �ִ� �Ͱ� ���� ����� �ϰ� ��.
*/
// ���� �ٲٷ��� �Լ��̱� ������ ���⼭�� �迭�� const ��� �Ұ�
void add_value(int arr[], const int n, int val) {
    int i;
    for (i = 0; i < n; i++) {
        arr[i] += val;
    }
}

// ���ҵ��� ��� ���� ���ϴ� �Լ�
/*
const�� �̿��ؼ� �ǵ��Ѵ�� ������ �� �ֵ��� �����Ϸ��� ����
������ Ȯ���� �� �ִ�.
*/
int sum(const int arr[], const int n) {
    int i;
    int total = 0;
    for (i = 0; i < n; i++) {
        // total += arr[i]++; // �������� �Ǽ��� �����ϰ� ++�� �߰�
        total += arr[i]; // ������ �߱� ������ �ٷ� ��ĥ �� �ִ�.
        // �����δ� ���� �ٲ�� �ȵȴٰ� �� �� const Ȱ��
    }
    return total;
}

int main_p12() {

    int arr[] = { 1,2,3,4,5 };
    // ������ ũ�� �������� ������ ������ ũ�⸸ŭ �ڵ� ����

    const int n = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, n);
    add_value(arr, n, 10);
    print_array(arr, n);

    int tot = sum(arr, n);
    printf("arr �հ� : %d\n", tot);
    print_array(arr, n);

    return 0;
}