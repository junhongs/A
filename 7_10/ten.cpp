/*

VCPP, GPP에서 사용

*/

#include <iostream>
using namespace std;


int ten_to_two(int n)
{
	if(n == 0) return 0;
	ten_to_two( n / 2);
	cout << n % 2; 
	return 0;
}


int ten_main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;
		int n;
		cin >> n;
		ten_to_two(n);
	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}