/* sprintf 함수와 그 밖의 여러 문자열 함수들 */
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main_s10() {

	/* sprintf() */

	char str[100] = "";
	int i = 12345;
	double d = 3.22323;

	sprintf(str, "sample%5d.jpg %f", i, d);
	// str에 ""안에 정의한 형식대로 만들겠다.
	// sample000.jpg, sample001.jpg, sample002.jpg, ...
	// 이런식으로 반복문을 이용해 파일명을 만들 수 있는 함수

	puts(str);


	/* 그밖의 여러 함수들 */

	// 'W'로 시작하는 위치부터 포인터를 넘겨줌.
	// %s는 위치(주소)에서부터 순회하면서 값을 출력
	printf("%s\n", strchr("Hello World", 'W'));
	// 주의할 점! 두번째 인자는 문자기 때문에 ""가 아니라 ''로 묶어줘야 한다.


	// ABCDE 중에 하나로 시작되는 글자를 찾아서 해당 포인터를 넘겨줌
	// 'e'가 있긴 한데 'E'랑 다르기 때문에 null값이 넘어간다.
	printf("%s\n", strpbrk("Hello, World", "ABCDE"));
	printf("%s\n", strpbrk("Hello, World", "abcde"));
	// abcde 중에 e가 있기 때문에 e에서부터 쭉 출력
	// abcde중에 가장 먼저 찾아지는 글자부터


	// 가장 마지막에 나타나는 'l'을 찾아서 포인터로 넘겨줌.
	printf("%s\n", strrchr("Hello, World, Hello World", 'l'));
	// strchr에서 strrchr r 추가됨. r : reverse


	// 문자열과 문자열끼리 비교해서 포인터를 넘겨줌
	printf("%s\n", strstr("Hello World", "wor"));
	printf("%s\n", strstr("Hello World", "Wor"));
	// 앞에 있는 문자열과 뒤에 있는 문자열 서로 비교해서
	// 같은게 있으면 그 위치에서부터 포인터를 넘겨줌.

	return 0;
}