#include <stdio.h>

int main() 
{
    float a, b;
    a = 1.1E20 + 1.0f;
    //a 는 float 값인데 입력된 값은 범위를 초과해버렸으므로 엉뚱한 결과값이 나온다
    b = a - 1.1E20;
    printf("%f\n", b);

    return 0;
}