/***
ㅁ 동적(dynamic)과 정적(static)의 의미

  동적 : 무언가 실제로 필요할 때마다 처리하는 것
  정적 : 필요한 것을 미리 처리해두고, 처음부터 끝까지 고정적으로 유지하는 것

  지역(자동)변수는 기억장소의 동적 할당과 관련이 있으며,
  전역변수는 정적 할당과 관련 있다.

ㅁ 지역변수는 참조영역을 벗어나면 그 값을 유지할 수 없다.
   즉, 함수를 벗어나면 그 값을 유지하지 못함.
   유지하려면 여러가지 방법이 있을 수 있으나, 정적변수를 사용하면 유지할 수 있음.

ㅁ 정적변수(static 변수 : static을 앞에 붙여준다.)
  : 프로그램이 실행될 때부터 기억장소를 정적으로 할당받아서 실행이 끝날 때까지 유지되는 변수

  형식 > static 자료형 정적변수명 = 초기값;
        -> 초기값이 없는 경우 자동으로 0으로 초기화

    : 정적 변수는 정적 지역변수와 정적 전역변수로 나뉜다.
    : 대부분 정적 지역변수를 사용

***/

#include <stdio.h>

void Foo();

int main_v2() {

    Foo();
    Foo();

    return 0;
}

void Foo() {

    static int static_var = 0;

    int local_var = 0;

    local_var++;
    static_var++;

    printf("static_var : %d, local_var : %d\n", static_var, local_var);

    // 첫번째 호출
    // static_var : 1, local_var : 1
    // 두번째 호출
    // static_var : 2, local_var : 1
    // -> local_var은 함수가 끝나면서 값이 사라졌다.
}