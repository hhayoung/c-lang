#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_scanf()
{
	//char ch; 
	//printf("ù��° ���� �Է�: ");
	//scanf("%c", &ch);
	//printf("ù��° ���ڴ� %c\n", ch);
	//getchar(); // ******* ���Ͱ��� ���� 
	//printf("�ι�° ���� �Է�: ");
	//scanf("%c", &ch);
	//printf("�ι�° ���ڴ� %c\n", ch);

	//int n; 
	//printf("ù��° ���� �Է�: ");
	//scanf("%d", &n);
	//printf("ù��° ���ڴ� %d\n", n);
	//
	//printf("�ι�° ���� �Է�: ");
	//scanf("%d", &n);
	//printf("�ι�° ���ڴ� %d\n", n);

	//int n1, n2;
	//char ch; 

	//scanf("%d%*c", &n1);
	////getchar();  or   %*c  => ������ ������ ���ڸ� ���� ������ �Ѵ�  **************
	//scanf("%c", &ch);
	//scanf("%d", &n2);

	//printf("ch:%c n2: %d \n", ch, n2);

	/////////////////////////////////////////////////////////////

	/* ���ڿ� �Է� ���� ��ȣ : [] */

	char str[80];
	//scanf("%[a-z]", str); // a~z������ �Է� �ް� ���ڴ� ��µ��� ���� 

	//scanf("%[^123456]", str); // 123456���� �߿� �ϳ��� ������ �������� �Է� ����
	//scanf("%[^\n]",str); // ���Ͱ� ������ �������� �Է� ����
	//scanf("%5[^\n]", str); // �ټ� �ڸ������� �Է� ����

	// scanf�� ���Ͱ��� �Է°��� 
	/*int number = scanf("%5[^\n]", str);
	printf("%d\n", number);*/


	char ch; 
	scanf("%[^\n]%*c", str); // %*c�� �̿��� ������ ���Ͱ� ����
	scanf("%c", &ch);

	printf("str : %s\n", str);
	printf("ch : %c\n", ch);

	printf("str : %s", str);
	
	return 0;
}