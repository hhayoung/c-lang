/* 문자열 길이와 strlen 함수 */

#include <stdio.h>
#include <string.h>

#define MAX_NAME 50

int main_s5() {

    char name[MAX_NAME] = "Hello";
    // 크기는 넉넉하게 잡아주는게 좋다.

    printf("%s 길이 : %d \n", name, strlen(name));

    /*
      size_t는 typedef로 unsigned int를 재정의(원래 unsigned int인데 size_t로 재정의)
      size_t __cdecl strlen(
        _In_z_ char const* _Str
      );
    */

    return 0;
}
