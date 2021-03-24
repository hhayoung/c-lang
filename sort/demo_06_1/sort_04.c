/* strcmp를 이용한 교환정렬 */
#include <stdio.h>
#include <string.h>

int main_sort4() {

    // 포인터 배열
    char* gold[] = { "장길산", "임꺽정", "이몽룡", "홍길동", "강감찬" };

    char* temp; // 문자열 주소를 임시로 저장하기 위한 포인터
    int size, i, j;

    size = sizeof(gold) / sizeof(gold[0]);

    printf("** 금메달 리스트 : ");
    for (i = 0; i < size; i++) {
        printf("%s, ", gold[i]);
    }
    // 2칸 뒤로가기(2칸 지우기)
    printf("\b\b **\n\n");
    // '\b'를 이용해서 마지막 이름뒤에 ,를 지우기


    // [문제] 교환정렬을 이용해서 이름을 가나다 순으로 정렬하기. strcmp 이용

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (strcmp(gold[i], gold[j]) > 0) {
                // 문자열의 시작주소를 저장한 gold[i]와 gold[j]를 교환
                temp = gold[i];
                gold[i] = gold[j];
                gold[j] = temp;
            }
        }
    }

    printf("** 정렬된 리스트 : ");
    for (i = 0; i < size; i++) {
        printf("%s, ", gold[i]);
    }
    printf("\b\b **\n\n");

    return 0;
}