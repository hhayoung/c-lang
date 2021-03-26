#include <stdio.h>
#define FENDLEN 50
/* 구조체를 함수의 매개 변수로 전달 */

//struct fortune {
//	char bank_name[FENDLEN];
//	double bank_saving; 
//	char fund_name[FENDLEN];
//	double fund_invest;
//};
//
//double sum(double, double);

//int main()
//{
//	struct fortune my_fortune = {
//		"시티은행",
//		1000.25,
//		"JP모건",
//		500.10
//	}; 
//	// 저축 금액과 펀드 금액을 합산하여 출력하시오.
//	printf("Total : $%.2f \n", sum(my_fortune.bank_saving, my_fortune.fund_invest));
//	return 0;
//}
//
//double sum(double x, double y)
//{
//	return x + y;
//}

//////////////////////////////////////아래는 포인터를 이용해서 전달.
struct fortune {
	char bank_name[FENDLEN];
	double bank_saving;
	char fund_name[FENDLEN];
	double fund_invest;
};

//double sum(double* x, double* y);
//
//int main()
//{
//	struct fortune my_fortune = {
//		"시티은행",
//		1000.25,
//		"JP모건",
//		500.10
//	};
//	// 저축 금액과 펀드 금액을 합산하여 출력하시오.
//	printf("Total : $%.2f \n", sum(&my_fortune.bank_saving, &my_fortune.fund_invest));
//
//	return 0;
//}
//
//double sum(const double *x, const double *y)
//{
//	// 실수로 *x, *y의 값은 변경할 수 있으므로 const 반드시 붙여준다.
//	return *x + *y;
//}


//////////// 구조체 전체를 전달하는 방식
double sum(struct fortune my_fortune);
int main_09()
{
	struct fortune my_fortune = {
		"시티은행",
		1000.25,
		"JP모건",
		500.10
	};
	// 저축 금액과 펀드 금액을 합산하여 출력하시오.
	printf("Total : $%.2f \n", sum(my_fortune)); 
	return 0;
}


double sum(struct fortune my_fortune)
{
	return my_fortune.bank_saving + my_fortune.fund_invest;
}