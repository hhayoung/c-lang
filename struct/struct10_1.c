#include <stdio.h>

/* union 사용하기 */

struct personal_owner { // 주민번호(Resident Registration Number) : 123456-1234567
	char rrn1[7];
	char rrn2[8];
};

struct company_owner { // 법인번호(Company Registration Number) : 123-12-12345
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
	int status; // 0 : personal(개인소유), 1 : company(법인소유)
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

	struct car_data my_car = { .model = "아반떼", .status = 0, .owner_info.po = {"870422","1234567"} };
	struct car_data company_car = { .model = "제네시스", .status = 1, .owner_info.co = {"123","12","45678"} };


	print_car(my_car);
	print_car(company_car);

	return 0;
}

/* 
	공용체 사용 이유 : 구조체와 사용방법은 다를게 없지만 
	구조체는 각각 변수가 공간을 할당받고, 공용체는 모든 변수가 같은 공간을 공유함으로써
	메모리 공간이 절약된다. 
*/