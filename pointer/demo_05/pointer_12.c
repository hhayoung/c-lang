#include <stdio.h>

/* const 사용 예 */

// 배열 원소(요소)를 출력하는 함수
void print_array(const int arr[], const int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//배열의 모든 요소에 값을 더해주는 함수
/*
리턴 타입이 void여도 모두 값이 바뀐다.
즉, 메모리에서 직접 처리함.
반환값이 있는 것과 같은 기능을 하게 됨.
*/
// 값을 바꾸려는 함수이기 때문에 여기서는 배열에 const 사용 불가
void add_value(int arr[], const int n, int val) {
    int i;
    for (i = 0; i < n; i++) {
        arr[i] += val;
    }
}

// 원소들의 모든 합을 구하는 함수
/*
const를 이용해서 의도한대로 동작할 수 있도록 컴파일러를 통해
에러를 확인할 수 있다.
*/
int sum(const int arr[], const int n) {
    int i;
    int total = 0;
    for (i = 0; i < n; i++) {
        // total += arr[i]++; // 개발자의 실수로 가정하고 ++를 추가
        total += arr[i]; // 에러가 뜨기 때문에 바로 고칠 수 있다.
        // 실제로는 값이 바뀌면 안된다고 할 때 const 활용
    }
    return total;
}

int main_p12() {

    int arr[] = { 1,2,3,4,5 };
    // 원소의 크기 지정하지 않으면 선언한 크기만큼 자동 지정

    const int n = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, n);
    add_value(arr, n, 10);
    print_array(arr, n);

    int tot = sum(arr, n);
    printf("arr 합계 : %d\n", tot);
    print_array(arr, n);

    return 0;
}