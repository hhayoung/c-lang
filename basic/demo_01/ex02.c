#include <stdio.h>

// char 문자열에는 반드시 sizeof와 함께 쓴다.
int main_hospital()
{
	char name[10] = "";
	int age = 0;
	double weight = 0;
	double tall = 0;
	char d_name[10] = "";

	printf("환자성명 : ");
	scanf_s("%s", name, sizeof(name));

	printf("나이입력 : ");
	scanf_s("%d", &age);

	printf("몸무게(kg) : ");
	scanf_s("%lf", &weight);

	printf("키(cm) : ");
	scanf_s("%lf", &tall);

	printf("병명 : ");
	scanf_s("%s", d_name, sizeof(d_name));

	// 입원 확인서 출력
	printf("--------입원 확인서--------\n");
	printf("환자명: %s\n", name);
	printf("나이: %d\n", age);
	printf("몸무게: %.2lf\n", weight);
	printf("키: %.2lf\n", tall);
	printf("병명: %s\n", d_name);

	return 0;
}