///*
//
//VCPP, GPP에서 사용
//
//*/
//
//#include <iostream>
//using namespace std;
//int main(){
//	int nCount;
//	cin >> nCount;
//	for(int itr=0; itr<nCount; itr++){
//		cout << "#testcase" << (itr+1) << endl;
//		int noc = 0; // number of coin
//		int change[22] = {0};
//		int money[10010] = {0};
//		int maxMoney = 0;
//		cin >> noc;
//		for(int i = 0; i < noc; i++) cin >> change[i];
//		cin >> maxMoney;
//		money[0] = 1;
//		for(int i = 0; i < noc; i++){
//			for(int j = 0; j <= maxMoney; j++){
//				if(j - change[i] >= 0){
//					money[j] += money[j - change[i]];
//					money[j] %= 1000000007;
//				}
//				
//			}
//		}
//
//		cout << money[maxMoney] << endl;
//
//	}
//	return 0;
//}

/*

VC, GCC에서 사용

*/

#include <stdio.h>

int im[10010] = { 0 };
int arr[10010] = { 0 };
int ha[150], val[150];
int n, pay;

int main()
{

	int itr;
	int nCount;		/* 문제의 테스트 케이스 */
	int i, j,k;
	scanf("%d", &nCount);	/* 테스트 케이스 입력 */

	for (itr = 0; itr<nCount; itr++)
	{

		printf("#testcase%d\n", itr + 1);

		scanf("%d %d", &n, &pay);

		for (i = 1; i <= n; i++)
			scanf("%d %d", &ha[i], &val[i]);

		for (i = 1; i <= n; i++)
		{
			for (j = ha[i]; j <= pay; j++)
			{
				if (im[j] < arr[j - ha[i]] + val[i])
					im[j] = arr[j - ha[i]] + val[i];
			}

			for (k = 1; k <= pay; k++)
				arr[k] = im[k];
		}

		printf("%d\n", arr[pay]);

		for (i = 1; i <= pay; i++)
			im[i] = arr[i] = 0;

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */

}