#include <iostream>
using namespace std;
#define SWAP(a,b) {int tmp = a; a = b; b = tmp;}
int gcda(int a, int b){
	for(int i = 2; i * i <= a; i++){
		if( !(a % i))
			if(!(b % i))
				return i;
	}
	return 0;
}
int main(){
	int nCount;		/* 문제의 테스트 케이스 */
	cin >> nCount;	/* 테스트 케이스 입력 */
	for(int itr=0; itr<nCount; itr++){
		cout << "#testcase" << (itr+1) << endl;
		int lcm,gcd;
		cin >> gcd >> lcm;
		

		// lcm is devided with gcd by 0
		if( (lcm % gcd) )
			continue;

		int result = lcm / gcd;

		int i,k;
		int result_a,result_b,result_min = 999999999;
		for( i= 1; i* i < result; i++){
			if( !(result % i) ){
				if(  gcda(i,(result/i)) == 0  ){
						k = i;
					int tmp= k + result / (k);
					if(tmp < result_min ){
						result_min = tmp;
						result_a = k * gcd;
						result_b = result / (k) * gcd;
					}
				}
			}
		}
		//cout << k * gcd << endl << result / (k) * gcd << endl;
		cout << result_a << " " << result_b << endl;
	}
	return 0;
}