#include <iostream>
using namespace std;
int main()
{
	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;

		int D1[200] = {};
		int money[200] = {};
		int n,max = 0;
		int sum = 0;
		int last_min,min = 0;
		cin >> n;
		for(int i = 3; i <= n+2; i++){
			cin >> money[i];
			max += money[i];
			last_min = min;
			min = ((money[i-1] > money[i-2]) ? ((money[i-2] > money[i]) ? i : i-2) : ((money[i-1] > money[i]) ? i : i-1)); 
			if(last_min != min)
				sum += money[min];
		}
		cout << max - sum << endl;
	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}


// 1 8 5 7 10 1 2 10 11 6