#define _CRT_SECURE_NO_WARNINGS // include ���� �ۼ�
#include <stdio.h>
//#pragma warning(disable:4996)
#include <stdlib.h>
#include <string.h>

#define MAX 30

struct person
{
	char name[MAX]; // memebr 
	int age;
	float height;
};
int main_01_1()
{
	struct person kim; 
	strcpy(kim.name, "jhkim");
	kim.age = 30;
	// .�����ڰ� &�����ں��� �켱 ������ ���Ƽ� ��ȣ�� �� �ʿ� ����

	scanf("%f", &kim.height);

	// �ʱ�ȭ 
	struct person princess = { "�����", 20, 165.3f };
	struct person princess2 = { "�̰���", 18, 161.f };

	// ���ø��� ������ �ٸ��� ���� ���� 
	struct person man = { .age= 28, 
		.name = "Nice man",
		.height = 180.0f
	};

	/* No Tag */
	struct {
		char farm[MAX];
		float price;

	}apple, banana;

	strcpy(apple.farm, "����1");
	apple.price = 1000;

	strcpy(banana.farm, "��õ����");
	banana.price = 2000;

	/* �ڷ��� �̸��� ������ (typedef) 
	
	����> 
	typedef ���� �ڷ����̸��� ���ڷ����̸�;
	�ڷ����� �̸��� ª�� ����� �� �ַ� ���

	e.g>
	typedef double REAL;
	REAL avg;  --> double average�� ����
	*/

	/* typedef and structure */
	typedef struct person my_person;

	my_person ps2; // struct person ps2

	typedef struct person person; 

	person ps3;  // struct person ps3

	typedef struct {
		char name[MAX];
		char hobby[MAX];

	}student ; 
	student student1;



	return 0;
}