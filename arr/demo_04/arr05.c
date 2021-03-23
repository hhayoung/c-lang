#include <stdio.h>
#define YEARS 3

int main_arr5() {

    /* 2017~2019�� ��õ ���� ��� ǳ��
    12.2	14	11.2	11.9	10.4	10.1	9.4	10.4	10.1	10.8	12.2	13

    12.6	13	11.9	12.2	10.8	8.3	9.4	10.8	10.8	10.4	9.4	13

    10.8	10.4	11.9	10.4	10.8	9.4	10.4	9.7	10.1	10.1	10.8	12.2
    */
    int year3[3] = { 2017,2018,2019 };

    // ���� �� ���ǳ��
    double y_2017[12] = { 12.2, 14, 11.2, 11.9, 10.4, 10.1, 9.4, 10.4, 10.1, 10.8, 12.2, 13 };
    double y_2018[12] = { 12.6, 13, 11.9, 12.2, 10.8, 8.3, 9.4, 10.8, 10.8, 10.4, 9.4, 13 };
    double y_2019[12] = { 10.8, 10.4, 11.9, 10.4, 10.8, 9.4, 10.4, 9.7, 10.1, 10.1, 10.8, 12.2 };

    // 2���� �迭�� ��ȯ
    double wind_data[YEARS][12] = {
      {12.2, 14, 11.2, 11.9, 10.4, 10.1, 9.4, 10.4, 10.1, 10.8, 12.2, 13},
      {12.6, 13, 11.9, 12.2, 10.8, 8.3, 9.4, 10.8, 10.8, 10.4, 9.4, 13},
      {10.8, 10.4, 11.9, 10.4, 10.8, 9.4, 10.4, 9.7, 10.1, 10.1, 10.8, 12.2}
    };

    printf("[ ��� ǳ�� ������ ]\n");
    printf("�� : ");
    for (int m = 0; m < 12; m++) {
        printf("\t%d ", m + 1);
    }
    printf("\n");

    for (int y = 0; y < YEARS; y++) {
        printf("���� %d : ", year3[y]);
        for (int m = 0; m < 12; m++) {
            printf("\t%.1f", wind_data[y][m]);
        }
        printf("\n");
    }

    // ������ ��� ǳ���� ����ϼ���
    printf("[ 2017~2019�⵵ ��� ǳ�� ]\n");

    for (int y = 0; y < YEARS; y++) {
        double sum = 0.0, avg;
        for (int m = 0; m < 12; m++) {
            sum += wind_data[y][m];
        }
        avg = sum / (double)12;
        printf("���� %d : ��� ǳ�� = %.1f\n", year3[y], avg);
    }

    // 3�Ⱓ �� ��� ǳ���� ����ϼ���
    printf("[3�Ⱓ �� ��� ǳ��]\n");

    printf("��        : ");
    for (int m = 0; m < 12; m++) {
        printf("\t%d ", m + 1);
    }
    printf("\n");

    printf("��� ǳ��  : ");
    // �� �������� ������ �ٲ�� ��. ���� ����.
    for (int m = 0; m < 12; m++) {

        double sum = 0.0, avg = 0.0;
        for (int y = 0; y < YEARS; y++) {
            sum += wind_data[y][m];
        }
        avg = sum / (double)YEARS;
        printf("\t%.1f ", avg);
    }
    printf("\n");

    return 0;
}