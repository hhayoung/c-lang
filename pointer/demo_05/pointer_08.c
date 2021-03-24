#include <stdio.h>

int main_p8() {

    int arr[10]; // 배열명 arr은 arr[10] 메모리의 첫 주소이다. 
    // 내부적으로 포인터와 비슷하다.(포인터와 같은 것은 X)

    printf("%zd\n", sizeof(arr)); // 40
    printf("%zd\n", sizeof(arr[0]));

    // printf("%p\n",arr+1);
    // printf("%p\n",&arr[1]);

    int num = sizeof(arr) / sizeof(arr[0]); // 배열 원소의 개수를 구함.

    // 배열 초기화
    // 10을 계속 써주는 건 hard coding
    for (int i = 0; i < 10; i++) {
        arr[i] = (i + 1) * 10;
    }
    for (int i = 0; i < num; i++) {
        printf("%d\n", arr[i]);
    }

    int* ptr = arr; // 배열의 메모리주소로 초기화

    printf("%p %p %p\n", ptr, arr, &arr[0]);
    // printf("%d %d %d\n",ptr, arr, &arr[0]);

    ptr += 2;

    // 주의! 
    // arr += 2; // arr은 포인터처럼 연산이 불가능하다.
    // 즉, 포인터와는 다르다.
    // arr은 arr[10]의 주소이기에 연산을 해버리면 arr[10]의 주소가 변경되어 버림(그러면 안되니까 연산X)

    printf("%p %p %p\n", ptr, arr + 2, &arr[2]);
    // printf("%d %d %d\n",ptr, arr+2, &arr[2]);

    printf("%d %d %d\n", *(ptr + 2), *(arr + 4), arr[4]);
    // printf("%d %d %d\n",*(ptr+1), *(arr+3), arr[3]);

    return 0;
}

/*
> 값
arr[0] = *arr = *ptr
arr[1] = *(arr+1) = *(ptr+1)
arr[2] = *(arr+2) = *(ptr+2)
arr[3] = *(arr+3) = *(ptr+3)
...

> 주소
&arr[0] = arr = ptr
&arr[1] = arr+1 = ptr+1
&arr[2] = arr+2 = ptr+2
&arr[3] = arr+3 = ptr+3
...

*/