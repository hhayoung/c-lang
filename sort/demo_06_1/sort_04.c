/* strcmp�� �̿��� ��ȯ���� */
#include <stdio.h>
#include <string.h>

int main_sort4() {

    // ������ �迭
    char* gold[] = { "����", "�Ӳ���", "�̸���", "ȫ�浿", "������" };

    char* temp; // ���ڿ� �ּҸ� �ӽ÷� �����ϱ� ���� ������
    int size, i, j;

    size = sizeof(gold) / sizeof(gold[0]);

    printf("** �ݸ޴� ����Ʈ : ");
    for (i = 0; i < size; i++) {
        printf("%s, ", gold[i]);
    }
    // 2ĭ �ڷΰ���(2ĭ �����)
    printf("\b\b **\n\n");
    // '\b'�� �̿��ؼ� ������ �̸��ڿ� ,�� �����


    // [����] ��ȯ������ �̿��ؼ� �̸��� ������ ������ �����ϱ�. strcmp �̿�

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (strcmp(gold[i], gold[j]) > 0) {
                // ���ڿ��� �����ּҸ� ������ gold[i]�� gold[j]�� ��ȯ
                temp = gold[i];
                gold[i] = gold[j];
                gold[j] = temp;
            }
        }
    }

    printf("** ���ĵ� ����Ʈ : ");
    for (i = 0; i < size; i++) {
        printf("%s, ", gold[i]);
    }
    printf("\b\b **\n\n");

    return 0;
}