#include <iostream>
using namespace std;
int n[70000] = {0};
int main_1(){
	for( int i = 10; i > 0; i--){
		n[10-i] = i;
	}
	
	int length = 0;
	while(1)
		if(!n[length++]) break;
	length--;
	
	for(int i = 0; i < length;i++){
		for(int j = 0; j < length;j++){
			if(n[i] < n[j])
				n[i] ^= n[j] ^= n[i] ^= n[j];
		}
	}
	
	
	
	for( int i = 0; i < length; i++){
		cout << n[i] << endl;
	}



	return 0;
}


/*

VCPP, GPP에서 사용

*/

int main_test1(){
	int nCount;		/* 문제의 테스트 케이스 */
	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{
		cout << "#testcase" << (itr+1) << endl;

		int num = 0;
		cin  >> num;

		int mode = 0;
		cin >> mode;

		for(int i = 0; i < num; i++){
			cin >> n[i];
		}
		
		int length = 0;
		while(1) if(!n[length++]) break;
		length--;
	
		for(int i = 0; i < length;i++){
			for(int j = 0; j < length;j++){
				if(n[i] < n[j] && !mode)
					n[i] ^= n[j] ^= n[i] ^= n[j];
				else if(n[i] > n[j] && mode)
					n[i] ^= n[j] ^= n[i] ^= n[j];
				
			}
		}
		

		for( int i = 0; i < length; i++){
			cout << n[i] << endl;
		}

	}

	return 0;
}