#include <stdio.h>

#define MAX 	200
#define N		100

int main(){
	int dig[MAX];
	
	for(int i = 0; i < MAX; i++)
		dig[i] = 0;
	
	dig[0] = 1;
	
	//get in the duplication cycle.
	for(int n = 2; n <= N; n++){
		int carry = 0;
		for(int i = 0; i < MAX; i++){
			//mult each digit
			dig[i] *= n;
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