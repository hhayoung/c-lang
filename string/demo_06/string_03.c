#include <stdio.h>
#pragma warning(disable:4996)
// #define _CRT_SECURE_NO_WARNINGS ����ؼ� ��밡��
#define STRLEN 80

int main_s3() {

	// char *name = ""; // run-time ����, read only memory

	// char name[128]; // �Է� ���� ���� Ȯ��
	// scanf("%s", name); 

	// char words[STRLEN] = "";
	// char words[5] = ""; //5���� ������ ������ ���� ���� runtime���� �߻�

	// gets(words); // �����͸� �μ��� �ް� ����.
	// �����͸� �μ��� �޴� ��쿡�� ũ�⸦ �� �� ����.(�ּҰ��� �������ϱ�)

	// printf("%s", words);
	// puts(words);
	// puts("-----------");
	// printf�� �ڵ����� ���� X, puts �ڵ����� ���� O.


	/* fgets, fputs */
	// ���� ���ڰ� ���´ٰ� �ص� runtime������ �߻����� �ʴ´�.
	// f�� �� �� ���� file�� ���õ� ��.
	// char words[STRLEN] = "";

	// ������ ������ �о�� �� ����ϴ� �Լ�����, 
	// ���ڿ��� �Է� ���� �� ����.
	// fgets(words, STRLEN, stdin); // \n(�ٹٲ�) ���� �������� �ʰ� �״�� �Է� ����.
	// stdin ǥ�� �Է� ��ġ : ���콺, Ű����

	// �ٹٲ��� �������� �ʱ� ������ �ٹٲޱ����� �� ���ڿ��� �ް� �ȴ�. ���๮�ڸ� ��������� �Ѵ�.

	// [����] '\n'�� �ι��� '\0'���� �ٲ㺸����.
	// int i = 0;
	// // '\n'�� �ִ� ��ġ�� �˾Ƴ��� ���ؼ� i�� ����
	// while( words[i] != '\n' && words[i] != '\0') {
	//   i++;
	// }
	// if(words[i] == '\n') {
	//   words[i] = '\0';
	// }

	// fputs(words, stdout); // '\n'�� �߰����� �ʴ´�. ������ ���Ͽ� ����ϴ� �Լ�
	// stdout ǥ�� ��� ��ġ : �ܼ�
	// fputs("--------------", stdout);

	//////////////////////////////////
	char small_arr[5];
	puts("enter string : ");

	// ������ �о�� ���� EOF(End of File)�� ������ �Ǵµ� �� ��, null('\0')�� �����Ѵ�.
	// �߰��� ������ �߻��ϴ� ��쿡�� null�� �����Ѵ�.

	// ���� ������� �ƴ� �ְܼ� ���� �����͸� �������� �Է¹޴� ��쿡�� ctrl-z�� ���� EOF�� ���¸� ���� �� ����.
	// fgets(small_arr, 5, stdin);

	printf("%p\n", small_arr);

	// fgets �Լ��� ���� ����Ǵ� ��� ������(�ּ�)�� �����Ѵ�.
	printf("%p\n", fgets(small_arr, 5, stdin));
	// small_arr�� ������
	// fgets(small_arr,5,stdin)) �� ���ϰ� char*

	fputs(small_arr, stdout);
	// ũ��5�̻��� ���ڿ��� �Է��ص� 5�������� �ް� ������ ������ ��Ÿ�� ������ �߻����� �ʴ´�.

	return 0;
}