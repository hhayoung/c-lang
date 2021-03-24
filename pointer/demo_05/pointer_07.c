#include <stdio.h>

int main_p7() {

    /* 포인터 연산 */
    int* ptr = 0;

    printf("%p %lld\n", ptr, (long long)ptr);
    // 00000000 0 <- visual studio 출력값

    // ptr++; // ptr = ptr+1, ptr += 1;
    ptr += 2;
    printf("%p %lld\n", ptr, (long long)ptr);
    // 00000004 4
    // int형이기 때문에 4바이트가 더해짐
    // ptr += 2 를 한 결과는
    // 00000008 8

    int arr[10];
    int* ptr1 = &arr[3];
    int* ptr2 = &arr[4];

    // printf("%d %d %d\n",arr,ptr1, ptr2);
    // 배열명은 첫번째 메모리 주소와 같다.
    // arr = &arr[0]

    /*
        │ arr[0] │ arr[1] │ arr[2] │ arr[3] │ arr[4] │...
     &arr[0]  &arr[1]  &arr[2]  &arr[3]  &arr[4] ..
       arr     arr+1    arr+2    arr+3    arr+4 ...
    */

    /* 덧셈 */
    // ptr2 = ptr1 + ptr2; // 이렇게는 연산 X. 에러발생

    /* 뺄셈 */
    int i = ptr2 - ptr1;

    printf("%lld %lld %d\n", (long long)ptr1, (long long)ptr2, i);
    // printf("%lld\n",((long long)ptr2-(long long)ptr1)+1);

    return 0;
}