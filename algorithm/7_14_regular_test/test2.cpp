#include <iostream>
#include <stdio.h>
using namespace std;

int gcd(int a,int b) { return b ? gcd(b, a%b) : a; }

int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;
		int a=0,b=0;
		cin >> a >> b;
		int c =	gcd(a,b);

		int d = a/c,e = b/c;
		int a1 = d / 1000;
		int a2 = d % 1000;
		int a3 = e / 1000;
		int a4 = e % 1000;

		//cout << a1 <<","<< a2 << endl;
//		cout << a3 <<","<< a4 << endl;
//		printf("%d\n",a1 * a3);


		int term2 = (a1*a4 + a2 * a3);
		int term2_l = term2 / 1000;
		int term2_r = term2 % 1000 * 1000 + a2 * a4;

		term2_l += term2_r / 1000000;
		term2_r %= 1000000;


//		printf("term2:%d    term2_r :%d\n",term2,term2_r);

		//printf("term2_l:%d \n",term2_l,term2_r);
		int rt = term2_l + a1 * a3;
		if(rt){
			printf("%d",rt);
			printf("%04d\n",term2_r);
		}
		else
			printf("%d\n",term2_r);
	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}
