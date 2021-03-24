#include <stdio.h>
#pragma warning(disable:4996)
// #define _CRT_SECURE_NO_WARNINGS 대신해서 사용가능
#define STRLEN 80

int main_s3() {

	// char *name = ""; // run-time 에러, read only memory

	// char name[128]; // 입력 받을 공간 확보
	// scanf("%s", name); 

	// char words[STRLEN] = "";
	// char words[5] = ""; //5보다 글자의 개수가 많을 때는 runtime에러 발생

	// gets(words); // 포인터를 인수로 받고 있음.
	// 포인터를 인수로 받는 경우에는 크기를 알 수 없음.(주소값을 가져오니까)

	// printf("%s", words);
	// puts(words);
	// puts("-----------");
	// printf는 자동개행 포함 X, puts 자동개행 포함 O.


	/* fgets, fputs */
	// 많은 문자가 나온다고 해도 runtime에러가 발생하지 않는다.
	// f가 들어간 건 보통 file과 관련된 것.
	// char words[STRLEN] = "";

	// 파일의 내용을 읽어올 때 사용하는 함수지만, 
	// 문자열도 입력 받을 수 있음.
	// fgets(words, STRLEN, stdin); // \n(줄바꿈) 값을 제거하지 않고 그대로 입력 받음.
	// stdin 표준 입력 장치 : 마우스, 키보드

	// 줄바꿈을 제거하지 않기 때문에 줄바꿈까지를 한 문자열로 받게 된다. 개행문자를 제거해줘야 한다.

	// [문제] '\n'을 널문자 '\0'으로 바꿔보세요.
	// int i = 0;
	// // '\n'가 있는 위치를 알아내기 위해서 i를 구함
	// while( words[i] != '\n' && words[i] != '\0') {
	//   i++;
	// }
	// if(words[i] == '\n') {
	//   words[i] = '\0';
	// }

	// fputs(words, stdout); // '\n'을 추가하지 않는다. 원래는 파일에 출력하는 함수
	// stdout 표준 출력 장치 : 콘솔
	// fputs("--------------", stdout);

	//////////////////////////////////
	char small_arr[5];
	puts("enter string : ");

	// 파일을 읽어올 때는 EOF(End of File)을 만나게 되는데 이 때, null('\0')을 리턴한다.
	// 중간에 에러가 발생하는 경우에도 null을 리턴한다.

	// 파일 입출력이 아닌 콘솔과 같이 데이터를 무한으로 입력받는 경우에는 ctrl-z을 통해 EOF의 상태를 만들 수 있음.
	// fgets(small_arr, 5, stdin);

	printf("%p\n", small_arr);

	// fgets 함수는 정상 수행되는 경우 포인터(주소)를 리턴한다.
	printf("%p\n", fgets(small_arr, 5, stdin));
	// small_arr는 포인터
	// fgets(small_arr,5,stdin)) 의 리턴값 char*

	fputs(small_arr, stdout);
	// 크기5이상의 문자열을 입력해도 5개까지만 받고 끝내기 때문에 런타임 에러가 발생하지 않는다.

	return 0;
}