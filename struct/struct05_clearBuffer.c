#include <stdio.h>
// ���۰��� ����� ���� ���� ���̴� �ڵ� 
void clearBuffer()
{
	while (getchar() != '\n') // ���� ���� ������ �ݺ�  
		continue;
}

int main_clear()
{
	char str[7];
	char name[10];

	fputs("��ȣ �Է� : ", stdout); // ǥ�� ��� ��ġ
	fgets(str, sizeof(str), stdin); // ǥ�� �Է� ��ġ
	clearBuffer(); // ���� �ִ� ���� ���ۿ��� ����ٴ� �� 

	fputs("�̸� �Է� : ", stdout); 
	fgets(name, sizeof(name), stdin); 

	printf("��ȣ: %s\n", str);
	printf("�̸�: %s\n", name);
	
	return 0;
	
}
//clearBuffer�� ������ ...�ܼ�â��...
	//��ȣ �Է� : 123456789
	//�̸� �Է� : ��ȣ: 123456 
	//	�̸� : 789  ��ȣ �Է½� ���� ���۰��� �̸� �κп� ���� ����...