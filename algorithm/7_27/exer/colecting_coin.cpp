#include <iostream>

using namespace std;

int cache[101][5001];

int Func(int M, int *B, int C){
   if(M == 0)
      return 1;

   if(C-1 < 0)
      return 0;

   int &ret = cache[C][M];

   if(ret != -1)
      return ret;

   if(M-B[C-1] < 0){
      ret = Func(M, B, C-1);
      return ret;
   }

   ret = 0;
      
   ret = Func(M-B[C-1], B, C)%1000000007;
   ret = ret%1000000007 + Func(M, B, C-1)%1000000007;

   return ret%1000000007;
}

int main(){

		int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;


			  int M; // 환전 급액
			  int C; // 동전의 갯수

			  cin >> M >> C;

			  int *B = new int[C];

			  for(int j=0; j<C; j++)
				 cin >> B[j];
      
			  for(int j=0; j<=100; j++){
				 for(int k=0; k<=5000; k++){
					cache[j][k] = -1;
				 }
			  }


			  cout <<  Func(M, B, C) << endl;

	}

   return 0;
}