#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age;
	char gender;
	double height;

	//입력받기
	printf("성별(남:m, 여:f) : ");
	scanf("%c", &gender);

	printf("나이 : ");
	scanf("%d", &age);

	printf("키 : ");
	scanf("%lf", &height);

	// 입력값 출력
	printf("\n------------------------\n");
	printf("성별 : %c\n", gender);
	printf("나이 : %d세\n", age);
	printf("키 : %.2lfcm\n", height);

	//문자열 입력
	char name[10];
	printf("이름 입력 : ");
	scanf("%s", name);
	//scanf("이름 : %s", name); - 이런식으로 쓰이지 않는다.
	//문자열 출력
	printf("입력한 이름: %s", name);

	// scanf 함수에 여러 데이터를 한꺼번 입력
	//scanf("%d %d", &변수명1, &변수명2);
	/*
		주의할 점 !
		"%d,%d" 포맷인 경우 입력시 10,20 이런식으로 입력해야함
		"%d %d" 포맷인 경우 입력시 10 20 이렇게 맞춰줘야 한다.
	*/
	int n1, n2, n3, n4;

	printf("두개의 정수를 입력하세요 ");
	scanf("%d %d", &n1, &n2);
	printf("두개의 정수를 입력하세요 ");
	scanf("%d, %d", &n3, &n4);

	printf("%d %d %d %d\n", n1, n2, n3, n4);

	int age;
	char gender;
	double height;

	//입력받기
	printf("나이 : ");
	scanf("%d", &age); // enter 칠 때 입력한 값이 age에 들어감.

	printf("키 : ");
	scanf("%lf", &height); // enter 칠 때 입력한 값이 height에 들어감.

	// 숫자 입력 후 문자 입력시 자주 발생하는 입출력 현상

	printf("성별(남:m, 여:f) : ");
	scanf("%c", &gender);
	fflush(stdin); // stdin(표준 입력장치)로 받은 내용들 비우기. 버퍼 비우기
	getchar();
	gender = getchar(); // 입력되지 않고, 넘어가버림
	/*
	실은 넘어간게 아니라 getchar()는 엔터도 입력값으로 쓰기 때문에(모든 문자를 읽어들임)
	키(height)를 입력하고 enter친 것을 입력값으로 읽어들인 것.
	입력을 하면 모든 값들은 버퍼에 들어가게 되고
	하나하나 버퍼에서 꺼내져서 변수에 할당 된다.
	버퍼 : 20 enter 170 enter
	순서대로 20은 age에, (숫자에는 enter가 안들어가는듯)
	170은 height에, enter는 gender에
	그래서 위에서 getchar()을 한번 더 써주면 enter을 버릴 수 있다.(근데 그렇게 좋은 건 아님)
	(왜냐면 변수가 많아질수록 계속 getchar()을 쓸 수 없으니까)
	vs getch() - 버퍼에 안 담고 키보드에서 손 떼자마자 받아온다.
	표준 입력 장치 - 키보드, 표준 출력 장치 - 콘솔(모니터)
	이 떄 쓰는 것이 fflush() - 버퍼의 내용을 모두 비워버린다.
	*/

	// 입력값 출력
	printf("\n------------------------\n");
	printf("성별 : %c\n", gender);
	printf("나이 : %d세\n", age);
	printf("키 : %.2lfcm\n", height);

	//scanf를 이용한 문자열 입력시 문제점
	// 공백, 탭이 포함된 문자열은 한꺼번에 입력받을 수 없음.
	// ex) Kim gilDong을 입력하면 "Kim"만 입력됨.

	// 행단위 입력 함수 gets() 사용
	// gets() enter키를 입력하기 전까지의 모든 문자를 입력받음.

	char address[50];

	printf("주소 : ");
	gets(address);
	printf("입력한 주소 : %s\n", address);

	return 0;
}