#include <stdio.h>
#include <stdlib.h>		// exit, system 함수를 위한 헤더 파일
#pragma warning(disable:4996)
#define PASS 1			// 비밀번호가 일치할 때의 반환 값 1을 매크로 상수로 정의
#define FAIL 0			// 비밀번호가 다를 때의 반환 값 0을 매크로 상수로 정의


void display_menu();	// 서비스 목록 표시
int check_pw();			// 비밀번호 확인 서비스
void check_balance();	// 잔액 조회 서비스
void deposit();			// 입금 서비스
void withdraw();		// 출금 서비스

int balance;			// 계좌의 현재 잔액을 저장하는 전역 변수

int main_bank() {

	int service;	// 사용자가 원하는 서비스 번호

	printf("우리 시스템을 방문해 주셔서 감사합니다.");

	// 사용자가 그만두기를 원하지 않는 한 서비스를 계속 제공하기
	do {
		display_menu();
		printf("원하는 서비스를 선택하세요 : ");
		scanf("%d", &service);	// 사용자가 원하는 서비스 번호 입력받기

		switch (service) {
		case 1: 
			check_balance();	// 잔액 조회
			break;
		case 2:
			deposit();			// 입금 처리
			break;
		case 3:
			withdraw();			// 출금 처리
			break;
		case 4:
			exit(0);			// 프로그램 종료
		}

		/*
			사용자가 서비스 결과 화면을 확인한 후
			아무키나 누르면 현재 화면을 지우고 새 화면에서 다시 시작하기
		*/
		printf("\n 계속 서비스를 원하시면 아무키나 누르세요. ");
		getchar();
		//system("cls");
	} while (service != 4);		// 4. 그만두기를 선택하지 않는 한 계속 반복

	return 0;
}

// 잔액 조회 서비스 함수
void check_balance() {
	if (check_pw() == PASS) {
		printf("\n현재 잔액: %d원 \n", balance);
	}
}

// 입금 서비스 함수
void deposit() {
	int amount;

	printf("\n입금하실 금액은? ");
	scanf("%d", &amount);

	balance += amount;
	printf("\n입금 후 현재 잔액: %d원\n", balance);
}

// 출금 서비스 함수
void withdraw() {
	int amount;

	if (check_pw() == PASS) {
		printf("출금하실 금액은? ");
		scanf("%d", &amount);

		if (balance < amount) {
			printf("\n잔액이 부족합니다. 현재 잔액: %d원 \n", balance);
		}
		else {
			balance -= amount;
			printf("\n출금 후 현재 잔액: %d원\n", balance);
		}
	}
}

// 사용자의 비밀번호와 시스템 비밀번호를 비교해 일치 여부 반환하는 함수
int check_pw() {
	static int count = 0;	// 이 함수에서 발생한 비밀번호 오류 횟수를 저장하는 정적 지역 변수
	int system_pw = 1111;   // 정해진 시스템 서비스 비밀번호
	int limit = 3;		// 비밀번호 오류 제한 횟수
	int input_pw;		// 사용자가 입력한 비밀번호

	printf("\n시스템 비밀번호를 입력하세요: ");
	scanf("%d", &input_pw);

	if (input_pw == system_pw) {	// 비밀번호가 맞는 경우
		return PASS;
	}
	else {		// 비밀번호가 틀린 경우
		count++;	// 비밀번호 오류 발생 횟수를 1 증가
		if (count == limit) {	// 비밀번호 오류가 3회 발생한 경우
			printf("비밀번호 오류 3회 발생! \n");
			printf("신분증을 가지고 서비스센터를 방문하세요. \n");
			exit(0);		// 프로그램 실행 종료
		}
		else {	// 비밀번호 오류가 발생했으나 오류 발생이 아직 3회가 아닌 경우
			printf("비밀번호가 틀렸습니다. 총 %d회 오류!\n", count);
			return FAIL;
		}
	}
}

// 서비스 목록 표시 함수
void display_menu() {
	printf("\n\n");
	printf("==================\n");
	printf("== 1. 잔액 조회 ==\n");
	printf("== 2. 입금      ==\n");
	printf("== 3. 출금      ==\n");
	printf("== 4. 종료      ==\n");
	printf("==================\n");
}