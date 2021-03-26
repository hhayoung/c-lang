#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_TITLE 40 
#define MAX_AUTHOR 30 
#define MAX_BOOKS 3  /* å �Է� �� */

/* ����ü �迭 */
char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find; 

	//fgets�� ���������� ���ڿ��� �Է¹޾��� ��
	//���ڿ��� �����͸� return �Ѵ�.
	ret_val = fgets(st, n, stdin);  // scanf(): �߰��� �� ���ڰ� ������ ���ڿ� �Է��� ���� �� ����. �׷��� fgets��� 

	if (ret_val)
	{
		find = strchr(st, '\n');  // �Է� ���� ���ڿ����� ����Ű�� ������ 
		if (find)
			*find = '\0';
		else 
			while (getchar() != '\n') // ���� ���� ������ �ݺ�  
				continue; // ���۰� �����...
	}
	return ret_val;

}

struct book
{
	char title[MAX_TITLE];
	char author[MAX_AUTHOR];
	float price;
};

int main_05_1()
{
	// �ʱ�ȭ
	struct book library[MAX_BOOKS] = { {"empty", "empty", 0.0f},};
	int count = 0;

	while (1)
	{
		printf("å ������ �Է��ϼ���!! EnterŰ�� ������ ����˴ϴ�!!!\n");

		// Ÿ��Ʋ �Է� 
		if (s_gets(library[count].title, MAX_TITLE) == NULL) break;

		//enterŰ �Է½� break
		if (library[count].title[0] == '\0') break;

		printf("���ڸ� �Է��ϼ��� \n");
		s_gets(library[count].author, MAX_AUTHOR);
		
		printf("������ �Է��ϼ��� \n");
		scanf_s("%f", &library[count].price);
		
		//clearbuffer
		while (getchar() != '\n') // ���� ���� ������ �ݺ�  
			continue; // ���۰� �����...
		count++;

		if (count == MAX_BOOKS)
		{
			printf("å�� �����ϴ�!! \n");
			break; 
		}

	}// end of while

	if (count > 0)
	{
		printf("\n å ����Ʈ \n");
		printf("=========================\n");
		for (int index = 0; index < count; index++)
			printf("����: %s ����: %s ����: $%.1f\n", library[index].title, library[index].author, library[index].price);
	}
	else
	{
		printf("������ å�� �����!!\n");
	}
	return 0;
}