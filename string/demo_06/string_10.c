/* sprintf �Լ��� �� ���� ���� ���ڿ� �Լ��� */
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main_s10() {

	/* sprintf() */

	char str[100] = "";
	int i = 12345;
	double d = 3.22323;

	sprintf(str, "sample%5d.jpg %f", i, d);
	// str�� ""�ȿ� ������ ���Ĵ�� ����ڴ�.
	// sample000.jpg, sample001.jpg, sample002.jpg, ...
	// �̷������� �ݺ����� �̿��� ���ϸ��� ���� �� �ִ� �Լ�

	puts(str);


	/* �׹��� ���� �Լ��� */

	// 'W'�� �����ϴ� ��ġ���� �����͸� �Ѱ���.
	// %s�� ��ġ(�ּ�)�������� ��ȸ�ϸ鼭 ���� ���
	printf("%s\n", strchr("Hello World", 'W'));
	// ������ ��! �ι�° ���ڴ� ���ڱ� ������ ""�� �ƴ϶� ''�� ������� �Ѵ�.


	// ABCDE �߿� �ϳ��� ���۵Ǵ� ���ڸ� ã�Ƽ� �ش� �����͸� �Ѱ���
	// 'e'�� �ֱ� �ѵ� 'E'�� �ٸ��� ������ null���� �Ѿ��.
	printf("%s\n", strpbrk("Hello, World", "ABCDE"));
	printf("%s\n", strpbrk("Hello, World", "abcde"));
	// abcde �߿� e�� �ֱ� ������ e�������� �� ���
	// abcde�߿� ���� ���� ã������ ���ں���


	// ���� �������� ��Ÿ���� 'l'�� ã�Ƽ� �����ͷ� �Ѱ���.
	printf("%s\n", strrchr("Hello, World, Hello World", 'l'));
	// strchr���� strrchr r �߰���. r : reverse


	// ���ڿ��� ���ڿ����� ���ؼ� �����͸� �Ѱ���
	printf("%s\n", strstr("Hello World", "wor"));
	printf("%s\n", strstr("Hello World", "Wor"));
	// �տ� �ִ� ���ڿ��� �ڿ� �ִ� ���ڿ� ���� ���ؼ�
	// ������ ������ �� ��ġ�������� �����͸� �Ѱ���.

	return 0;
}