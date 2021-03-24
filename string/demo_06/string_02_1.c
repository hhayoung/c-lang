#include <stdio.h>

int main_s2_1() {

    char str[] = "I am a string";
    const char* str2 = "I am a string2";

    // str 출력
    for (int i = 0; i < 6; i++) {
        putchar(str[i]);
        // 변환명세 쓰지 않아도 됨.
    }
    putchar('\n');

    // str2 출력
    for (int i = 0; i < 8; i++) {
        putchar(str2[i]);
    }
    putchar('\n');

    // *이용해서 str2 출력
    for (int i = 0; i < 8; i++) {
        putchar(*(str2 + i));
    }
    putchar('\n');

    //[문제] while문을 이용해서 str2의 문자열을 전부 출력해보세요.
    while (*(str2) != '\0') {
        putchar(*(str2++));
    }
    putchar('\n');

    str2 = str; // 정상
    printf("str address : %p\n", str);
    printf("str2 address : %p\n", str2);
    // 같은 주소를 가리킨다. str2 가 str을 가리키게 된 것.

    // str = str2; // 에러
    // str은 변수일 뿐 포인터변수가 아니기 때문에.

    char* word = "Goggle";
    // word[2] = 'o'; // Run-time 에러, read only 메모리에 저장되기 때문에..

    // const char *word = "Goggle"; 로 정의했다면
    // 실행해보기 전에 빨간 밑줄이 나왔을 것.
    // -> 그러니까 const 를 적어주는게 좋다.

    puts(word);

    const char* str3 = "What's the matter?";
    const char* copy;

    copy = str3; // 정상

    printf("%s %p %p\n", str3, str3, &str3);
    printf("%s %p %p\n", copy, copy, &copy);
    // str3와 copy의 주소는 같은 곳을 가리키고 있음.
    // 자체 포인터변수의 주소는 다름.

    return 0;
}