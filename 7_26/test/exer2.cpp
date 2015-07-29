//#include <iostream>
//using namespace std;
//
//
//
//int cache[101][10001];
//
//int Func(int M, int *B, int C){
//   if(M == 0)
//      return 1;
//
//   if(C-1 < 0)
//      return 0;
//
//   int &ret = cache[C][M];
//
//   if(ret != -1)
//      return ret;
//
//   if(M-B[C-1] < 0){
//      ret = Func(M, B, C-1);
//      return ret;
//   }
//
//   ret = 0;
//      
//   ret = Func(M-B[C-1], B, C)%1000000007;
//   ret = ret%1000000007 + Func(M, B, C-1)%1000000007;
//
//   return ret%1000000007;
//}
//
//int main(){
//	int nCount;		/* 문제의 테스트 케이스 */
//	cin >> nCount;	/* 테스트 케이스 입력 */
//	for(int itr=0; itr<nCount; itr++){
//		cout << "#testcase" << (itr+1) << endl;
//
//
//	      int M; // 환전 급액
//	      int C; // 동전의 갯수
//	
//	      cin >> C;
//	
//	      int *B = new int[C];
//	
//	      for(int j=0; j<C; j++)
//	         cin >> B[j];
//		  cin >> M;
//	      
//	      for(int j=0; j<=100; j++){
//	         for(int k=0; k<=10000; k++){
//	            cache[j][k] = -1;
//	         }
//	      }
//	
//	      cout << Func(M, B, C) << endl;;
//	
//	   }
//
//	return 0;
//}




#include <iostream>
using namespace std;

int change[21]= {};
int cache[10010][21] = {};
int return_money(int money,int i,int maxN){
	

	if(!money){ return 1;}
	if(i == maxN) return 0;
		
	int mul = 0,ret = 0;

	if(cache[money][i]) return cache[money][i];

	//while(money - mul* change[i] >= 0){
		ret += return_money(money , i+1,maxN) %1000000007;
	//}
		if((money - change[i] >= 0))
		ret += return_money(money - change[i] , i ,maxN) %1000000007;
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
	
		memset(cache,0,sizeof(cache));

		int tmp=0, last_tmp=0;
		int sum = 0;

		cout << return_money(money,0,num) << endl;
	}
	return 0;
}