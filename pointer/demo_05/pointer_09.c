#include <stdio.h>

// double average(double arr[5]);
// double average(double *arr);
double average(double arr[], int n);

int main_p9() {

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
    printf("arr1 Avg = %f\n", average(arr1, sizeof(arr1) / sizeof(arr1[0])));
    printf("arr2 Avg = %f\n", average(arr2, sizeof(arr2) / sizeof(arr2[0])));
    // arr2[3]���� �ٲٰ� ������ ������ �� ���
    // 3�� ��ҹۿ� ���µ� �Լ������� �� 5�� ���� ������

    return 0;
}
/*******
�Լ����� �迭�� �Ű������� ���� ���� �迭�� �޴� ���� �ƴ϶�
�����ͷ� �޴´�.
�׷��� �Ű������� arr[5]�� 5�� �ƹ� �ǹ̰� ����.
ȿ���� ������ �����ؼ� �迭�� �����ͷ� �޵��� �Ǿ� �ִ�.
(������ �迭�� �ޱⰡ �����..
? �迭�� ������, ���ﰳ�� �ִٸ� �װ� �� ����? -> ��ȿ����
������ ���� �����ؼ� �ѱ����� �迭�� ���簡 ���� �ʴ´�.(�����ϴٰ� �ð� �� ��-> �����͸� �̿��ؼ� �� �ּ� ��ü�� �޾ƾ� ��))
�Լ��� �ּ���ü�� ������� �� -> arr[5]�� �ƴ϶� *arr��
arr[5] �̷��� ���´ٰ� �ص� ������ arr�� �ּҰ� �Ѿ�� ���̴�.
�׷��� �ڿ� �ִ� ���ڴ� �ƹ� �ǹ̰� ���� ��
*******/

// ���⼭ arr[]�� �迭�� �ƴ϶� �����ͷ� ��ȯ�Ǿ��ٰ� �����ؾ���.
// ��, �迭 ������ ù��° �ּҰ� ���޵� ���̾ ������ ������ ���� ������ �־�� �Ѵ�.
double average(double arr[], int n) {
    printf("average �Լ� �� Size = %zd\n", sizeof(arr));
    // visual studio������ 4 ���. ���� 8 ���
    // �迭 size�� 40�� ������ �ʴ� ����?
    // �迭 ��ü�� �Ѿ�� ���� �ƴ϶� �迭�� �ּҰ��� �Ѿ�� ���̱� ������ 
    // 32��Ʈ�� ��쿡�� �ִ� 4����Ʈ�� ��µǰ�, 64��Ʈ�� ��쿡�� �ִ� 8����Ʈ ���. 
    // (�迭�� ũ�Ⱑ �ƴ϶� �迭�� �ּ��� ũ��)

    double avg = 0.0;
    for (int i = 0; i < n; i++) {
        avg += arr[i];
    }
    avg /= (double)n;

    return avg;
}