#include <stdio.h>

int main_s2() {

    char str1[6] = "hello";
    char str2[6] = "hello";

    const char* str3 = "google"; // 문자열 변경 불가, 문자열 상수로 초기화함.
    const char* str4 = "google";

    // const를 붙여서 명시적으로 사용하는 것이 혼란을 피할 수 있다. -> const로 해주면 바로 빨간 밑줄을 보여주기 때문
    char* str5 = "google";
    char* str6 = "naver";

    printf("str1 : %p\n", str1);
    printf("str2 : %p\n", str2);
    // -> 가리키는 주소가 다름.(각각 다른 공간이기 때문에)

    printf("str3 : %p\n", str3);
    printf("str4 : %p\n", str4);
    // -> 가리키는 주소가 같음.(포인터이기 때문에)

    printf("str5 : %p\n", str5);
    // -> str3, str4의 값과 같음.

    /*
      메모리 구조를 대충 그려보면
      h   ←- str1
      e
      l
      l
      o
      \0
      h   ←- str2
      e
      l
      l
      o
      \0
      str3
      str4

      g   ←- str3
      o   ↖str4
      o
      g
      l
      e
      \0
    */

    str1[0] = 'H';
    printf("str1 : %s\n", str1);
    // -> 값이 바뀜.

    // *str3 = 'G'; // 에러(const로 정의했기 때문에)

    // *str5 = 'G'; // 런타임 에러

    // str3, str4는 const때문에 안바뀐다 해도
    // str5는 왜 에러가 날까?

    // const변수와 같은 곳을 가리키지 않는 str6는 값이 바뀔까?
    // *str6 = 'N'; // 런타임에러
    // str6[0] = 'N'; // 런타임에러

    // -> 에러이유로 const가 근본적인 이유가 아니다.
    // const가 있으나 없으나 똑같다.

    /******************
    char형 포인터로는 문자열을 수정할 수 없다.
    -> read only 메모리에 저장되기 때문에..
    ******************/

    str3 = "Google Driver";
    // 왜 에러가 안뜨고 정상종료가 되지?
    printf("str3 : %p\n", str3);
    printf("str4 : %p\n", str4);

    // str3은 이제 새로운 공간을 가리키기 때문에
    // 문자열을 수정한 것이 아니라 다른 문자열을 가리키는 것.

    return 0;
}
/*
보통 자주 사용하는 숫자는 1~1000사이인데
그것들을 한 공간에 저장해놓고 주소로 접근
왜냐면,
a=100, b=100, c=100, d=100;
을 했다고 했을 때
100이라는 변수값을 가진 공간을 4개 만드는건
비효율적이기 때문에
a,b,c,d가 100이라는 값을 가진 공간의 주소를
가리키면 공간을 따로 더 안만들어도 된다.

이 코드에서,
google, google driver, naver 이런 것들을
문자열 상수, 문자열 literal 이라고 한다.
*/
