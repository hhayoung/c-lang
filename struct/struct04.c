#include <stdio.h>
#include <string.h>
#define N 10

// 구조체 정의
struct person
{
	char name[7];
	char gender[3];
	int age;
};

int main_04()
{
	// N개의 구조체를 원소로 하는 배열 선언
	struct person user[N] = {
		{"손흥민", "남", 26},{"홍길동", "남",29},{"고길동", "남",36},{"김연아", "여",30},
		{"홍길북", "남", 31},{"김태희", "여",37},{"박지성", "남", 42},{"박세리", "여", 44},
		{"김광현", "남", 37},{"류현진", "남",32}
	};

	int male = 0, female = 0, sum = 0, i;
	//평균 연령과 남 녀의 수를 구해봅시다.

	for (i = 0; i < N; i++)
	{
		// 남녀의 수를 구하기, strcmp를 이용
		if (strcmp(user[i].gender, "남") == 0)
		{
			male++;
		}
		else
			female++;

		//전체 나이 구하기
		sum += user[i].age; 
		
	}
	//결과 출력하기 
	printf("이름	성별	나이\n");
	printf("---------------------\n");
	for (i = 0; i < N; i++)
		printf("%s\t %s\t %d\n", user[i].name, user[i].gender, user[i].age);
	printf("---------------------\n");
	printf("ㅁ남자 : %d명\n", male);
	printf("ㅁ여자 : %d명\n", female);
	printf("ㅁ평균연령 : %d세\n", sum / N);

	return 0;
}