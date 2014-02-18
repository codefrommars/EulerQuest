#include <stdio.h>

//The max number is 1000000
#define MAX_LEN 	7

int isPalindrome(int num){
	
	char c[MAX_LEN + 1];
	int len = sprintf(c, "%d", num);
	
	for(int i = 0; i < len / 2; i++)
		if( c[i] != c[len - i - 1] )
			return 0;
	
	
	return 1;
}

int main(){
	/*
	int num = 2057502;
	int l = isPalindrome(num);
	printf(" isPalindrome(%d) = %d\n", num, l);
	*/
	int m = 0;
	for(int a = 999; a > 0; a--){
		for(int b = 999; b > 0; b--){
			if( isPalindrome( a * b ) ){
				if( a * b > m )
					m = a * b;
			}
		}
	}
	printf( "%d\n", m );
	return 0;
}