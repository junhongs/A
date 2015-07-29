#include <stdio.h>
#define pause fflush(stdin), scanf("%*c")
#define swap(a,b) ((a) ^= (b), (b) ^= (a), (a) ^= (b))
int main(){
	char d[10] = { '5', '4', '3', '2', '1', '1', 'G', 'H', 'I', 'J' };
	int n[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0, j = 1, k;
	while (j){	
		if (n[i]-- != 0 || !++i){			
			
			printf("%d)%c %c %c %c %c    (%d)\n",i, d[4], d[3], d[2], d[1], d[0],n[i]);
			swap(d[i - n[i]], d[i + 1]);
			printf("   (%d,%d)   %c %c %c %c %c\n",i - n[i],i+1 ,d[4], d[3], d[2], d[1], d[0]);
			for (k = 0; i>2 * k; k++){ 
				swap(d[i - k], d[k]);
				printf("   (%d,%d)   %c %c %c %c %c\n",i - k,k, d[4], d[3], d[2], d[1], d[0]);
			}

			for(  i-- >= 4 && j--   ; i >= 0 || (i = 0)  ; n[i] = i-- + 1 );

		} // 4!을 의미한다. 
 	}
 

	pause;

	return 0;

}
