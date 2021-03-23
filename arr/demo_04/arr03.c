#include <stdio.h>
#include <stdlib.h> //rand, srand
#include <time.h> // time

int main_arr3() {

    srand(time(NULL));

    printf("\n\n---------- 황금알을 찾아라 ----------\n\n");

    int answer;
    int goldEgg = rand() % 4; // (0~3) 황금알이 있는 박스 번호

    int cntShowBox = 0; // 현재 보여줄 박스 개수
    int prevCntShowBox = 0; // 이전 박스의 개수
    // (처음 힌트: 2개라면, 두번째 힌트: 3개 ...)

    // 문제를 풀 수 있는 단서 제공(3번의 힌트 제공)
    for (int i = 1; i <= 3; i++) {
        int box[4] = { 0 };

        do {
            cntShowBox = rand() % 2 + 2; // 2,3(박스의 개수)
        } while (cntShowBox == prevCntShowBox);

        prevCntShowBox = cntShowBox;

        int isGoldEgg = 0;
        // 보여줄 박스 중에 황금알이 있는지 여부 확인하기 위한 변수
        printf(" > %d 번째 힌트 : ", i);

        // 화면에 보여줄 박스
        for (int j = 0; j < cntShowBox; j++) {
            int randbox = rand() % 4; // 0~3의 값, 박스의 인덱스에 활용

            if (box[randbox] == 0) { // 미선택(0)이면

                box[randbox] = 1; // 선택(1) 설정
                if (randbox == goldEgg) {
                    // 선택된 박스에 황금알이 있는 경우
                    isGoldEgg = 1;
                }
            }
            else {
                // 이미 선택된 박스이면, 중복이 되므로 다시 선택
                j--;
            }
        } // End of For

        for (int k = 0; k < 4; k++) {
            if (box[k] == 1) {
                printf("%d ", k + 1);
            }
        }

        printf(" 박스가 나왔습니다! \n\n");

        if (isGoldEgg == 1) {
            printf(" > 박스 중에 황금알이 있어요! \n\n");
        }
        else {
            printf(" > 실패! 박스 중에 황금알이 없습니다.. \n\n");
        }
        printf("\n... 계속 하려면 아무키나 누르세요... ");
        getchar(); // 한번 멈춰주기
    } // End of For 힌트를 모두 제공한 for문 끝남.

    printf("\n\n 황금알은 몇 번 박스 일까요? ");
    scanf("%d", &answer);

    // 정답 확인
    if (answer == goldEgg + 1) {
        printf("\n >> 황금알 획득!\n");
    }
    else {
        printf("\n 실패! 황금알은 %d번 박스에 있습니다..", goldEgg + 1);
    }

    return 0;
}