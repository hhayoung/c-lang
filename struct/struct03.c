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
		Aligned ����ü�� �޸� ����
		|0 1 2 3|4 5 6 7|8 9 10 11 12 13 14 15|
		|int a  |float b|	double c
	*/

	// �޸� �Ҵ����
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
		// 1 + 4+ 8 = 13 ����Ʈ - > 4 + 4 +8 => 16 ����Ʈ��..
	};

	//| 0 1 2 3 | 4 5 6 7 | 8 9 10 11 12 13 14 15 |
	//char a ���� 1,2,3 �� padding��. 
	struct Padded1 pad1; 
	printf("--------------------------\n");
	printf("struct Padded1 pad1\n");
	printf("Sizeof %zd\n", sizeof(pad1));
	printf("%lld\n", (long long)&pad1);
	printf("%lld\n", (long long)&pad1.a);
	printf("%lld\n", (long long)&pad1.b);
	printf("%lld\n", (long long)&pad1.c);

	/* 
	�޸� �е�(padding)
	CPU�� �ֱ����ġ������ ȿ���� �������� word������ �����͸� �ְ� �޴´�. 
	����, char���� ����� 3����Ʈ�� ä���� �ְ� �޴´�.
	1 word --> x86: 4byte, x64: 8byte
	*/
	struct Padded2
	{
		float a;
		double b;
		char c;
		//4 + 8 + 1 = 13?  ---> 8 + 8 + 8 = 24 
		// ��� ��ġ�� double�� �б� ���� float �ڸ��� 4��ŭ �е����� �ְ�, char �ڸ����� 7��ŭ �е��� �� 
	};

	struct Padded2 pad2;
	printf("--------------------------\n");
	printf("struct Padded2 pad2\n");
	printf("Sizeof %zd\n", sizeof(pad2)); // ��ü 24����Ʈ .. // ����ü�� �ڷ���+����� �迭�� �� �ؾ��Ѵ�...
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
	printf("Sizeof %zd\n", sizeof(pad3)); // ��ü 24����Ʈ .. // ����ü�� �ڷ���+����� �迭�� �� �ؾ��Ѵ�...
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
		// 4 ����Ʈ ������ ���� ������.. char���� 3��ŭ �е� �ְ� 44 ����Ʈ ���� �� ..1����Ʈ ������ ������ ��ȿ�����̶�...
	};
	struct Person mom; 
	printf("--------------------------\n");
	printf("struct Peson mom\n");
	printf("%lld\n", (long long)&mom.name);
	printf("%lld\n", (long long)&mom.age);
	printf("%lld\n", (long long)&mom.height);
	printf("Sizeof %zd\n", sizeof(mom)); // 52 ����Ʈ 


	return 0;
}