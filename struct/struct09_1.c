#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NLEN 30

struct name_count {
	char first[NLEN];
	char last[NLEN];
	int num;

};

void receive_input(struct name_count*);
void count_characters(struct name_count*);
void show_result(struct name_count*);
//char* str_gets(char* str, int n);

int main09_1()
{
	struct name_count user_name;
	receive_input(&user_name);
	count_characters(&user_name);
	show_result(&user_name);

	return 0;
}

char* str_gets(char* st, int n)
{
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_val;

}

void receive_input(struct name_count* ptr_nc)
{
	int flag;

	printf("당신의 First Name :\n>> ");

	//str_gets(ptr_nc->first, NLEN);
	flag = scanf("%[^\n]%*c", ptr_nc->first);
	if (flag != 1)
		printf("잘못된 입력");

	printf("당신의 Last Name :\n>> ");

	//str_gets(ptr_nc->last, NLEN);
	flag = scanf("%[^\n]%*c", ptr_nc->last);
	if (flag != 1)
		printf("Wrong input");

}
void count_characters(struct name_count* ptr_nc)
{
	ptr_nc->num = strlen(ptr_nc->first) + strlen(ptr_nc->last);
	//ptr_nc->num = (int)strlen(ptr_nc->first) + (int)strlen(ptr_nc->last);

}
void show_result(struct name_count* ptr_nc)
{
	printf("Hi, %s %s. 당신의 이름은 %d 글자 입니다.\n",
		ptr_nc->first, ptr_nc->last, ptr_nc->num);

}
