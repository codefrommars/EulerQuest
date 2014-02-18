#include <stdio.h>

#define MAX 	350
#define POT 	1000
#define BASE 	2
int main(){
	int dig[MAX];
	
	for(int i = 0; i < MAX; i++)
		dig[i] = 0;
	
	//BASE^0
	dig[0] = 1;
	
	//get in the duplication cycle.
	for(int p = 0; p < POT; p++){
		int carry = 0;
		for(int i = 0; i < MAX; i++){
			//mult each digit
			dig[i] *= BASE;
			//Sum the previous carry
			dig[i] += carry;
			//calculate the new carry
			carry = dig[i] / 10;
			//set the digit
			dig[i] = dig[i] % 10;
		}
	}
	
	int sum = 0;
	for(int i = 0; i < MAX; i++){
		sum += dig[i];
	}
	
	printf("%i\n", sum);
	return 0;
}