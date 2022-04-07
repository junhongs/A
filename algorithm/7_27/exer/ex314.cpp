/*

VCPP, GPP에서 사용

*/

#include <iostream>
using namespace std;
int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;

		int D[100010] = {1};
		int N; cin >> N;


		for(int i = 0; i <= N; i++){
			if(i+1<=N) D[i+1]+=D[i] % 20141009;
			if(i+3<=N) D[i+3]+=D[i] % 20141009;
			if(i+4<=N) D[i+4]+=D[i] % 20141009;
					}

		cout << D[N] % 20141009 << endl;

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}