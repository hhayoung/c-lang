#include <stdio.h>

int main(int argc, char* argv[]) {

	/*  명령 인수
		
		int argc : 명령줄에 있는 명령어들의 개수(메인함수에 전달되는 정보의 개수)
		char *argv[] : 메인함수에 전달되는 실질적인 정보로, 각 값들을 배열에 저장한다.
						문자열은 포인터, 문자열의 주소를 저장하니까 이중포인터
						배열의 첫번째 인덱스는 무조건 실행경로로 고정되어 있다.
		예를 들어,
		a.exe 파일을 실행시키는데 매개변수를 넣어주고 싶을 때는
		cmd에서 실행할 때 $a.exe hello world라고 했다면
		argc = 3
		argv[0] = a.exe
		argv[1] = hello
		argv[2] = world

		이런 식으로 비쥬얼스튜디오에서 실행하려면 
		프로젝트 우클릭 -> 속성 -> 디버깅에 들어가서
		명령 인수에 넣어주고 컴파일 하면 된다.
	*/

	int count;
	printf("명령줄에 %d개의 인수가 있습니다.\n", argc);

	for (count = 0; count < argc; count++) {
		printf("Arg %d : %s\n", count, argv[count]);
	}
	printf("\n");


	/* 십진수 문자열을 숫자로 변환하는 함수 
		
		atoi() : 십진수 문자열을 integer로 변환
		atof() : 십진수 문자열을 double로 변환
		atol() : 십진수 문자열을 long으로 변환
	*/

	if (argc < 3) {
		printf("Wrong usage of %s\n", argv[0]);
	}
	else {
		int times = atoi(argv[1]);

		for (int i = 0; i < times; i++) {
			puts(argv[2]);
		}

		// 더하는 로직
		// 명령인수에 쓰는 숫자는 문자열이기 때문에 atoi로 숫자로 변환
		printf("Sum = %d\n\n", atoi(argv[1]) + atoi(argv[2]));
		/*
			예를 들어, 다른 언어에서 c파일을 사용하려고 한다면
			변수 2개를 더하는 로직을 c파일로 만들어 둔 다음
			파이썬에서 인자로 나온 2개의 값과 함께 c파일을 실행하면 된다.
		*/

		/* 십진수 이외의 문자열을 숫자로 변환하는 함수들
			
			strtol() : 문자열을 long형으로 변환
			strtoul() : 문자열을 unsigned long형으로 변환
			strtod() : 문자열을 double형으로 변환
		*/

		char str1[] = "1234Hello";

		char* end;

		/*
			strtol() : 숫자 문자열을 long형 숫자로 변환하겠다.(변환하려는 진수를 선택할 수 있다)
			str1을 돌면서 "1234" 10진수 문자열 보다가 
			10진수 문자열이 아닌 "Hello"를 만나는 순간 
			그 주소(포인터)를 end의 주소로 넘겨줌
			"Hello"도 주소(포인터)를 갖고 있기 때문에 단일포인터에는 저장불가능. 
			그래서 포인터의 주소를 저장할 수 있는 이중포인터 &end 에 저장
		*/
		long lon = strtol(str1, &end, 10);
		/* &end 는 이중 포인터
		 
			end의 주소(&end)가 100이라고 하면,
			&end가 가르키는 값은 "Hello"
			"Hello"는 문자열이기 때문에 포인터다.

			"Hello"의 주소가 10이라고 하면,
			10번지가 가르키는 값 = 'H'

			그렇기 때문에 이중포인터여야 한다.
		*/

		// 포인터변수가 %s를 만나면 그 주소부터 쭉 순회해서 다 찍어냄. 
		// *end는 'H' -> 이걸 int로 하니까 72(아스키값)
		printf("%s, %ld %s %d \n", str1, lon, end, (int)*end);


		// 16진수도 가능 
		char str2[] = "29FFHello";
		lon = strtol(str2, &end, 16);

		printf("%s, %ld %s %d \n", str2, lon, end, (int)*end);

	}

	return 0;
}