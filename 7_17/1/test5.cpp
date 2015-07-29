#include <iostream>
using namespace std;
#define MAXC 256

int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{
		cout << "#testcase" << (itr+1) << endl;
		char str[100002] = {};

		
		char stack1[10000] = {0};
		int top = 0;

		cin >> str;
		
		int n = 0;
		while(str[++n]){};
		
		int numchar[MAXC] = {0};

		for(int i = 0; i < n; i++){
			numchar[str[i]]++;
		}
		
		int sum = 1;
		for(int i = 0; i < MAXC; i++){
			//cout << numchar[i] << " " ;
			if(numchar[i])
				sum *= numchar[i]+1;
		}
		cout << sum-1 << endl;
	}
	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
}