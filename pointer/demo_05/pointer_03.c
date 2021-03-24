#include <stdio.h>

int main_p3() {

    // int *ptr; // 주소값이 초기화X (쓰레기 주소값을 갖는다)
    // int *ptr = 222; // 문법상의 오류는 없지만 런타임 에러를 유발시킨다.

    // printf("%p\n",ptr);
    // 222번지의 16진수 형태
    /*
    222주소에 가서 데이터를 가져오려고 시도한다.
    하지만 222 주소는 실제 이 프로그램이 할당 받은 메모리 공간이 아니기 때문에
    운영체제엣 강제로 종료 시켜버림
    exe(프로세스 24548개)이(가) 종료되었습니다(코드: -1073741819개). => 비정상 종료(런타임 에러)
    */
    // printf("%d\n",*ptr);

    /*
    int *safe_ptr;  // 지금은 쓰레기값

    int aa = 200;
    safe_ptr = &aa; // 안전한 방법

    printf("%p\n",safe_ptr);
    // 정상 종료 : (코드: 0개)
    */

    // 실전에서 추천하는 방법은
    int* safe_ptr = NULL; //NULL을 대입하여 안전하게 사용함.(사용되지 않더라도 안전함)

    int a = 100;

    int b;
    scanf("%d", &b);

    // if(a % 2 == 0) {
    //   safe_ptr = &a;
    // }

    if (b % 2 == 0) {
        safe_ptr = &a;
    }
    if (safe_ptr != NULL) {
        printf("%p\n", safe_ptr);
    }

    return 0;
}