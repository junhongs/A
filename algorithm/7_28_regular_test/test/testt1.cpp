/*

VCPP, GPP에서 사용

*/

#include <iostream>
using namespace std;

int isPrime(int n){

	int prime = 1;
	if(n <= 1) return 0;
	for( int i = 2; i * i <= n; i++){
	//for( int i = 2; i < n; i++){
		
		if( !(n % i) ){
			prime = 0;
		}

	}

	return prime;
	
}


int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;
		char arr[10001] = {};
		int asc[256] = {};
		cin >> arr;
		
		int ind = 0;
		while(arr[ind]){
			asc[ arr[ind++] ]++;
		}

		int noPrime = 1;
		for(int i = 0; i < 256; i++){
			if(asc[i]){
				if(isPrime(asc[i])){
					cout << (char)i; 
					noPrime = 0;
				}
			}
		}
		if(noPrime)
			cout <<  "NONE"; 
		cout << endl;


	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}