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
//	printf("시력 입력:");
//	scanf("%lf %lf", &robot.left, &robot.right);
//	robot = exchange(robot);
//	printf("바뀐 시력 :%.1lf %.1lf\n", robot.left, robot.right);
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
	printf("바사삭의 가격과 열량을 입력하세요:");
	scanf("%d %d", &info.price, &info.calories);
	
	printf("바바삭의 가격: %d원\n", info.price);
	printf("바바삭의 열량: %dcal\n", info.calories);


	return 0;
}