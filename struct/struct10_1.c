#include <stdio.h>

/* union ����ϱ� */

struct personal_owner { // �ֹι�ȣ(Resident Registration Number) : 123456-1234567
	char rrn1[7];
	char rrn2[8];
};

struct company_owner { // ���ι�ȣ(Company Registration Number) : 123-12-12345
	char crn1[4];
	char crn2[3];
	char crn3[6];
};

union data {
	struct personal_owner po;
	struct company_owner co;
};

struct car_data {
	char model[15];
	int status; // 0 : personal(���μ���), 1 : company(���μ���)
	union data owner_info;
};

void print_car(struct car_data car) {
	printf("---------------------------------\n");
	printf("Car model : %s\n", car.model);
	
	if (car.status == 0) {
		printf("Personal owner : %s-%s\n", car.owner_info.po.rrn1, car.owner_info.po.rrn2);
	}
	else {
		printf("Company owner : %s-%s-%s\n", car.owner_info.co.crn1, car.owner_info.co.crn2, car.owner_info.co.crn3);
	}
	printf("---------------------------------\n");

}

int main() {

	struct car_data my_car = { .model = "�ƹݶ�", .status = 0, .owner_info.po = {"870422","1234567"} };
	struct car_data company_car = { .model = "���׽ý�", .status = 1, .owner_info.co = {"123","12","45678"} };


	print_car(my_car);
	print_car(company_car);

	return 0;
}

/* 
	����ü ��� ���� : ����ü�� ������� �ٸ��� ������ 
	����ü�� ���� ������ ������ �Ҵ�ް�, ����ü�� ��� ������ ���� ������ ���������ν�
	�޸� ������ ����ȴ�. 
*/