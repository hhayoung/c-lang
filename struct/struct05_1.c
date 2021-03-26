#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_TITLE 40 
#define MAX_AUTHOR 30 
#define MAX_BOOKS 3  /* 책 입력 수 */

/* 구조체 배열 */
char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find; 

	//fgets는 정상적으로 문자열을 입력받았을 때
	//문자열의 포인터를 return 한다.
	ret_val = fgets(st, n, stdin);  // scanf(): 중간에 빈 문자가 있으면 문자열 입력을 받을 수 없다. 그래서 fgets사용 

	if (ret_val)
	{
		find = strchr(st, '\n');  // 입력 받은 문자열에서 엔터키를 받으면 
		if (find)
			*find = '\0';
		else 
			while (getchar() != '\n') // 엔터 나올 때까지 반복  
				continue; // 버퍼값 지우기...
	}
	return ret_val;

}

struct book
{
	char title[MAX_TITLE];
	char author[MAX_AUTHOR];
	float price;
};

int main_05_1()
{
	// 초기화
	struct book library[MAX_BOOKS] = { {"empty", "empty", 0.0f},};
	int count = 0;

	while (1)
	{
		printf("책 제목을 입력하세요!! Enter키를 누르면 종료됩니다!!!\n");

		// 타이틀 입력 
		if (s_gets(library[count].title, MAX_TITLE) == NULL) break;

		//enter키 입력시 break
		if (library[count].title[0] == '\0') break;

		printf("저자를 입력하세요 \n");
		s_gets(library[count].author, MAX_AUTHOR);
		
		printf("가격을 입력하세요 \n");
		scanf_s("%f", &library[count].price);
		
		//clearbuffer
		while (getchar() != '\n') // 엔터 나올 때까지 반복  
			continue; // 버퍼값 지우기...
		count++;

		if (count == MAX_BOOKS)
		{
			printf("책이 없습니다!! \n");
			break; 
		}

	}// end of while

	if (count > 0)
	{
		printf("\n 책 리스트 \n");
		printf("=========================\n");
		for (int index = 0; index < count; index++)
			printf("제목: %s 저자: %s 가격: $%.1f\n", library[index].title, library[index].author, library[index].price);
	}
	else
	{
		printf("보여줄 책이 없어요!!\n");
	}
	return 0;
}