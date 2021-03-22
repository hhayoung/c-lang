#include <stdio.h>

int main_flf()
{
	float radius = 10.0;
	//double area;
	float area;

	area = 3.14f * radius * radius; 
	// area가 3.14인 경우 float보다 범위가 커지기 때문에 warning이 뜬다
	printf("반지름이 %f인 원의 넓이는 %lf 입니다. \n", radius, area);
	return 0;
}