#include <stdio.h>

int main_flf()
{
	float radius = 10.0;
	//double area;
	float area;

	area = 3.14f * radius * radius; 
	// area�� 3.14�� ��� float���� ������ Ŀ���� ������ warning�� ���
	printf("�������� %f�� ���� ���̴� %lf �Դϴ�. \n", radius, area);
	return 0;
}