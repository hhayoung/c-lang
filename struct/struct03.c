#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main_03()
{
	struct Aligned
	{
		int a; 
		float b;
		double c;
	};

	/*
		Aligned 구조체의 메모리 공간
		|0 1 2 3|4 5 6 7|8 9 10 11 12 13 14 15|
		|int a  |float b|	double c
	*/

	// 메모리 할당받음
	struct Aligned a1, a2;

	printf("struct Aligned a1\n");
	printf("Sizeof %zd\n", sizeof(struct Aligned));
	printf("%lld\n", (long long)&a1);
	printf("%lld\n", (long long)&a1.a);
	printf("%lld\n", (long long)&a1.b);
	printf("%lld\n", (long long)&a1.c);
	
	printf("--------------------------\n");
	printf("struct Aligned a2\n");
	printf("Sizeof %zd\n", sizeof(a2));
	printf("%lld\n", (long long)&a2);
	printf("%lld\n", (long long)&a2.a);
	printf("%lld\n", (long long)&a2.b);
	printf("%lld\n", (long long)&a2.c);

	struct Padded1
	{
		char a;
		float b;
		double c;
		// 1 + 4+ 8 = 13 바이트 - > 4 + 4 +8 => 16 바이트로..
	};

	//| 0 1 2 3 | 4 5 6 7 | 8 9 10 11 12 13 14 15 |
	//char a 에서 1,2,3 은 padding값. 
	struct Padded1 pad1; 
	printf("--------------------------\n");
	printf("struct Padded1 pad1\n");
	printf("Sizeof %zd\n", sizeof(pad1));
	printf("%lld\n", (long long)&pad1);
	printf("%lld\n", (long long)&pad1.a);
	printf("%lld\n", (long long)&pad1.b);
	printf("%lld\n", (long long)&pad1.c);

	/* 
	메모리 패딩(padding)
	CPU와 주기억장치에서는 효율성 차원에서 word단위로 데이터를 주고 받는다. 
	따라서, char형은 빈공간 3바이트를 채워서 주고 받는다.
	1 word --> x86: 4byte, x64: 8byte
	*/
	struct Padded2
	{
		float a;
		double b;
		char c;
		//4 + 8 + 1 = 13?  ---> 8 + 8 + 8 = 24 
		// 가운데 위치한 double을 읽기 위해 float 자리에 4만큼 패딩값을 주고, char 자리에도 7만큼 패딩값 줌 
	};

	struct Padded2 pad2;
	printf("--------------------------\n");
	printf("struct Padded2 pad2\n");
	printf("Sizeof %zd\n", sizeof(pad2)); // 전체 24바이트 .. // 구조체의 자료형+멤버명 배열을 잘 해야한다...
	printf("%lld\n", (long long)&pad2);
	printf("%lld\n", (long long)&pad2.a);
	printf("%lld\n", (long long)&pad2.b);
	printf("%lld\n", (long long)&pad2.c);


	struct Padded3
	{
		char a;
		double b;
		double c;
	};

	struct Padded3 pad3;
	printf("--------------------------\n");
	printf("struct Padded3 pad3\n");
	printf("Sizeof %zd\n", sizeof(pad3)); // 전체 24바이트 .. // 구조체의 자료형+멤버명 배열을 잘 해야한다...
	printf("%lld\n", (long long)&pad3);
	printf("%lld\n", (long long)&pad3.a);
	printf("%lld\n", (long long)&pad3.b);
	printf("%lld\n", (long long)&pad3.c);

	struct Person
	{
		char name[41];
		int age;
		float height;
		//41 +4 +4 == 49? -- > 44 +4+4 = 52
		// 4 바이트 단위로 끊기 때문에.. char형에 3만큼 패딩 주고 44 바이트 차지 함 ..1바이트 단위로 끊으면 비효율적이라서...
	};
	struct Person mom; 
	printf("--------------------------\n");
	printf("struct Peson mom\n");
	printf("%lld\n", (long long)&mom.name);
	printf("%lld\n", (long long)&mom.age);
	printf("%lld\n", (long long)&mom.height);
	printf("Sizeof %zd\n", sizeof(mom)); // 52 바이트 


	return 0;
}