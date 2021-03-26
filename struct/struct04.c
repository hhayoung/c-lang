#include <stdio.h>
#include <string.h>
#define N 10

// ����ü ����
struct person
{
	char name[7];
	char gender[3];
	int age;
};

int main_04()
{
	// N���� ����ü�� ���ҷ� �ϴ� �迭 ����
	struct person user[N] = {
		{"�����", "��", 26},{"ȫ�浿", "��",29},{"��浿", "��",36},{"�迬��", "��",30},
		{"ȫ���", "��", 31},{"������", "��",37},{"������", "��", 42},{"�ڼ���", "��", 44},
		{"�豤��", "��", 37},{"������", "��",32}
	};

	int male = 0, female = 0, sum = 0, i;
	//��� ���ɰ� �� ���� ���� ���غ��ô�.

	for (i = 0; i < N; i++)
	{
		// ������ ���� ���ϱ�, strcmp�� �̿�
		if (strcmp(user[i].gender, "��") == 0)
		{
			male++;
		}
		else
			female++;

		//��ü ���� ���ϱ�
		sum += user[i].age; 
		
	}
	//��� ����ϱ� 
	printf("�̸�	����	����\n");
	printf("---------------------\n");
	for (i = 0; i < N; i++)
		printf("%s\t %s\t %d\n", user[i].name, user[i].gender, user[i].age);
	printf("---------------------\n");
	printf("������ : %d��\n", male);
	printf("������ : %d��\n", female);
	printf("����տ��� : %d��\n", sum / N);

	return 0;
}