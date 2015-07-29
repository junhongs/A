#include <stdio.h>
#include <iostream>
using namespace std;
#define pause fflush(stdin),scanf("%*c")

#define SWAP(a,b) ( a^=b^=a^=b )



int main(){


	char d[14] = "abcdefghijkl";
	int n[14] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int i = 0, j = 1, k;
	int a = 11;
	while(j) if(n[i]-- != 0|| !++i){

		//printf("%c %c %c %c %c %c\n",d[5],d[4],d[3],d[2],d[1],d[0]);



		for( SWAP( d[i-n[i]] ,d[i+1]),k = 0; i > 2 * k; k++);
		for(i-- >= a-1 && j--; i>= 0 || (i = 0); n[i] = i-- + 1);

	}

	cout << "asdf" << endl;
	pause;

	return 0;
	

}