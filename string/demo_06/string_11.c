#include <stdio.h>
#include <string.h>
#include <ctype.h> // toupper(), ispunct(), tolower(), ...
#pragma warning(disable:4996)

#define NUM_LIMIT 1024

void toUpper(char*);
int puncCount(const char*);

int main_s11() {

    char line[NUM_LIMIT];
    char* new_line = NULL; //�ʱ�ȭ�� null�� ���ִ°� �����ϴ�.

    fgets(line, NUM_LIMIT, stdin); //'\n'���� ����.
    new_line = strchr(line, '\n');
    // '\n'�� ó�� ��Ÿ���� ���� �����͸� �Ѱ���.
    if (new_line) {
        *new_line = '\0';
    }
    // strchr�Լ��� ������ָ� �ݺ��� ������� �ʾƵ� �ȴ�.


    toUpper(line);
    puts(line);

    printf("Ư�������� ����: %d\n", puncCount(line));

    return 0;
}

// ���ڿ��� ��ȸ�ϸ鼭 �빮�ڷ� ����
void toUpper(char* str) { // char* str�� ��κ� ���ڿ��� �޴´ٴ� �ǹ�(�迭���ٴ� ���ڿ�)

    while (*str) {

        /* ������ġ ���
          // �ҹ��ڰ� ������ �빮�ڷ� �ٲ���
          if(islower(*str)) {
            *str = toupper(*str);
          }
        */

        *str = toupper(*str);
        // ���� �׳� �ٷ� ��.
        // �ڵ���Ÿ���� ���� ��ȭ�ϰ� �ִ�. 
        str++;
    }
}

// Ư�����ڸ� ���� �Լ�
int puncCount(const char* str) {
    int cnt = 0;
    while (*str) {
        if (ispunct(*str)) {
            cnt++;
        }
        str++;
    }

    return cnt;
}