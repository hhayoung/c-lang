#include <stdio.h>
// 버퍼값을 지우기 위해 많이 쓰이는 코드 
void clearBuffer()
{
	while (getchar() != '\n') // 엔터 나올 때까지 반복  
		continue;
}

int main_clear()
{
	char str[7];
	char name[10];

	fputs("번호 입력 : ", stdout); // 표준 출력 장치
	fgets(str, sizeof(str), stdin); // 표준 입력 장치
	clearBuffer(); // 남아 있는 값을 버퍼에서 지운다는 뜻 

	fputs("이름 입력 : ", stdout); 
	fgets(name, sizeof(name), stdin); 

	printf("번호: %s\n", str);
	printf("이름: %s\n", name);
	
	return 0;
	
}
//clearBuffer가 없으면 ...콘솔창에...
	//번호 입력 : 123456789
	//이름 입력 : 번호: 123456 
	//	이름 : 789  번호 입력시 남은 버퍼값이 이름 부분에 찍혀 나옴...