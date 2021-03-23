#include <stdio.h>
#include <stdlib.h> //rand, srand
#include <time.h> // time

int main_arr3() {

    srand(time(NULL));

    printf("\n\n---------- Ȳ�ݾ��� ã�ƶ� ----------\n\n");

    int answer;
    int goldEgg = rand() % 4; // (0~3) Ȳ�ݾ��� �ִ� �ڽ� ��ȣ

    int cntShowBox = 0; // ���� ������ �ڽ� ����
    int prevCntShowBox = 0; // ���� �ڽ��� ����
    // (ó�� ��Ʈ: 2�����, �ι�° ��Ʈ: 3�� ...)

    // ������ Ǯ �� �ִ� �ܼ� ����(3���� ��Ʈ ����)
    for (int i = 1; i <= 3; i++) {
        int box[4] = { 0 };

        do {
            cntShowBox = rand() % 2 + 2; // 2,3(�ڽ��� ����)
        } while (cntShowBox == prevCntShowBox);

        prevCntShowBox = cntShowBox;

        int isGoldEgg = 0;
        // ������ �ڽ� �߿� Ȳ�ݾ��� �ִ��� ���� Ȯ���ϱ� ���� ����
        printf(" > %d ��° ��Ʈ : ", i);

        // ȭ�鿡 ������ �ڽ�
        for (int j = 0; j < cntShowBox; j++) {
            int randbox = rand() % 4; // 0~3�� ��, �ڽ��� �ε����� Ȱ��

            if (box[randbox] == 0) { // �̼���(0)�̸�

                box[randbox] = 1; // ����(1) ����
                if (randbox == goldEgg) {
                    // ���õ� �ڽ��� Ȳ�ݾ��� �ִ� ���
                    isGoldEgg = 1;
                }
            }
            else {
                // �̹� ���õ� �ڽ��̸�, �ߺ��� �ǹǷ� �ٽ� ����
                j--;
            }
        } // End of For

        for (int k = 0; k < 4; k++) {
            if (box[k] == 1) {
                printf("%d ", k + 1);
            }
        }

        printf(" �ڽ��� ���Խ��ϴ�! \n\n");

        if (isGoldEgg == 1) {
            printf(" > �ڽ� �߿� Ȳ�ݾ��� �־��! \n\n");
        }
        else {
            printf(" > ����! �ڽ� �߿� Ȳ�ݾ��� �����ϴ�.. \n\n");
        }
        printf("\n... ��� �Ϸ��� �ƹ�Ű�� ��������... ");
        getchar(); // �ѹ� �����ֱ�
    } // End of For ��Ʈ�� ��� ������ for�� ����.

    printf("\n\n Ȳ�ݾ��� �� �� �ڽ� �ϱ��? ");
    scanf("%d", &answer);

    // ���� Ȯ��
    if (answer == goldEgg + 1) {
        printf("\n >> Ȳ�ݾ� ȹ��!\n");
    }
    else {
        printf("\n ����! Ȳ�ݾ��� %d�� �ڽ��� �ֽ��ϴ�..", goldEgg + 1);
    }

    return 0;
}