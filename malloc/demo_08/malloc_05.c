#include <stdio.h>
#include <stdlib.h>

int main_m5() {

	/* 하나의 변수 할당 (쓸 일 없지만 학습차) */
	//int* ptr = NULL;

	//ptr = (int*)malloc(sizeof(int) * 1);
	//
	//if (!ptr) exit(1);

	//*ptr = 1000 * 3;

	//printf("%d\n", *ptr);

	// 다 사용하고나서는
	//free(ptr);

	//--------------------------------------------

	/* 1차원 배열 */
	//int n = 3;
	//int* ptr = (int*)malloc(sizeof(int) * n);

	//if (!ptr) exit(1);

	//// 배열처럼 사용 가능
	//ptr[0] = 123;
	//*(ptr + 1) = 777;
	//*(ptr + 2) = 766;

	//printf("%d %d %d\n", ptr[0], ptr[1], ptr[2]);

	//free(ptr);
	//ptr = NULL;

	//--------------------------------------------

	/* 2차원 배열 */
	//int row = 3;
	//int col = 2;

	//// 컬럼수를 이용한 배열 포인터
	//// 컬럼값이 상수이기 때문에 진정한 동적할당이라고 볼 수 없음
	//// 즉, 상수가 아닌 변수로 활용되어야 함
	//int(*ptr2d)[2] = (int(*)[2])malloc(sizeof(int) * row * col);

	//// 비쥬얼 스튜디오에서는 지원 안됨
	//// int(*ptr2d)[col] = (int(*)[2])malloc(sizeof(int) * row * col);

	//if (!ptr2d) exit(1);

	//for (int r = 0; r < row; r++) {
	//	for (int c = 0; c < col; c++) {
	//		ptr2d[r][c] = c + col * r;
	//	}
	//}

	//for (int r = 0; r < row; r++) {
	//	for (int c = 0; c < col; c++) {
	//		printf("%d ", ptr2d[r][c]);
	//	}
	//	printf("\n");
	//}

	/* 2차원 배열을 1차원 배열로 표현해서 동적 할당하기 */
	int row = 3, col = 4;
	int* ptr = (int*)malloc(sizeof(int) * row * col);
	if(!ptr) exit(1);

	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++) {
			ptr[c + col * r] = c + col * r;
		}
	}

	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++) {
			// printf("%d ", ptr[c + col * r]);
			printf("%d ", *(ptr + c + col * r));
		}
		printf("\n");
	}

	/*
		row = 3, col = 2

		(r, c)

		2차원 형태로 표현한다면
		(0,0)(0,1)
		(1,0)(1,1)
		(2,0)(2,1)
		
		실제 메모리에는 1차원으로 저장
		1차원 형태로 표현한다면
		(0,0)(0,1)(1,0)(1,1)(2,0)(2,1)
인덱스	 0	  1	   2    3	 4	  5		= c + col * r (공식)

	*/

	//--------------------------------------------

	/*
		3차원 배열이면,
		depth - 0,1,2,3,...
		여러 위치에서 압축시켜서 1차원으로 표현할 수 있다.
		3차원의 각 요소를 표현할 때는
		(0, 0, 0) 0행 0열 0뎁스
	*/

	return 0;
}