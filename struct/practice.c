#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//struct vision
//{
//	double left;
//	double right;
//};
//struct vision exchange(struct vision robot);
//
//int main()
//{
//	struct vision robot;
//
//	printf("�÷� �Է�:");
//	scanf("%lf %lf", &robot.left, &robot.right);
//	robot = exchange(robot);
//	printf("�ٲ� �÷� :%.1lf %.1lf\n", robot.left, robot.right);
//	return 0;
//}
//
//struct vision exchange(struct vision robot)
//{
//	double temp;
//	temp = robot.left;
//	robot.left = robot.right;
//	robot.right = temp;
//
//
//	return robot;
//
//}

struct cracker 
{
	int price;
	int calories;
};

int main_pra()
{
	struct cracker info; 
	printf("�ٻ���� ���ݰ� ������ �Է��ϼ���:");
	scanf("%d %d", &info.price, &info.calories);
	
	printf("�ٹٻ��� ����: %d��\n", info.price);
	printf("�ٹٻ��� ����: %dcal\n", info.calories);


	return 0;
}