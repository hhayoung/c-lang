#include <stdio.h>

/* 포인터를 이용한 배열 전달 */

double average2(double*, double*);
// double type의 배열을 받는다.


int main_p10() {

    double arr1[5] = { 10, 13, 12, 7, 8 };

    printf("Avg = %f\n", average2(arr1, arr1 + 5));
    // arr1 = 배열명 = 배열의 첫번째 요소의 주소 = &arr1[0]
    // arr1+5 : arr1의 주소는 arr1+4까지만 있기 때문에
    //          end에 arr1+5를 넣는다는 것은 전체를 돌기 위해서

    return 0;
}
// 어제는 배열 원소의 갯수를 넘겨줬는데,
// 이렇게 포인터 2개를 이용해서 똑같은 결과를 얻을 수 있다.
double average2(double* start, double* end) {

    // int cnt = 0; // 꼭 사용하지 않아도 된다.
    int cnt = end - start;  // 주소 - 주소 가능 

    double avg = 0.0;

    while (start < end) {
        avg += *start++;
        // cnt++;
    }
    avg /= (double)cnt;

    return avg;
}