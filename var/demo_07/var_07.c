#include <stdio.h>

/* 
	함수 원형(prototype) 스코프
*/

// hi, hello 변수의 생명은 현재 라인에서 끝난다.
// 사실, 별의미가 없는 변수
void func1(int hi, double hello);

//void func(int, double);
/*
	함수의 매개변수는 지역변수
	지금 원형에서는 void func(int hi, double hello); 
	; 이거를 만나면서 매개변수의 생명은 한줄로 끝이 난다.
	그래서 hi와 hello를 쓰는 곳이 없기 때문에 비워놔도 상관이 없다.
	명시적으로 하기 위해 매개변수도 똑같이 써놓을 뿐 안써도 된다.
*/

int main_v7() {

	return 0;
}
void func1(int hi, double hello) {

}