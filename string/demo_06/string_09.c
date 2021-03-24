/* strcpy 문자열 복사 함수*/
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main_s9() {

	char name1[10] = "hello";
	char name2[10];


	// name2는 포인터 상수이기 때문에 변경 불가하다.
	// (배열의 메모리 주소를 바꾸려고 하면 안 됨)
	// name2 = name1; //에러 발생
	// 둘다 포인터인데, name2 배열의 주소는 os가 할당해주는 건데,
	// name1 배열의 주소로 바꾸려고 하는 것이기 때문에 안됨.

	// strcpy(name2, name1); // null 문자까지 모두 복사해줌

	// strcpy(name2, "abcdefghijklmn"); // 10개 초과
	// -> 오버플로우 발생

	// name2에 남아있는 뒤의 쓰레기값이 출력됨
	// char name2[10] = "123456789"; //초기화해놓으면 남아있는 값이 출력됨.
	// strncpy는 null문자는 추가하지 않는다.
	strncpy(name2, "adwefasdfwdfadfsefsdf", 3);

	printf("name2: %s\n", name2);
	// name2[10]을 초기화해주지 않음으로써 쓰레기값이 들어가 있는데,
	// 3자리를 복사하고 남은 자리에 쓰레기값 출력된다.

	/*
	strcpy는 배열크기를 초과하면 오버플로우가 발생한다.
	그래서 strncpy를 사용해서 복사해올 크기를 지정할 수 있는데,
	이 때 일부분만 복사해온다면, 나머지 자리에 쓰레기값이 올 수 있으므로
	주의해줘야 한다.
	*/

	return 0;
}