#include <stdio.h>
#include <stdlib.h> // malloc(), free()가 들어있는 헤더파일

/*
	malloc() : 운영체제에게 memory를 요청할 때 사용하는 함수
			 : 메모리(memory) 할당(allocation)
			 : void type pointer를 리턴(자료형 없는 void 포인터를 리턴)

	void* : 특정 자료형을 갖지 않는 순수한(일반적인) 주소를 의미(generic pointer)
		  : 자료형의 크기를 모르기 때문에 포인터 연산을 할 수 없다.

	free() : 할당받은 메모리 공간을 반납

	malloc()과 free()는 쌍으로 사용
	free()를 해주지 않으면 메모리 공간이 계속 남아있기 때문에 메모리의 누수현상 일어남
	어느 순간 메모리가 꽉 차게 되면 다운되어 버린다.
*/

/*
	heap메모리는 위로 쌓인다. 
	스택과 힙 사이에는 free 공간(꽤 넓음)

	heap은 동적으로(필요할 때마다) 할당받는 변수들이 저장된다.
	프로그램이 돌아가면서(런타임 중에) 필요할 때마다 요청하는 것.
	어떤 경우에는 int형으로 요청할 수 있고,double형으로 요청할 수도 있고, char형일수도 있고
	그렇기 때문에 공간의 크기를 정확히 알 수 없다.

	예를 들어, 런타임 중에 int형이 100개가 필요하면,
	4byte * 100 = 400byte 를 만들어줘야하고

	double형이 1000개가 필요하면,
	8byte * 1000 = 8000 = 8KB 공간이 
	필요하기 때문에 미리 공간의 크기를 알 수 없다.

	공간을 잡을 때, 무슨 자료형이 올 지 모르기 때문에 그래서 
	malloc() 함수는 어떤 값이 들어올지 모른다는 가정하에 공간을 만들어 주는 함수이다.

	그래서 void 포인터를 리턴해줌
	그 공간이 어떤 공간인지 그 주소도 알수 없기 때문에 
*/

int main_m2() {

	double* ptr = NULL;

	// 240바이트 요청(double형 30개) 
	// double 형으로 리턴
	// 마치 배열처럼 double크기 30개의 연속된 공간을 할당해준 것.
	// 배열처럼 사용가능, heap에 배정됨(stack과는 관련X)
	// ptr변수는 블록밖으로 나가면 사라지지만,
	// 할당받은 메모리 공간은 heap 어딘가에 존재한다.(free하지 않으면)
	// 즉, ptr과 메모리공간은 동일한 것이 아니다.
	ptr = (double*)malloc(30 * sizeof(double));
	/*
		heap 메모리에는 8byte * 30개 = 240byte 공간을 os에 요청해서 만들어졌음.
		이 공간의 자료형은 모르고 일단 240byte 만큼의 공간을 잡은 것.
		void*가 이 240byte 공간의 시작 주소를 가리키고 있는데
		그 공간을 double 형 포인터로 사용하겠다고 형변환.

		공간만 운영체제에 요청해서 잡은 다음에 형변환해서 맘대로 사용
	*/

	if (ptr == NULL) // 공간이 없으면 NULL 포인터를 리턴
	{
		puts("메모리 할당 실패!!\n");
		/*
			EXIT_SUCCESS : main함수에서 return 0; (정상종료)
			EXIT_FALURE : main함수에서 return 1; (0이 아니면 비정상종료)
		*/
		// 메모리 할당이 안되는 경우는 시스템에 심각한 문제가 있는 경우
		// 따라서, 강제로 종료하는 것이 바람직하다.
		// 강제 종료
		exit(EXIT_FAILURE);
	}

	printf("Before free %p\n", ptr);
	free(ptr); // 사용 후 반납
	printf("After free %p\n", ptr);
	
	// ptr은 어떤 주소도 가리키고 있지 않다는 것을 명확히 해줌.
	ptr = NULL;

	/*
		공간을 반납했다고 해서 그 주소가 사라지는 건 아니기 때문에
		메모리공간이 사라진거지 ptr이 사라진 건 아니다.
		ptr의 주소값은 유지되고 있음.
		주소와 메모리공간은 별개
	*/


	// -> 지금은 30이라는 크기를 정해놨기 때문에 제대로된 동적할당이 아니다.
	
	/* 동적 할당 */

	// n이 얼마냐에 따라서 할당공간이 달라짐
	int n = 5;

	ptr = (double*)malloc(n * sizeof(double));

	if (ptr != NULL) {
		// 쓰레기값
		for (int i = 0; i < n; i++) {
			printf("%f ", ptr[i]);	// 현재는 쓰레기값 -> malloc은 초기화해주지 않는다.
		}
		printf("\n");

		// double i로 초기화해줌
		for (int i = 0; i < n; i++) {
			*(ptr + i) = (double)i;	// i의 값을 넣어줌
		}
		printf("\n");

		// 할당된 double값을 출력
		for (int i = 0; i < n; i++) {
			printf("%f ", ptr[i]);	// 아까 넣은 i값들이 출력된다.
		}
		printf("\n");
	}

	// free 요청전에는 항상 메모리 공간이 남아 있음.
	free(ptr); // 반납하고
	ptr = NULL; // 명확하게 다시 NULL로

	return 0;
}