#include <stdio.h>

// 함수 형식 :
// 리턴타입 함수명(매개변수)
int Add(int a, int b) {
    return a + b;
}
int Sub(int a, int b); // 함수 선언문(원형, 시그니처)

int main_func1() {

    // 함수 선언문 : 함수 원형 또는 시그니처라고 함.        
    //              함수가 어떤 형태인지 컴파일러에게 알려줌.
    // 함수 정의문 : 함수가 수행할 코드를 정의하는 구문
    // 함수 호출문 : 함수를 호출하여 수행하게 하는 구문


    /* 주의 사항
      함수 호출문은 함수 정의문 보다 뒤에 와야 함.
      선언문이 앞에 오는 경우에는 문제 없음.
    */
    int res = 0;
    int i = 3, j = 4;

    res = Add(i, j); // 함수 호출문
    printf("%d\n", res);

    res = Sub(2, 3); // 함수 호출문
    printf("%d\n", res);

    return 0;
}

// 함수 정의문
int Sub(int a, int b) {
    return a - b;
}