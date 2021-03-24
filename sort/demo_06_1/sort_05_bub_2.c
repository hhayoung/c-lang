#include <stdio.h>
#define SIZE 5

int main_sort5_2()
{
	int i, repeat, temp, b[SIZE] = { 1, 2, 3, 5, 4 };
	char swap;				// 이웃 두 원소의 값이 교환된 적이 있는 지를 알려주는 변수
	double compare = 0;
	// 버블 정렬 시작
	for (repeat = 1; repeat < SIZE; repeat++)
	{
		swap = 'N';			// 두 원소 간에 교환이 발생하지 않은 상태로 초기화
		for (i = 0; i < SIZE - repeat; i++)
		{
			compare++;
			if (b[i] > b[i + 1])
			{
				temp = b[i];
				b[i] = b[i + 1];
				b[i + 1] = temp;

				swap = 'Y';	// 두 원소 간에 교환이 발생한 상태로 수정
			}
		}
		if (swap == 'N')	// 두 원소 간에 교환이 발생한 적이 없는 정렬 완료 상태라면
			break;			// 정렬 작업을 끝내기
	}
	printf("\n총 비교 횟수 %.01f", compare);

	// 정렬된 결과를 출력하기
	printf("\n 정렬 후 배열: ");
	for (i = 0; i < SIZE; i++)
		printf("%4d", b[i]);
	printf("\n\n");

	return 0;
}