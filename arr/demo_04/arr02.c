#include <stdio.h>
#define PERSONS 30 // ���� ������ ��� ��
// 30�̶�� ���� PERSONS ��� Ī�ϰڴ�.
// ����� �����ϴ� ��. �ַ� �빮��
// ���߿� ���ڸ� ����Ǹ� �� �κи� �����ָ� �ȴ�.
#define ALLSTARS 6 // �ý�Ÿ �ĺ�5��(0�� ������ ������)

int main_arr2() {

    int survey[PERSONS] = { 1,3,2,5,3,2,1,2,3,4,
                          5,2,3,3,2,1,2,4,1,5,
                          3,5,2,1,2,5,3,2,3,4 };
    int vote[ALLSTARS] = { 0 }; // 0�� ������ ������ ��� �Ҵ��.

    for (int i = 0; i < PERSONS; i++) {
        vote[survey[i]]++;
    }
    printf("�ý�Ÿ ��ǥ�� \n");
    printf("=============\n");
    for (int i = 1; i < ALLSTARS; i++) {
        printf("  %d��   %dǥ\n", i, vote[i]);
    }

    return 0;
}