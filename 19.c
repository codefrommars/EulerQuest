#include <stdio.h>

int ml[] = {
	31, //Jan
	28, //Feb
	31, //Mar
	30, //Apr
	31, //May
	30, //Jun
	31, //Jul
	31, //Aug
	30, //Sep
	31, //Oct
	30, //Nov
	31  //Dec
};

int nextFirst(int currFirst, int monthLenght){
	int mod = monthLenght % 7;
	return (currFirst + mod) % 7;
}

int main(){
	int first = 0; //Monday
	int counter = 0;
	
	for(int i = 1900; i <= 2000; i++){
		int leap = 0;
		if( ( i % 1000 == 0 && i % 400 == 0) || ( i % 4 == 0 ) )
			leap = 1;
		
		for(int m = 0; m < 12; m++){
			int mLen = ml[m];
			if( m == 1 )
				mLen += leap;
			
			first = nextFirst(first, mLen);
			
			if( first == 6 && i > 1900){ //sunday of the 20th century
				counter++;
			}
		}
	}
	
	printf("%i\n", counter);
	
	return 0;
}