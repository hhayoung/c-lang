#include <stdio.h>

int main_p7() {

    /* ������ ���� */
    int* ptr = 0;

    printf("%p %lld\n", ptr, (long long)ptr);
    // 00000000 0 <- visual studio ��°�

    // ptr++; // ptr = ptr+1, ptr += 1;
    ptr += 2;
    printf("%p %lld\n", ptr, (long long)ptr);
    // 00000004 4
    // int���̱� ������ 4����Ʈ�� ������
    // ptr += 2 �� �� �����
    // 00000008 8

    int arr[10];
    int* ptr1 = &arr[3];
    int* ptr2 = &arr[4];

    // printf("%d %d %d\n",arr,ptr1, ptr2);
    // �迭���� ù��° �޸� �ּҿ� ����.
    // arr = &arr[0]

    /*
        �� arr[0] �� arr[1] �� arr[2] �� arr[3] �� arr[4] ��...
     &arr[0]  &arr[1]  &arr[2]  &arr[3]  &arr[4] ..
       arr     arr+1    arr+2    arr+3    arr+4 ...
    */

    /* ���� */
    // ptr2 = ptr1 + ptr2; // �̷��Դ� ���� X. �����߻�

    /* ���� */
    int i = ptr2 - ptr1;

    printf("%lld %lld %d\n", (long long)ptr1, (long long)ptr2, i);
    // printf("%lld\n",((long long)ptr2-(long long)ptr1)+1);

    return 0;
}