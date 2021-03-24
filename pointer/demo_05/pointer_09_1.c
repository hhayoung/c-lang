#include <stdio.h>

/*
�Ʒ��� �Լ� ������Ÿ���� ��� ���� �ǹ��̴�.

double average_new(double *arr, int n);
double average_new(double *, int n);
// -> *�� ����Ǿ� ������, �迭�̶�� ���� �� �� �ִ�.
double average_new(double arr[], int n);
double average_new(double [], int n);
*/

// ���� �����ȿ� ���� �Լ� �̸��� �����߻� �� �� �����Ƿ� �̸� ����
double average_new(double*, int n);

int main_p9_1() {

    double arr1[5] = { 10, 11, 12, 7, 8 };
    // double arr2[5] = {1.8, -0.2, 6.3, 13.9, 20.5};
    double arr2[3] = { 1.8, -0.2, 6.3 };

    printf("�ּ� = %p\n", arr1);
    printf("Size = %zd\n", sizeof(arr1)); // 8����Ʈ * 5��

    printf("�ּ� = %p\n", arr2);
    printf("Size = %zd\n", sizeof(arr2)); // 8����Ʈ * 5��

  /* �ߺ��� ������ 2�� �ݺ� -> ���� ������ �ڵ�
    double avg = 0.0;
    for(int i=0;i<5;i++) {
      avg += arr1[i];
    }
    avg /= (double)5;
    printf("arr1�� Avg = %f\n",avg);

    double avg2 = 0.0;
    for(int i=0;i<5;i++) {
      avg2 += arr2[i];
    }
    avg2 /= (double)5;
    printf("arr2�� Avg = %f\n",avg2);
  */

  /* �ϵ��ڵ�
  printf("Avg = %f\n",average_new(arr1, 5));
  printf("Avg = %f\n",average_new(arr2, 3));
  */

  /* ����Ʈ�ڵ� ��� */
    printf("arr1 Avg = %f\n", average_new(arr1, sizeof(arr1) / sizeof(arr1[0])));
    printf("arr2 Avg = %f\n", average_new(arr2, sizeof(arr2) / sizeof(arr2[0])));

    return 0;
}

double average_new(double arr[], int n) {
    printf("average �Լ� �� Size = %zd\n", sizeof(arr));

    double avg = 0.0;
    for (int i = 0; i < n; i++) {
        avg += arr[i];
    }
    avg /= (double)n;

    return avg;
}