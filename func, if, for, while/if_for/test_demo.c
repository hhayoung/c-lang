#include <stdio.h>

// ��� ����
// ���ĺ� ����ϱ�
int main_alpha() {

	char s_ch, ch;

	// �ƽ�Ű������ z=122 -> a=97����
	for (s_ch = 'z'; s_ch >= 'a'; s_ch--) {
		// ���� �պκ��� ���� ó��
		for (ch = 'a'; ch < s_ch; ch++) {
			printf(" ");
		}
		// ���� �ڿ� s_ch���� 'z'���� ���
		for (ch = s_ch; ch <= 'z'; ch++) {
			printf("%c", ch);
		}
		printf("\n");
	}

	return 0;
}
/*
						 z
						yz
					...
				qrstuvwxyz
			   pqrstuvwxyz
			  opqrstuvwxyz
			 nopqrstuvwxyz
			mnopqrstuvwxyz
		   lmnopqrstuvwxyz
		  klmnopqrstuvwxyz
		 jklmnopqrstuvwxyz
        ijklmnopqrstuvwxyz
       hijklmnopqrstuvwxyz
      ghijklmnopqrstuvwxyz
     fghijklmnopqrstuvwxyz
    efghijklmnopqrstuvwxyz
   defghijklmnopqrstuvwxyz
  cdefghijklmnopqrstuvwxyz
 bcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
*/