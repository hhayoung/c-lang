#include <stdio.h>

// 제어문 연습
// 알파벳 출력하기
int main_alpha() {

	char s_ch, ch;

	// 아스키값으로 z=122 -> a=97까지
	for (s_ch = 'z'; s_ch >= 'a'; s_ch--) {
		// 행의 앞부분을 공백 처리
		for (ch = 'a'; ch < s_ch; ch++) {
			printf(" ");
		}
		// 공백 뒤에 s_ch부터 'z'까지 출력
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