#include <stdio.h>

/* �����͸� �̿��� �迭 ���� */

double average2(double*, double*);
// double type�� �迭�� �޴´�.


int main_p10() {

    double arr1[5] = { 10, 13, 12, 7, 8 };

    printf("Avg = %f\n", average2(arr1, arr1 + 5));
    // arr1 = �迭�� = �迭�� ù��° ����� �ּ� = &arr1[0]
    // arr1+5 : arr1�� �ּҴ� arr1+4������ �ֱ� ������
    //          end�� arr1+5�� �ִ´ٴ� ���� ��ü�� ���� ���ؼ�

    return 0;
}
// ������ �迭 ������ ������ �Ѱ���µ�,
// �̷��� ������ 2���� �̿��ؼ� �Ȱ��� ����� ���� �� �ִ�.
double average2(double* start, double* end) {

    // int cnt = 0; // �� ������� �ʾƵ� �ȴ�.
    int cnt = end - start;  // �ּ� - �ּ� ���� 

    double avg = 0.0;

    while (start < end) {
        avg += *start++;
        // cnt++;
    }
    avg /= (double)cnt;

    return avg;
}