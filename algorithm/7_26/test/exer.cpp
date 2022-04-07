#include <iostream>
using namespace std;

int change[21]= {};
int cache[10010][21] = {};
int return_money(int money,int i,int maxN){
	

	if(!money){ return 1;}
	if(i == maxN) return 0;
		
	int mul = 0,ret = 0;

	if(cache[money][i]) return cache[money][i];

	while(money - mul* change[i] >= 0){
		ret += return_money(money - (mul++) * change[i] , i+1,maxN);
	}

	cache[money][i] = ret;
	return ret;
}
//
//int n = 0;
//void return_money(int money,int i,int maxN){
//	
//
//	if(!money){ n++; return;}
//	if(i == maxN) return;
//		
//	int mul = 0;
//	while(money - mul* change[i] >= 0){
//		//cout << money - (mul) * change[i] << "and" << i << endl;
//		return_money(money - (mul++) * change[i] , i+1,maxN);
//	}
//}

int main(){
	int nCount;		/* 문제의 테스트 케이스 */
	cin >> nCount;	/* 테스트 케이스 입력 */
	for(int itr=0; itr<nCount; itr++){
		cout << "#testcase" << (itr+1) << endl;

		int num;
		cin >> num;
		
		for(int i = num-1; i >= 0; i--){
			cin >> change[i];
		}
		
		int money;
		cin >> money;

		memset(cache,0,sizeof(cache));

		int tmp=0, last_tmp=0;
		int sum = 0;

		cout << return_money(money,0,num) << endl;



	}
	return 0;	/* 반드시 return 0으로 해주셔야합니다. */
}






/*
#include <iostream>
using namespace std;

int change[21]= {};
int cache[10010][21] = {};
int return_money(int money,int i,int maxN){
	

	if(!money){ return 1;}
	if(i == maxN) return 0;
		
	int mul = 0,ret = 0;

	if(cache[money][i]) return cache[money][i];

	while(money - mul* change[i] >= 0){
		ret += return_money(money - (mul++) * change[i] , i+1,maxN) %1000000007;
	}
	ret %= 1000000007;
	cache[money][i] = ret;
	return ret ;
}

int main(){
	int nCount;		
	cin >> nCount;	
	for(int itr=0; itr<nCount; itr++){
		cout << "#testcase" << (itr+1) << endl;

		int num;
		cin >> num;
		
		for(int i = num-1; i >= 0; i--){
			cin >> change[i];
		}
		
		int money;
		cin >> money;
		
		if(itr+1 > 4) continue;

		memset(cache,0,sizeof(cache));

		int tmp=0, last_tmp=0;
		int sum = 0;

		cout << return_money(money,0,num) << endl;
	}
	return 0;
}

*/



#include <stdio.h>

int n;
int array[10000];
int array2[2][10000];

int main()
{

	int itr;
	int nCount;		/* 문제의 테스트 케이스 */

	scanf("%d", &nCount);	/* 테스트 케이스 입력 */

	for(itr=0; itr<nCount; itr++)
	{

		printf("#testcase%d\n",itr+1);

		scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		scanf("%d", &array[i]);
	}
	
	array2[0][0]=array2[1][0]=0;
	array2[0][1]=array[1];
	array2[1][1]=0;
	for(int i=2; i<=n; i++){
		if(array2[0][i-2]>array2[1][i-2]){
			array2[0][i]=array2[0][i-2]+array[i];
		}else{
			array2[0][i]=array2[1][i-2]+array[i];
		}
		array2[1][i]=array[i]+array2[0][i-1];
	}
	
	if(array2[0][n]>array2[1][n]){
		printf("%d", array2[0][n]);
	}else{
		printf("%d", array2[1][n]);
	}
	printf("\n");

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}