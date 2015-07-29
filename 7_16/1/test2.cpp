#include <iostream>
using namespace std;
int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;


		int a=0,b=0;
		cin >> a >> b;
		
		int xor = 1,and = 1;
		while(and){
			xor = a ^ b;
			and = (a & b)<< 1;
			a = xor;b = and;
		}
		cout << xor << endl;
	

		/*

		알고리즘이 들어가는 부분

		*/

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}