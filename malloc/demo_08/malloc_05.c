#include <stdio.h>
#include <stdlib.h>

int main_m5() {

	/* �ϳ��� ���� �Ҵ� (�� �� ������ �н���) */
	//int* ptr = NULL;

	//ptr = (int*)malloc(sizeof(int) * 1);
	//
	//if (!ptr) exit(1);

	//*ptr = 1000 * 3;

	//printf("%d\n", *ptr);

	// �� ����ϰ�����
	//free(ptr);

	//--------------------------------------------

	/* 1���� �迭 */
	//int n = 3;
	//int* ptr = (int*)malloc(sizeof(int) * n);

	//if (!ptr) exit(1);

	//// �迭ó�� ��� ����
	//ptr[0] = 123;
	//*(ptr + 1) = 777;
	//*(ptr + 2) = 766;

	//printf("%d %d %d\n", ptr[0], ptr[1], ptr[2]);

	//free(ptr);
	//ptr = NULL;

	//--------------------------------------------

	/* 2���� �迭 */
	//int row = 3;
	//int col = 2;

	//// �÷����� �̿��� �迭 ������
	//// �÷����� ����̱� ������ ������ �����Ҵ��̶�� �� �� ����
	//// ��, ����� �ƴ� ������ Ȱ��Ǿ�� ��
	//int(*ptr2d)[2] = (int(*)[2])malloc(sizeof(int) * row * col);

	//// ����� ��Ʃ��������� ���� �ȵ�
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

	/* 2���� �迭�� 1���� �迭�� ǥ���ؼ� ���� �Ҵ��ϱ� */
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

		2���� ���·� ǥ���Ѵٸ�
		(0,0)(0,1)
		(1,0)(1,1)
		(2,0)(2,1)
		
		���� �޸𸮿��� 1�������� ����
		1���� ���·� ǥ���Ѵٸ�
		(0,0)(0,1)(1,0)(1,1)(2,0)(2,1)
�ε���	 0	  1	   2    3	 4	  5		= c + col * r (����)

	*/

	//--------------------------------------------

	/*
		3���� �迭�̸�,
		depth - 0,1,2,3,...
		���� ��ġ���� ������Ѽ� 1�������� ǥ���� �� �ִ�.
		3������ �� ��Ҹ� ǥ���� ����
		(0, 0, 0) 0�� 0�� 0����
	*/

	return 0;
}