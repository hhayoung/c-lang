#include <stdio.h>

int main_s2_1() {

    char str[] = "I am a string";
    const char* str2 = "I am a string2";

    // str ���
    for (int i = 0; i < 6; i++) {
        putchar(str[i]);
        // ��ȯ�� ���� �ʾƵ� ��.
    }
    putchar('\n');

    // str2 ���
    for (int i = 0; i < 8; i++) {
        putchar(str2[i]);
    }
    putchar('\n');

    // *�̿��ؼ� str2 ���
    for (int i = 0; i < 8; i++) {
        putchar(*(str2 + i));
    }
    putchar('\n');

    //[����] while���� �̿��ؼ� str2�� ���ڿ��� ���� ����غ�����.
    while (*(str2) != '\0') {
        putchar(*(str2++));
    }
    putchar('\n');

    str2 = str; // ����
    printf("str address : %p\n", str);
    printf("str2 address : %p\n", str2);
    // ���� �ּҸ� ����Ų��. str2 �� str�� ����Ű�� �� ��.

    // str = str2; // ����
    // str�� ������ �� �����ͺ����� �ƴϱ� ������.

    char* word = "Goggle";
    // word[2] = 'o'; // Run-time ����, read only �޸𸮿� ����Ǳ� ������..

    // const char *word = "Goggle"; �� �����ߴٸ�
    // �����غ��� ���� ���� ������ ������ ��.
    // -> �׷��ϱ� const �� �����ִ°� ����.

    puts(word);

    const char* str3 = "What's the matter?";
    const char* copy;

    copy = str3; // ����

    printf("%s %p %p\n", str3, str3, &str3);
    printf("%s %p %p\n", copy, copy, &copy);
    // str3�� copy�� �ּҴ� ���� ���� ����Ű�� ����.
    // ��ü �����ͺ����� �ּҴ� �ٸ�.

    return 0;
}