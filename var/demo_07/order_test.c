#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)


void display_service(void);	// 서비스 목록 표시
void display_item(void);	// 상품 목록 표시
void order_sheet(void);		// 주문 내역서 표시
void ordering(void);		// 주문하기
void cleaning();			// 화면 지우기

#define N 6		// 상품 개수는 5이나 첨자의 편리성을 위해 5+1로 정의
/*
단가, 상품명, 주문 개수를 저장한 배열의 첨자를 0~4가 아닌
1~5까지 사용하기 위해 상품수보다 1 많게 선언함
*/
char name[N][10] = { "", "노트", "연필", "지우개", "샤프", "볼펜" }; // 상품명
int unit_cost[N] = { 0,1000,500,300,800,1500 }; // 상품의 단가
int number[N] = { 0 };

int main() {
	int service;	// 사용자가 원하는 서비스 번호

	do {
		display_service();		// 사용자에게 제공하는 서비스 목록을 표시
		printf("원하는 서비스를 선택하세요: ");
		scanf("%d", &service);	// 사용자가 원하는 서비스 번호 입력받기

		switch (service) {
		case 1:
			ordering();	// 주문하기
			break;
		case 2:
			order_sheet();	// 주문내역서 표시
			break;
		case 3:
			exit(0);	// 프로그램 종료
		}

		cleaning();		// 사용자가 화면을 확인한 후 화면을 지우기

	} while (service != 3);

	return 0;
}

// 주문하기
void ordering() {
	int item, n;

	display_item();		// 상품의 정보 표시
	printf("원하는 상품의 번호는? ");
	scanf("%d", &item);
	printf("%s을(를) 주문할 갯수는? ", name[item]);
	scanf("%d", &n);

	number[item] += n;	// 해당 상품의 총 주문 개수를 누적함
	printf("\n 주문하신 %s %d개는 총 %d원입니다. \n", name[item], n, n * unit_cost[item]);
}

// 주문 내역서 표시
void order_sheet() {
	int i, cost, total_cost = 0;

	printf("\n   상품 주문 내역서   \n");
	printf("========================\n");
	printf(" 상품명   개수   가격 \n");
	printf("------------------------\n");

	for (i = 1; i < N; i++) {
		if (number[i] > 0) {	// 사용자가 주문한 상품만 표시하기
			cost = unit_cost[i] * number[i];
			printf(" %-7s %3d %7d \n", name[i], number[i], cost);
			total_cost = cost;
		}
	}
	printf("========================\n");
	printf(" 총액         %7d원 \n", total_cost);
}

// 서비스 목록 표시
void display_service() {
	printf("\n>> 환영합니다. \n");
	printf("========================\n");
	printf("== 1. 상품 주문하기   ==\n");
	printf("== 2. 주문서 확인하기 ==\n");
	printf("== 3. 종료하기        ==\n");
	printf("========================\n");
}

// 상품 목록 표시
void display_item() {
	int i;

	printf("\n>> 상품 주문 서비스입니다. \n");
	printf("========================\n");
	for (i = 1; i < N; i++) {
		printf(" %d   %7s   %7d \n", i, name[i], unit_cost[i]);
	}
	printf("========================\n");
}

// 사용자가 아무키나 누를 때까지 잠시 대기 후 화면 지우기
void cleaning() {
	getchar();
	printf("\n계속 서비스를 원하시면 아무키나 누르세요.");
	getchar();
	system("cls");
}