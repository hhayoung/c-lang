#include <stdio.h>

// char ���ڿ����� �ݵ�� sizeof�� �Բ� ����.
int main_hospital()
{
	char name[10] = "";
	int age = 0;
	double weight = 0;
	double tall = 0;
	char d_name[10] = "";

	printf("ȯ�ڼ��� : ");
	scanf_s("%s", name, sizeof(name));

	printf("�����Է� : ");
	scanf_s("%d", &age);

	printf("������(kg) : ");
	scanf_s("%lf", &weight);

	printf("Ű(cm) : ");
	scanf_s("%lf", &tall);

	printf("���� : ");
	scanf_s("%s", d_name, sizeof(d_name));

	// �Կ� Ȯ�μ� ���
	printf("--------�Կ� Ȯ�μ�--------\n");
	printf("ȯ�ڸ�: %s\n", name);
	printf("����: %d\n", age);
	printf("������: %.2lf\n", weight);
	printf("Ű: %.2lf\n", tall);
	printf("����: %s\n", d_name);

	return 0;
}