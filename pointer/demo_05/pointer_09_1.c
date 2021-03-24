#include <stdio.h>

/*
아래의 함수 프로토타입은 모두 같은 의미이다.

double average_new(double *arr, int n);
double average_new(double *, int n);
// -> *만 선언되어 있지만, 배열이라는 것을 알 수 있다.
double average_new(double arr[], int n);
double average_new(double [], int n);
*/

// 같은 폴더안에 같은 함수 이름은 에러발생 할 수 있으므로 이름 변경
double average_new(double*, int n);

int main_p9_1() {

    double arr1[5] = { 10, 11, 12, 7, 8 };
    // double arr2[5] = {1.8, -0.2, 6.3, 13.9, 20.5};
    double arr2[3] = { 1.8, -0.2, 6.3 };

    printf("주소 = %p\n", arr1);
    printf("Size = %zd\n", sizeof(arr1)); // 8바이트 * 5개

    printf("주소 = %p\n", arr2);
    printf("Size = %zd\n", sizeof(arr2)); // 8바이트 * 5개

  /* 중복된 패턴이 2번 반복 -> 별로 안좋은 코드
    double avg = 0.0;
    for(int i=0;i<5;i++) {
      avg += arr1[i];
    }
    avg /= (double)5;
    printf("arr1의 Avg = %f\n",avg);

    double avg2 = 0.0;
    for(int i=0;i<5;i++) {
      avg2 += arr2[i];
    }
    avg2 /= (double)5;
    printf("arr2의 Avg = %f\n",avg2);
  */

  /* 하드코딩
  printf("Avg = %f\n",average_new(arr1, 5));
  printf("Avg = %f\n",average_new(arr2, 3));
  */

  /* 소프트코딩 방법 */
    printf("arr1 Avg = %f\n", average_new(arr1, sizeof(arr1) / sizeof(arr1[0])));
    printf("arr2 Avg = %f\n", average_new(arr2, sizeof(arr2) / sizeof(arr2[0])));

    return 0;
}

double average_new(double arr[], int n) {
    printf("average 함수 안 Size = %zd\n", sizeof(arr));

    double avg = 0.0;
    for (int i = 0; i < n; i++) {
        avg += arr[i];
    }
    avg /= (double)n;

    return avg;
}