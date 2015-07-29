//#include <iostream>
//using namespace std;
//
//int createdBug[1000001]; // 최대 N까지 사용하므로 +1
//
//int main()
//{
//
//	int nCount;		/* 문제의 테스트 케이스 */
//
//	cin >> nCount;	/* 테스트 케이스 입력 */
//
//	for(int itr=0; itr<nCount; itr++)
//	{
//
//		cout << "#testcase" << (itr+1) << endl;
//
//		int a,b,d,N,sum=0,startIndex;
//		createdBug[0] = 1;
//		cin >> a >> b >> d >> N;
//
//
//		for(int i =1; i<=N; i++){
//			cout << sum << " ";
//			if(i-b+1 < 0){
//				if(i-a >= 0)sum += createdBug[i-a];
//			}
//			else sum += createdBug[i-a]-createdBug[i-b];
//
//			createdBug[i] = sum%1000;
//
//			cout << createdBug[i] << endl;
//		}
//		sum = 0;
//		startIndex = N-d;
//
//		if(startIndex < 0) startIndex = 0;
//
//		for(int i =N; i > startIndex ; i--){
//			sum += createdBug[i];
//			cout << "?"<<sum << endl;
//		}
//
//		cout << sum%1000 << endl;
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
//
//}




/*

 VC, GCC에서 사용

 */
#pragma warning(disable:4996)

#include <iostream>
using namespace std;
 long long count = 1;
int i = 0;
int dp[1000005] = { 0, };

int gcd(int a, int b) { return b ? gcd(b, a%b) : a; }

int main()
{
	gcd(999999999999999999,1);
	return 0;
	int itr;
	int nCount;		/* 문제의 테스트 케이스 */

	scanf("%d", &nCount);	/* 테스트 케이스 입력 */

	for (itr = 0; itr<nCount; itr++)
	{

		printf("#testcase%d\n", itr + 1);
		//초기화

		memset(dp, 0, sizeof(dp));
		int start;
		int finish;
		int die, t;
		long long day;
		count = 1;
		i = 0;
		dp[i] = 1; // 초기 값 - ans[0] = 1
		int cnt = 0; // 요번에 생긴 애들의 개수

		scanf("%d %d %d %lld", &start, &finish, &die, &day);

		//문제 풀이
		for (int i = 1; i <= day; i++){
			dp[i] = dp[i - 1];
			if (i - start >= 0){
				dp[i] += dp[i - start];
			}
			if (i - finish >= 0){
				dp[i] -= dp[i - finish];
			}
			dp[i] = dp[i] % 1000;
			cout << dp[i] << endl;
		}
		printf("%d\n", (dp[day] - dp[day- die] + 2000) % 1000);



		//출력

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */

}