/* 
	����ü: ����� ���� �ڷ���(user-defined data type)
			�پ��� �ڷ����� ���� ���� �ϳ��� ������ ��� ������ �� �ִ� �ڷ���
	-- ���� vs �迭 vs ����ü
	����: �� ���� ���� ����
	�迭: ���� ������ ���� ���� ����
	����ü: �ٸ� ������ ���� ���� ����

	-- ����ü�� ����
	���� ���õ� ������ �ϳ��� ������ ���� ���� 

	-- ����ü ����(���ø�)���
	struct + ����ü�±׸� 
	{
		�ڷ��� �����1; 
		�ڷ��� �����2;
		....
		�ڷ��� �����N;
	}
	// �Ʒ��� ������ �ڷ����� ����� �Ǹ� 32����Ʈ�� �޸� Ȯ��..
	struct student_info2
	{
		char s_no[10]; //�й�
		char name[10]; //�̸�
		int grade;		//�г�
		double avg;		//����
	};
	e.g> ��ǰ�� ������ �����ϱ� ���� ����ü 
	struct product 
	{
		char serial_no[10]; //��ǰ �ø��� ��ȣ 
		int price;	//��ǰ ����
		int sales[4];	// �б⺰ �Ǹŷ�

	};


	-- ����ü�� ���� ����
	: ����ü�� �޸𸮸� �Ҵ�ޱ� ���� �ʿ���.
	����> 
	struct ����ü�±׸� + ����ü������;
	
	struct student_info2 student; // student ������ 32����Ʈ �޸𸮰� �Ҵ� ����.(���� �����ؾ߸� �޸� �Ҵ� ����)

	-- ����ü ��� ���� ������ '.'
	: ����ü�� ��� ���� �� � ����ü ������ ������� ����� �� �����.
	(member access operator, member operator)

	e.g>
	student.avg = 4.0;

	e.g>
	struct product TV, radio;

	TV.price = 100000;

	-- ����ü�� �����
	1) ����ü ����(���ø�, ���赵 �ۼ�)
	2) ����ü ���� ����(�޸� �Ҵ����)
	3) ����ü�� ��� ����

*/


#define _CRT_SECURE_NO_WARNINGS // include ���� �ۼ�
#include <stdio.h>
//#pragma warning(disable:4996)

struct game
{
	char name[10];
	int R1, R2, R3;

};
int main_01()
{
	struct game player;
	double avg;

	printf("�÷��̾� �̸���?");
	scanf("%s", player.name); // ��� ����
	printf("1,2,3 ���� ������?");
	scanf("%d %d %d", &player.R1, &player.R2, &player.R3);

	avg = (double)(player.R1 + player.R2 + player.R3)/3;

	printf("%s �÷��̾��� ���� ��� ��� %.1lf�� \n", player.name, avg);

	return 0;

}