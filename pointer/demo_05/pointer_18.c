#include <stdio.h>

int main_p18() {

    /*
      배열 포인터 : 배열을 저장하는 포인터
    */
    int(*ptr)[3]; // 3개의 원소를 갖는 배열을 저장하는 포인터

    int arr[2][3] = { {1,2,3},{4,5,6} };

    ptr = arr;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }

    // 숫자로 확인해보려고 long타입으로 출력
    // int형 3개의 원소를 갖는 포인터이기 때문에
    // +1을 하면 12바이트씩 늘어난다.
    printf("%ld %ld %ld \n",
        (long)ptr, (long)(ptr + 1), (long)(ptr + 2));
    //12바이트씩 차이


    int arr2[2][5] = { {1,2,3,4,5},{6,7,8,9,0} };

    // ptr = arr2; // warning발생. ptr은 원소 3개짜리 배열만 저장하기 때문에
    int(*ptr2)[5];

    ptr2 = arr2;
    printf("%ld %ld %ld \n",
        (long)ptr2, (long)(ptr2 + 1), (long)(ptr2 + 2));
    //20바이트씩 차이


    //////////////////////////////////////////
    /*
      포인터 배열 : 포인터를 저장하는 배열
    */
    // ptr_a는 2개의 포인터(주소)를 저장하는 배열
    int* ptr_a[2] = { arr[0], arr[1] };

    // 배열 요소의 각 주소
    printf("%ld %ld %ld\n", (long)ptr_a, (long)(ptr_a + 1), (long)(ptr_a + 2));
    // printf("%lld %lld %lld\n", (long long)ptr_a, (long long)(ptr_a+1), (long long)(ptr_a+2));
    // 주소체계 x86 -> 4바이트씩 차이
    // x64 -> 8바이트씩 차이

    // 포인터 배열의 요소값(arr[0], arr[1]의 값이니까 주소)
    // printf("%d %d %d\n", ptr_a[0], ptr_a[1], ptr_a[2]);
    // printf("%d %d %d\n", *ptr_a, *(ptr_a+1), *(ptr_a+2));
    // 2개 요소만 있기 때문에 맨 마지막꺼는 쓰레기값


    // 포인터 배열 요소가 갖고 있는 값(arr[0],arr[1]의 요소값)
    printf("%d %d\n", *ptr_a[0], *ptr_a[1]); // 1 4
    // printf("%d\n", *ptr_a[2]); 
    // 값이 없어서 런타임 오류 발생
    // ~~~가 종료되었습니다(코드: -1293814개)
    // 코드 -라고 뜨는건 다 런타임 오류 
    // 정상 종료는 코드: 0개라고 뜬다.


    // 포인터 배열 요소가 갖고 있는 값 모두 출력
    for (int i = 0; i < 2; i++) {
        printf("%d %d %d\n", *ptr_a[i], *(ptr_a[i] + 1), *(ptr_a[i] + 2));
    }

    return 0;
}