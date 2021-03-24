#include <stdio.h>

// double average(double arr[5]);
// double average(double *arr);
double average(double arr[], int n);

int main_p9() {

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
    printf("arr1 Avg = %f\n", average(arr1, sizeof(arr1) / sizeof(arr1[0])));
    printf("arr2 Avg = %f\n", average(arr2, sizeof(arr2) / sizeof(arr2[0])));
    // arr2[3]으로 바꾸고 나서는 엉뚱한 값 출력
    // 3개 요소밖에 없는데 함수에서는 총 5번 돌기 때문에

    return 0;
}
/*******
함수에서 배열을 매개변수로 받을 때는 배열로 받는 것이 아니라
포인터로 받는다.
그래서 매개변수의 arr[5]의 5는 아무 의미가 없다.
효율성 측면을 생각해서 배열은 포인터로 받도록 되어 있다.
(실제로 배열로 받기가 힘들다..
? 배열이 수만개, 수억개가 있다면 그걸 다 복사? -> 비효율적
변수는 값을 복사해서 넘기지만 배열은 복사가 되지 않는다.(복사하다가 시간 다 감-> 포인터를 이용해서 그 주소 자체를 받아야 함))
함수에 주소자체를 보내줘야 함 -> arr[5]가 아니라 *arr로
arr[5] 이렇게 적는다고 해도 실제는 arr의 주소가 넘어가는 것이다.
그래서 뒤에 넣는 숫자는 아무 의미가 없는 값
*******/

// 여기서 arr[]은 배열이 아니라 포인터로 전환되었다고 생각해야함.
// 즉, 배열 공간의 첫번째 주소가 전달된 것이어서 원소의 갯수를 따로 전달해 주어야 한다.
double average(double arr[], int n) {
    printf("average 함수 안 Size = %zd\n", sizeof(arr));
    // visual studio에서는 4 출력. 나는 8 출력
    // 배열 size인 40이 찍히지 않는 이유?
    // 배열 자체가 넘어온 것이 아니라 배열의 주소값이 넘어온 것이기 때문에 
    // 32비트의 경우에는 최대 4바이트가 출력되고, 64비트의 경우에는 최대 8바이트 출력. 
    // (배열의 크기가 아니라 배열의 주소의 크기)

    double avg = 0.0;
    for (int i = 0; i < n; i++) {
        avg += arr[i];
    }
    avg /= (double)n;

    return avg;
}