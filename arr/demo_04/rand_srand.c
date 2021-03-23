#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 난수 사용하기

  rand() : 0~32767의 범위 중 무작위로 수를 추출해주는 함수
          stdlib.h 헤더 파일에 포함되어 있음
          (standard library)
          seed 값에 따라서 난수가 설정
          (seed 값이 설정되지 않은 경우 1로 설정)

  srand() : 난수에 사용되는 seed 값을 지정

  time() : 1970년 1월 1일 0시부터 지금까지(인자가 NULL,0)
           흐른 시간을 반환(단위 : 초)

  난수 만들 때: srand, rand, time 함수를 사용
*/

int main_rand() {

    // srand(1); // default가 1이라는 걸 알 수 있다.

    srand(time(NULL));
    // time 헤더파일 필요

    printf("%d \n", rand());
    printf("%d \n", rand());
    printf("%d \n", rand());
    // 실행할 때마다 값이 달라지지 x. 진정한 난수가 x.
    // srand(10); 을 하니까 값이 바꼈다.
    // 값이 달라졌지만 또 실행하면 같다.
    // 같은 seed값이기 때문에
    // 진정한 난수값을 가져오려면 수시로 seed값을 바꿔줘야함
    // 그걸 해결하기 위해 time 함수 이용


    return 0;
}