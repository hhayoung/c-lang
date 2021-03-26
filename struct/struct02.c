#define _CRT_SECURE_NO_WARNINGS // include 위에 작성
#include <stdio.h>

struct person
{
	char name[10];
	char gender[5];
	int age;
};

int main_02()
{
	// 초기화 
	struct person user1 = { "손흥민", "남", 26 }, user2 = { "김말똥","남", 27 },
		user3 = { "서예지", "여", 30 };

	struct person oldest; 

	if (user1.age > user2.age) {
		if (user1.age > user3.age)
			oldest = user1;
		else
			oldest = user3;
	}
	else
	{
		if (user2.age > user3.age)
			oldest = user2;
		else
			oldest = user3;
	}
	printf("이름 성별 나이\n");
	printf("=========================\n");
	printf("%s\t%s\t%2d\n", user1.name, user1.gender, user1.age);
	printf("%s\t%s\t%2d\n", user2.name, user1.gender, user2.age);
	printf("%s\t%s\t%2d\n", user3.name, user3.gender, user3.age);
	printf("=========================\n");
	printf("**연장자 \n\n");
	printf("%s\t%s\t%2d\n", oldest.name, oldest.gender, oldest.age);


	return 0;
}