// 밑변이 3cm, 높이가 5cm인 삼각형의 넓이 구하기
// 변수 width = 밑변, height = 높이, area = 넓이
// 세 변수 모두 실수형으로 선언
// 공식 : 밑변 x 높이/2

#include <stdio.h>

int main()
{
    double width, height, area;
    width = 3.0;
    height = 5.0;
    area = width * height / 2.0;

    printf("%lf\n",area);

    return 0;
}