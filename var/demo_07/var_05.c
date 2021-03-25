#include <stdio.h>

/*
	extern linkage(외부 연결)
*/

// 전역변수를 선언할 때 앞에 g_를 붙인다.
int g_i; // 자동으로 0으로 초기화

double g_arr[1000];

int a = 10;
int b = 100 + 200; // constant로 나오는 값으로만 초기화할 수 있다.

// 전역변수는 변수를 이용해서 초기화X. 
// -> 처음 시작할 때 모든 전역변수가 초기화되어야 하는데, 동적인 변수를 넣으면 값이 바뀌기 때문에
//int c = a * 2; // 변수로 된 초기화는 할 수 없다.

// sizeof 연산자는 constant expreesion(표현식)
size_t x = sizeof(int); // sizeof의 return값은 size_t 타입. 이건 unsigned int 형
// sizeof(int)는 변하는 값이 아니기 때문에 전역변수에 초기화할 수 있다.

void func_5() {
	printf("func 안의 g_i %d %p\n", g_i, &g_i);
}

// 경고를 없애기 위해서 참조하는 함수원형 써주기
void func_5_1(); // extern은 생략되어 있다고 보면 된다.
extern void test_func(); 

int main_v5() {

	// 전역변수 g_i를 사용하고 싶으면
	extern int g_i;

	//-> 지역변수로 같은 이름의 g_i를 선언하면 전역변수 g_i를 사용할 수 없기 떄문에
	// 같은이름의 지역변수를 쓰면 안된다.

	//int g_i = 777; // 원래 다른 영역에 있는 g_i를 똑같은 이름으로 선언하면 전역변수 g_i가 hiding
	printf("main 안의 g_i %d %p\n", g_i, &g_i);
	// -> 전역변수와는 다른 변수
	g_i += 1;
	
	//test_func();
	func_5();
	func_5_1(); // 함수를 알아서 참조해오지만 warning은 뜨기 때문에 함수원형 적어주기


	return 0;
}

/*
	compiler에 의해 complie 작업을 하면 obj 파일 생성 => linker에 의해 link 작업을 하면 exe 파일 생성
	object파일들을 연결하기 위해 linker가 필요

	.c파일1개가 컴파일의 최소 단위
	하나의 프로젝트 안에 모든 .c파일이 컴파일 되서 obj가 만들어지고, 모든 obj를 모아서 link작업을 통해 실행파일을 만든다.
	그래서 하나의 프로젝트에 같은 함수 이름이 있으면 오류가 발생하는 것. 다같이 컴파일 하기 때문에

	a.c라는 파일에서 전역변수로 int g_i를 만들어 놨는데,
	b.c라는 파일에서 g_i를 불러다 쓸 수 있음. 그 때 사용하는게 extern g_i;
	g_i가 어떤 파일에 담겨있던 찾아와서 쓸 수 있다.

	함수는 extern이 자동으로 붙어있다. 그래서 extern을 붙이지 않아도 함수를 가져다 쓸 수 있다.


	int g_i 라는 전역변수의 스코프는 프로그램 전체(=하나의 파일)
	다른 xx.c라는 파일이 있는데 거기에 extern g_i; 한다면 외부에서 g_i를 가져오겠다는 뜻.
	근데 static int g_i; 라고 선언하면 외부에서도 가져갈 수 없다. 

	블럭 안에 static은 값을 유지하는데 쓰이지만,
	블럭 밖에 전역변수앞 static은 외부로 못나가게 한다. 
*/