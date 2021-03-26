/* 
	구조체: 사용자 정의 자료형(user-defined data type)
			다양한 자료형의 여러 값을 하나의 단위로 묶어서 관리할 수 있는 자료형
	-- 변수 vs 배열 vs 구조체
	변수: 한 개의 값을 저장
	배열: 같은 종류의 여러 값을 저장
	구조체: 다른 종류의 여러 값을 저장

	-- 구조체의 장점
	서로 관련된 정보를 하나의 단위로 관리 가능 

	-- 구조체 정의(템플릿)방법
	struct + 구조체태그명 
	{
		자료형 멤버명1; 
		자료형 멤버명2;
		....
		자료형 멤버명N;
	}
	// 아래의 형태인 자료형을 만들게 되면 32바이트의 메모리 확보..
	struct student_info2
	{
		char s_no[10]; //학번
		char name[10]; //이름
		int grade;		//학년
		double avg;		//평점
	};
	e.g> 제품의 정보를 저장하기 위한 구조체 
	struct product 
	{
		char serial_no[10]; //제품 시리얼 번호 
		int price;	//제품 가격
		int sales[4];	// 분기별 판매량

	};


	-- 구조체의 변수 선언
	: 구조체의 메모리를 할당받기 위해 필요함.
	형식> 
	struct 구조체태그명 + 구조체변수명;
	
	struct student_info2 student; // student 변수는 32바이트 메모리값 할당 받음.(변수 선언해야만 메모리 할당 받음)

	-- 구조체 멤버 참조 연산자 '.'
	: 구조체의 멤버 참조 시 어떤 구조체 변수의 멤버인지 명시할 때 사용함.
	(member access operator, member operator)

	e.g>
	student.avg = 4.0;

	e.g>
	struct product TV, radio;

	TV.price = 100000;

	-- 구조체의 사용방법
	1) 구조체 정의(템플릿, 설계도 작성)
	2) 구조체 변수 선언(메모리 할당받음)
	3) 구조체의 멤버 참조

*/


#define _CRT_SECURE_NO_WARNINGS // include 위에 작성
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

	printf("플레이어 이름은?");
	scanf("%s", player.name); // 멤버 접근
	printf("1,2,3 라운드 점수는?");
	scanf("%d %d %d", &player.R1, &player.R2, &player.R3);

	avg = (double)(player.R1 + player.R2 + player.R3)/3;

	printf("%s 플레이어의 게임 결과 평균 %.1lf점 \n", player.name, avg);

	return 0;

}