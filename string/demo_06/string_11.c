#include <stdio.h>
#include <string.h>
#include <ctype.h> // toupper(), ispunct(), tolower(), ...
#pragma warning(disable:4996)

#define NUM_LIMIT 1024

void toUpper(char*);
int puncCount(const char*);

int main_s11() {

    char line[NUM_LIMIT];
    char* new_line = NULL; //초기화는 null로 해주는게 안전하다.

    fgets(line, NUM_LIMIT, stdin); //'\n'까지 받음.
    new_line = strchr(line, '\n');
    // '\n'이 처음 나타나는 곳의 포인터를 넘겨줌.
    if (new_line) {
        *new_line = '\0';
    }
    // strchr함수를 사용해주면 반복문 사용하지 않아도 된다.


    toUpper(line);
    puts(line);

    printf("특수문자의 개수: %d\n", puncCount(line));

    return 0;
}

// 문자열을 순회하면서 대문자로 변경
void toUpper(char* str) { // char* str은 대부분 문자열을 받는다는 의미(배열보다는 문자열)

    while (*str) {

        /* 안전장치 방법
          // 소문자가 있으면 대문자로 바꿔줌
          if(islower(*str)) {
            *str = toupper(*str);
          }
        */

        *str = toupper(*str);
        // 요즘엔 그냥 바로 씀.
        // 코딩스타일이 많이 변화하고 있다. 
        str++;
    }
}

// 특수문자를 세는 함수
int puncCount(const char* str) {
    int cnt = 0;
    while (*str) {
        if (ispunct(*str)) {
            cnt++;
        }
        str++;
    }

    return cnt;
}