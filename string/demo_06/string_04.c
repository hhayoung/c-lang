/* ���ڿ� �Լ��� */

#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)


int main_s4() {

    char name[10] = "";
    strcpy(name, "ȫ�浿");
    // strcpy_s(name, sizeof(name), "ȫ�浿");
    // _s�� ������ ����Ʈ����� 2��° ���ڷ� �־������
    /*
     �ݺ��� ������ name[0], name[1]�� �ϳ��ϳ���
     �־��� �ʿ䰡 ����.
     strcpy-> scanfó�� strcpy_s�� ������ ���� �������־�� �Ѵ�.
    */
    printf("�̸� : %s\n", name);
    printf("���� : %d\n", strlen(name));

    // ���ڿ� ���Լ� strcmp
    if (strcmp(name, "ȫ�浿") == 0) {
        printf("name���� ȫ�浿");
    }
    else {
        printf("name���� ȫ�浿�� �ƴϴ�.");
    }

    return 0;
}

/*
strcpy(s1,s2): s2�� ���ڿ��� s1���� ����
strlen(s1) : s1�� ���ڿ��� ����
strcmp(s1,s2): �� ���ڿ��� �ƽ�Ű�ڵ尪�� ��ġ�� ��
  ������ ��ġ�� s1�� s2���� ������ ����,
               s1�� s2�� ������ 0,
               s1�� s2���� �ڿ� ���� ���
*/