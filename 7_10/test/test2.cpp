#include <iostream>

using namespace std;

int recursive_n(int n){
	if(!n) return 0;
	recursive_n(n-1);cout << n;recursive_n(n-1);
	return 0;
}



int test2_main()
{
	int nCount = 0;		/* 문제의 테스트 케이스 */
	cin >> nCount;	/* 테스트 케이스 입력 */
	for(int itr=0; itr<nCount; itr++)
	{
		cout << "#testcase" << (itr+1) << endl;
		
		
		int i = 0,j=1;
		cin >> i;

		recursive_n(i);
		cout << endl;
		//cout << str << endl;
		/*

		알고리즘이 들어가는 부분

		*/

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}
