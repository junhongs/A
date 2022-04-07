#include <iostream>
using namespace std;
int m = 0;
int money[200] = {};
int n;
int main(){
	int nCount;		/* 문제의 테스트 케이스 */
	cin >> nCount;	/* 테스트 케이스 입력 */
	for(int itr=0; itr<nCount; itr++){
		cout << "#testcase" << (itr+1) << endl;

		cin >> n; m = 0;
		for(int i = 3; i <= n+3; i++){
			if(i != n+3) cin >> money[i];
			m += money[i];
			money[i] += ((money[i-1] > money[i-2]) ? ((money[i-2] > money[i-3]) ? money[i-3] : money[i-2]) : ((money[i-1] > money[i-3]) ? money[i-3] : money[i-1]));
		}
		cout << m - money[n+3] << endl;
	}
	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
}
