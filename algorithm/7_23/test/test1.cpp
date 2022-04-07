#include <iostream>
using namespace std;
int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;

		int n[10002] = {};

		int num = 0, max = 0;;

		cin >> num;
		int sum = 0;
		for(int i = 0; i < num; i++){
			cin >> n[i];
			sum += n[i];
			if(sum > max) max = sum;
			if(n[i] < 0){
				sum = 0;
			}
		}

		cout << max << endl;

		
		
	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}