#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_scanf()
{
	//char ch; 
	//printf("첫번째 문자 입력: ");
	//scanf("%c", &ch);
	//printf("첫번째 문자는 %c\n", ch);
	//getchar(); // ******* 엔터값을 받음 
	//printf("두번째 문자 입력: ");
	//scanf("%c", &ch);
	//printf("두번째 문자는 %c\n", ch);

	//int n; 
	//printf("첫번째 숫자 입력: ");
	//scanf("%d", &n);
	//printf("첫번째 숫자는 %d\n", n);
	//
	//printf("두번째 숫자 입력: ");
	//scanf("%d", &n);
	//printf("두번째 숫자는 %d\n", n);

	//int n1, n2;
	//char ch; 

	//scanf("%d%*c", &n1);
	////getchar();  or   %*c  => 버퍼의 마지막 문자를 비우는 역할을 한다  **************
	//scanf("%c", &ch);
	//scanf("%d", &n2);

	//printf("ch:%c n2: %d \n", ch, n2);

	/////////////////////////////////////////////////////////////

	/* 문자열 입력 조건 기호 : [] */

	char str[80];
	//scanf("%[a-z]", str); // a~z까지만 입력 받고 숫자는 출력되지 않음 

	//scanf("%[^123456]", str); // 123456문자 중에 하나가 나오기 전까지만 입력 받음
	//scanf("%[^\n]",str); // 엔터가 나오기 전까지만 입력 받음
	//scanf("%5[^\n]", str); // 다섯 자리까지만 입력 받음

	// scanf의 리터값은 입력개수 
	/*int number = scanf("%5[^\n]", str);
	printf("%d\n", number);*/


	char ch; 
	scanf("%[^\n]%*c", str); // %*c를 이용해 버퍼의 엔터값 받음
	scanf("%c", &ch);

	printf("str : %s\n", str);
	printf("ch : %c\n", ch);

	printf("str : %s", str);
	
	return 0;
}