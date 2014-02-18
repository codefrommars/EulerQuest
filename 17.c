#include <stdio.h>

#define ONE			3
#define TWO 		3
#define THREE 		5
#define FOUR		4
#define FIVE		4
#define SIX			3
#define SEVEN		5
#define EIGHT		5
#define NINE		4
#define TEN			3
#define ELEVEN		6
#define TWELVE		6
#define THIRTEEN	8
#define FOURTEEN	8
#define FIFTEEN		7
#define SIXTEEN		7
#define SEVENTEEN	9
#define EIGHTEEN	8
#define NINETEEN	8
#define TWENTY		6
#define THIRTY		6
#define FORTY		5
#define FIFTY		5
#define SIXTY		5
#define SEVENTY		7
#define EIGHTY		6
#define NINETY		6
#define HUNDRED		7
#define THOUSAND	8
#define AND 		3

#define TOTAL		1000

int main(){
	int l[TOTAL + 1];
	
	for(int i = 0; i <= TOTAL; i++)
		l[i] = 0;
	
	l[1] = ONE;
	l[2] = TWO;
	l[3] = THREE;
	l[4] = FOUR;
	l[5] = FIVE;
	l[6] = SIX;
	l[7] = SEVEN;
	l[8] = EIGHT;
	l[9] = NINE;
	l[10] = TEN;
	l[11] = ELEVEN;
	l[12] = TWELVE;
	l[13] = THIRTEEN;
	l[14] = FOURTEEN;
	l[15] = FIFTEEN;
	l[16] = SIXTEEN;
	l[17] = SEVENTEEN;
	l[18] = EIGHTEEN;
	l[19] = NINETEEN;
	l[20] = TWENTY;
	l[30] = THIRTY;
	l[40] = FORTY;
	l[50] = FIFTY;
	l[60] = SIXTY;
	l[70] = SEVENTY;
	l[80] = EIGHTY;
	l[90] = NINETY;
	l[100] = ONE + HUNDRED;
	l[1000] = ONE + THOUSAND;
	
	int sum = 0;
	
	for(int i = 1; i <= TOTAL; i++){
		if( l[i] != 0 )
			continue;
			
		int u = i % 10;
		int d = ((i / 10) % 10)* 10;
		int c = (i / 100);
		
		if( d == 10 ){
			d += u;
			u = 0;
		}
		
		l[i] = l[u] + l[d] + l[c];
		
		if( c > 0 ){
			l[i] += HUNDRED;
		
			if( u + d > 0 )
				l[i] += AND;
		}
		
		printf("%i %i %i = %i\n", c, d, u, l[i]);
	}
	
	for(int i = 0; i <= TOTAL; i++){
//		printf("%i = %i\n", i, l[i]);
		sum += l[i];
	}
	
	printf("%i\n", sum);
	return 0;
}