/* ���ڿ� ���̿� strlen �Լ� */

#include <stdio.h>
#include <string.h>

#define MAX_NAME 50

int main_s5() {

    char name[MAX_NAME] = "Hello";
    // ũ��� �˳��ϰ� ����ִ°� ����.

    printf("%s ���� : %d \n", name, strlen(name));

    /*
      size_t�� typedef�� unsigned int�� ������(���� unsigned int�ε� size_t�� ������)
      size_t __cdecl strlen(
        _In_z_ char const* _Str
      );
    */

    return 0;
}
