#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age;
	char gender;
	double height;

	//�Է¹ޱ�
	printf("����(��:m, ��:f) : ");
	scanf("%c", &gender);

	printf("���� : ");
	scanf("%d", &age);

	printf("Ű : ");
	scanf("%lf", &height);

	// �Է°� ���
	printf("\n------------------------\n");
	printf("���� : %c\n", gender);
	printf("���� : %d��\n", age);
	printf("Ű : %.2lfcm\n", height);

	//���ڿ� �Է�
	char name[10];
	printf("�̸� �Է� : ");
	scanf("%s", name);
	//scanf("�̸� : %s", name); - �̷������� ������ �ʴ´�.
	//���ڿ� ���
	printf("�Է��� �̸�: %s", name);

	// scanf �Լ��� ���� �����͸� �Ѳ��� �Է�
	//scanf("%d %d", &������1, &������2);
	/*
		������ �� !
		"%d,%d" ������ ��� �Է½� 10,20 �̷������� �Է��ؾ���
		"%d %d" ������ ��� �Է½� 10 20 �̷��� ������� �Ѵ�.
	*/
	int n1, n2, n3, n4;

	printf("�ΰ��� ������ �Է��ϼ��� ");
	scanf("%d %d", &n1, &n2);
	printf("�ΰ��� ������ �Է��ϼ��� ");
	scanf("%d, %d", &n3, &n4);

	printf("%d %d %d %d\n", n1, n2, n3, n4);

	int age;
	char gender;
	double height;

	//�Է¹ޱ�
	printf("���� : ");
	scanf("%d", &age); // enter ĥ �� �Է��� ���� age�� ��.

	printf("Ű : ");
	scanf("%lf", &height); // enter ĥ �� �Է��� ���� height�� ��.

	// ���� �Է� �� ���� �Է½� ���� �߻��ϴ� ����� ����

	printf("����(��:m, ��:f) : ");
	scanf("%c", &gender);
	fflush(stdin); // stdin(ǥ�� �Է���ġ)�� ���� ����� ����. ���� ����
	getchar();
	gender = getchar(); // �Էµ��� �ʰ�, �Ѿ����
	/*
	���� �Ѿ�� �ƴ϶� getchar()�� ���͵� �Է°����� ���� ������(��� ���ڸ� �о����)
	Ű(height)�� �Է��ϰ� enterģ ���� �Է°����� �о���� ��.
	�Է��� �ϸ� ��� ������ ���ۿ� ���� �ǰ�
	�ϳ��ϳ� ���ۿ��� �������� ������ �Ҵ� �ȴ�.
	���� : 20 enter 170 enter
	������� 20�� age��, (���ڿ��� enter�� �ȵ��µ�)
	170�� height��, enter�� gender��
	�׷��� ������ getchar()�� �ѹ� �� ���ָ� enter�� ���� �� �ִ�.(�ٵ� �׷��� ���� �� �ƴ�)
	(�ֳĸ� ������ ���������� ��� getchar()�� �� �� �����ϱ�)
	vs getch() - ���ۿ� �� ��� Ű���忡�� �� ���ڸ��� �޾ƿ´�.
	ǥ�� �Է� ��ġ - Ű����, ǥ�� ��� ��ġ - �ܼ�(�����)
	�� �� ���� ���� fflush() - ������ ������ ��� ���������.
	*/

	// �Է°� ���
	printf("\n------------------------\n");
	printf("���� : %c\n", gender);
	printf("���� : %d��\n", age);
	printf("Ű : %.2lfcm\n", height);

	//scanf�� �̿��� ���ڿ� �Է½� ������
	// ����, ���� ���Ե� ���ڿ��� �Ѳ����� �Է¹��� �� ����.
	// ex) Kim gilDong�� �Է��ϸ� "Kim"�� �Էµ�.

	// ����� �Է� �Լ� gets() ���
	// gets() enterŰ�� �Է��ϱ� �������� ��� ���ڸ� �Է¹���.

	char address[50];

	printf("�ּ� : ");
	gets(address);
	printf("�Է��� �ּ� : %s\n", address);

	return 0;
}