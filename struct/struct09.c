#include <stdio.h>
#define FENDLEN 50
/* ����ü�� �Լ��� �Ű� ������ ���� */

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
//		"��Ƽ����",
//		1000.25,
//		"JP���",
//		500.10
//	}; 
//	// ���� �ݾװ� �ݵ� �ݾ��� �ջ��Ͽ� ����Ͻÿ�.
//	printf("Total : $%.2f \n", sum(my_fortune.bank_saving, my_fortune.fund_invest));
//	return 0;
//}
//
//double sum(double x, double y)
//{
//	return x + y;
//}

//////////////////////////////////////�Ʒ��� �����͸� �̿��ؼ� ����.
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
//		"��Ƽ����",
//		1000.25,
//		"JP���",
//		500.10
//	};
//	// ���� �ݾװ� �ݵ� �ݾ��� �ջ��Ͽ� ����Ͻÿ�.
//	printf("Total : $%.2f \n", sum(&my_fortune.bank_saving, &my_fortune.fund_invest));
//
//	return 0;
//}
//
//double sum(const double *x, const double *y)
//{
//	// �Ǽ��� *x, *y�� ���� ������ �� �����Ƿ� const �ݵ�� �ٿ��ش�.
//	return *x + *y;
//}


//////////// ����ü ��ü�� �����ϴ� ���
double sum(struct fortune my_fortune);
int main_09()
{
	struct fortune my_fortune = {
		"��Ƽ����",
		1000.25,
		"JP���",
		500.10
	};
	// ���� �ݾװ� �ݵ� �ݾ��� �ջ��Ͽ� ����Ͻÿ�.
	printf("Total : $%.2f \n", sum(my_fortune)); 
	return 0;
}


double sum(struct fortune my_fortune)
{
	return my_fortune.bank_saving + my_fortune.fund_invest;
}