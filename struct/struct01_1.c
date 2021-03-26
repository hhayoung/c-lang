#define _CRT_SECURE_NO_WARNINGS // include 위에 작성
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
	// .연산자가 &연산자보다 우선 순위가 높아서 괄호를 쓸 필요 없음

	scanf("%f", &kim.height);

	// 초기화 
	struct person princess = { "김공주", 20, 165.3f };
	struct person princess2 = { "이공주", 18, 161.f };

	// 템플릿의 순서와 다르게 지정 가능 
	struct person man = { .age= 28, 
		.name = "Nice man",
		.height = 180.0f
	};

	/* No Tag */
	struct {
		char farm[MAX];
		float price;

	}apple, banana;

	strcpy(apple.farm, "농장1");
	apple.price = 1000;

	strcpy(banana.farm, "인천농장");
	banana.price = 2000;

	/* 자료형 이름의 재정의 (typedef) 
	
	형식> 
	typedef 기존 자료형이름의 새자료형이름;
	자료형의 이름을 짧게 사용할 때 주로 사용

	e.g>
	typedef double REAL;
	REAL avg;  --> double average와 같음
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