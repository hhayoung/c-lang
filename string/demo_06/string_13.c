#include <stdio.h>

int main(int argc, char* argv[]) {

	/*  ���� �μ�
		
		int argc : �����ٿ� �ִ� ���ɾ���� ����(�����Լ��� ���޵Ǵ� ������ ����)
		char *argv[] : �����Լ��� ���޵Ǵ� �������� ������, �� ������ �迭�� �����Ѵ�.
						���ڿ��� ������, ���ڿ��� �ּҸ� �����ϴϱ� ����������
						�迭�� ù��° �ε����� ������ �����η� �����Ǿ� �ִ�.
		���� ���,
		a.exe ������ �����Ű�µ� �Ű������� �־��ְ� ���� ����
		cmd���� ������ �� $a.exe hello world��� �ߴٸ�
		argc = 3
		argv[0] = a.exe
		argv[1] = hello
		argv[2] = world

		�̷� ������ �����Ʃ������� �����Ϸ��� 
		������Ʈ ��Ŭ�� -> �Ӽ� -> ����뿡 ����
		���� �μ��� �־��ְ� ������ �ϸ� �ȴ�.
	*/

	int count;
	printf("�����ٿ� %d���� �μ��� �ֽ��ϴ�.\n", argc);

	for (count = 0; count < argc; count++) {
		printf("Arg %d : %s\n", count, argv[count]);
	}
	printf("\n");


	/* ������ ���ڿ��� ���ڷ� ��ȯ�ϴ� �Լ� 
		
		atoi() : ������ ���ڿ��� integer�� ��ȯ
		atof() : ������ ���ڿ��� double�� ��ȯ
		atol() : ������ ���ڿ��� long���� ��ȯ
	*/

	if (argc < 3) {
		printf("Wrong usage of %s\n", argv[0]);
	}
	else {
		int times = atoi(argv[1]);

		for (int i = 0; i < times; i++) {
			puts(argv[2]);
		}

		// ���ϴ� ����
		// �����μ��� ���� ���ڴ� ���ڿ��̱� ������ atoi�� ���ڷ� ��ȯ
		printf("Sum = %d\n\n", atoi(argv[1]) + atoi(argv[2]));
		/*
			���� ���, �ٸ� ���� c������ ����Ϸ��� �Ѵٸ�
			���� 2���� ���ϴ� ������ c���Ϸ� ����� �� ����
			���̽㿡�� ���ڷ� ���� 2���� ���� �Բ� c������ �����ϸ� �ȴ�.
		*/

		/* ������ �̿��� ���ڿ��� ���ڷ� ��ȯ�ϴ� �Լ���
			
			strtol() : ���ڿ��� long������ ��ȯ
			strtoul() : ���ڿ��� unsigned long������ ��ȯ
			strtod() : ���ڿ��� double������ ��ȯ
		*/

		char str1[] = "1234Hello";

		char* end;

		/*
			strtol() : ���� ���ڿ��� long�� ���ڷ� ��ȯ�ϰڴ�.(��ȯ�Ϸ��� ������ ������ �� �ִ�)
			str1�� ���鼭 "1234" 10���� ���ڿ� ���ٰ� 
			10���� ���ڿ��� �ƴ� "Hello"�� ������ ���� 
			�� �ּ�(������)�� end�� �ּҷ� �Ѱ���
			"Hello"�� �ּ�(������)�� ���� �ֱ� ������ ���������Ϳ��� ����Ұ���. 
			�׷��� �������� �ּҸ� ������ �� �ִ� ���������� &end �� ����
		*/
		long lon = strtol(str1, &end, 10);
		/* &end �� ���� ������
		 
			end�� �ּ�(&end)�� 100�̶�� �ϸ�,
			&end�� ����Ű�� ���� "Hello"
			"Hello"�� ���ڿ��̱� ������ �����ʹ�.

			"Hello"�� �ּҰ� 10�̶�� �ϸ�,
			10������ ����Ű�� �� = 'H'

			�׷��� ������ ���������Ϳ��� �Ѵ�.
		*/

		// �����ͺ����� %s�� ������ �� �ּҺ��� �� ��ȸ�ؼ� �� ��. 
		// *end�� 'H' -> �̰� int�� �ϴϱ� 72(�ƽ�Ű��)
		printf("%s, %ld %s %d \n", str1, lon, end, (int)*end);


		// 16������ ���� 
		char str2[] = "29FFHello";
		lon = strtol(str2, &end, 16);

		printf("%s, %ld %s %d \n", str2, lon, end, (int)*end);

	}

	return 0;
}