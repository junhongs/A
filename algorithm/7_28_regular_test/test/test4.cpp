/*

VCPP, GPP에서 사용

*/

#include <iostream>
using namespace std;
#define SWAP(a,b) {int tmp = a; a = b; b = tmp;}
void permutation(char *str1,int curCase,int maxCase){


	char str[100] = {};

	int i = 0; while(str[i++] = str1[i] );
	
	if(curCase == maxCase){
		cout << str << endl;
		return;
	}


	for(int i = curCase; i < maxCase; i++){
		if(str[i] == str[curCase] && i != curCase)
			continue;
		SWAP(str[curCase],str[i]);	
		permutation(str,curCase+1,maxCase);
		
	}

	

}

int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;

		
		char str[102];
		cin >> str;
		
		int n = 0; while(str[++n]);


		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(str[i] < str[j])
					SWAP(str[i],str[j]);
			}
		}

		permutation(str,0,n);

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}