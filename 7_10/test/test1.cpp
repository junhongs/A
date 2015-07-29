/*

VCPP, GPP에서 사용

*/

#include <iostream>
using namespace std;



int change(int n, int num)
{
	if(n == 0) return 0;
	change( n / num,num);
	
	if( n % num > 9){
		cout << (char)(n % num - 10 + 'A');
	}
	else
		cout << n % num; 
	return 0;
}


int test1_main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;
		int n,num;
		cin >> n;
		cin >> num;
		change(n,num);
		cout << endl;
	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}