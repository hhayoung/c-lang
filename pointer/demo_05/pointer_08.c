#include <stdio.h>

int main_p8() {

    int arr[10]; // �迭�� arr�� arr[10] �޸��� ù �ּ��̴�. 
    // ���������� �����Ϳ� ����ϴ�.(�����Ϳ� ���� ���� X)

    printf("%zd\n", sizeof(arr)); // 40
    printf("%zd\n", sizeof(arr[0]));

    // printf("%p\n",arr+1);
    // printf("%p\n",&arr[1]);

    int num = sizeof(arr) / sizeof(arr[0]); // �迭 ������ ������ ����.

    // �迭 �ʱ�ȭ
    // 10�� ��� ���ִ� �� hard coding
    for (int i = 0; i < 10; i++) {
        arr[i] = (i + 1) * 10;
    }
    for (int i = 0; i < num; i++) {
        printf("%d\n", arr[i]);
    }

    int* ptr = arr; // �迭�� �޸��ּҷ� �ʱ�ȭ

    printf("%p %p %p\n", ptr, arr, &arr[0]);
    // printf("%d %d %d\n",ptr, arr, &arr[0]);

    ptr += 2;

    // ����! 
    // arr += 2; // arr�� ������ó�� ������ �Ұ����ϴ�.
    // ��, �����Ϳʹ� �ٸ���.
    // arr�� arr[10]�� �ּ��̱⿡ ������ �ع����� arr[10]�� �ּҰ� ����Ǿ� ����(�׷��� �ȵǴϱ� ����X)

    printf("%p %p %p\n", ptr, arr + 2, &arr[2]);
    // printf("%d %d %d\n",ptr, arr+2, &arr[2]);

    printf("%d %d %d\n", *(ptr + 2), *(arr + 4), arr[4]);
    // printf("%d %d %d\n",*(ptr+1), *(arr+3), arr[3]);

    return 0;
}

/*
> ��
arr[0] = *arr = *ptr
arr[1] = *(arr+1) = *(ptr+1)
arr[2] = *(arr+2) = *(ptr+2)
arr[3] = *(arr+3) = *(ptr+3)
...

> �ּ�
&arr[0] = arr = ptr
&arr[1] = arr+1 = ptr+1
&arr[2] = arr+2 = ptr+2
&arr[3] = arr+3 = ptr+3
...

*/