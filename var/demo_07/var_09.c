#include <stdio.h>

/*
	ㅁ Linkage
		file은 컴파일러가 컴파일을 하기 위한 최소 단위이다.(file = translation unit)

		지금 현재 프로젝트 안에는 여러 개의 파일이 존재한다. 
		컴파일러는 이 여러 개의 파일을 따로 따로 각각 컴파일 한다.

		각각의 object 파일이 생성되면 각 object파일을 
		Linker가 연결할 부분이 있으면 연결을 해준다. 
		이러한 것을 Linkage라고 한다. 
		연결 작업 -> Linkage

		src ---(컴파일)---> obj ---(Linker)---> exe
	
*/

// external link
int ex_ln; // 전역(global)변수 : file scope에 있는 변수

// internal linkage (내부연결: file 안에서만 사용)
// linkage type을 의미하는 키워드
static int in_ln; 
// block 안에서 사용되는 static은 Object의 지속/유지(storage duration)를 의미한다.

// 같은 전역변수지만 static이 붙으면 linkage의 타입을 의미(외부링크인지 내부링크인지) 
// 지역변수에 static을 붙이면 값을 유지하느냐 안하느냐

void test_link();
// -> 없어도 잘 실행됨. warning은 뜬다.
// warning C4013: 'test_link'이(가) 정의되지 않았습니다.

int main_v9() {

	ex_ln = 2000;

	test_link();

	printf("%d\n", ex_ln);

	return 0;
}