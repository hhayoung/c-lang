#include <stdio.h>

/* char형 배열과 char형 포인터를 이용한 문자열 처리 */

int main_s1() {

    // 배열의 크기(10)에 해당하는 공간을 만들고 문자들이 그 안에 저장됨.
    // 그리고 바로 뒤에 널문자 저장
    char str1[10] = "String";
    // "String"이라는 값을 배열에 복사한 것.

    printf("str1 : %s\n", str1);

    // 또다른 출력방법
    for (int i = 0; i < 6; i++) {
        printf("%c", str1[i]);
    }
    printf("\n");

    // 2차원 배열로 표현하면
    // char str1[1][10] = {"String"};
    // printf("str1 : %s\n",str1[0]);

    // 첫번째 문자 'S'를 출력해보세요.
    // printf("str1 첫문자 : %c\n", str1[0][0]);


    //char str1[10] = "String";
    printf("str1 첫문자 : %c\n", *str1);
    printf("str1 첫문자 : %c\n", str1[0]);

    // 두번째 문자 출력, %c
    printf("str1 두번째 문자 : %c\n", str1[1]);
    printf("str1 두번째 문자 : %c\n", *(str1 + 1));

    //////////////////////////////////////////////////////

      // 문자열길이 + 1만큼의 공간이 주어지고 그 공간에 문자들이 저장됨.
      // 바로 뒤에 널문자 저장
    char* str2 = "String";
    // "String"이 들어있는 주소 자체를 가리키는 것.

    // 주소값 출력, %p
    printf("str2 address : %p\n", str2);

    // 문자열 출력, %s
    printf("str2 : %s\n", str2);

    // char *str2 = "String";
    // s t r i n g \0 
    // 아까는 10칸 만들고 넣으면 4칸이 비워져 있었는데
    // 이렇게 하면 딱 맞춰서 7개만 생성됨.

    // 출력할 때는 %s를 이용하게 되면 전부 출력된다.

    // 배열을 이용하는 경우 포인터를 이용하는 경우 
    // 약간의 차이가 있다.

    // 주소를 입력했는데 왜 문자열이 나오지?
    // 이렇게 해야하는 거 아닌가?
    // printf("str2 : %s",*str2); // 런타임 에러

    // %s : 포인터 연산(++)을 통해 null값이 나올 때까지 순회하면서 전체 문자를 출력하도록 함.
    // *str2 -> 첫번째 주소의 값인데 %s를 다 찍으라고 하니까 에러나는 것.
    // *str 은 첫번째 요소의 값 char형

    // str2의 첫번째 문자만 출력해보세요.
    printf("str2 첫문자 : %c\n", *str2);
    printf("str2 첫문자 : %c\n", str2[0]);

    // str2의 두번째 문자만 출력해보세요.
    printf("str2 두번째 문자 : %c\n", *(str2 + 1));
    printf("str2 두번째 문자 : %c\n", str2[1]);

    return 0;
}