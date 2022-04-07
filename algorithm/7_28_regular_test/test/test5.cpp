#include <iostream>
using namespace std;
#define SWAP(a,b) ( a^=b^=a^=b )

int map[20][20] = {};
int mcthemax = 0;

void permutation(char *str1,int curCase,int maxCase){


	char str[100] = {};

	int i = 0; while(str[i++] = str1[i] );
	
	if(curCase == maxCase){
		//cout << str << endl;
		return;
	}


	for(int i = curCase; i < maxCase; i++){
		if(str[i] == str[curCase] && i != curCase)
			continue;
		SWAP(str[curCase],str[i]);	
		permutation(str,curCase+1,maxCase);
		
	}

	

}



void find_way( int *wayToGo_dummy,int stair, int curPos,int maxStair, int value){


	int wayToGo[14];
	for(int i = 1; i <= maxStair; i++){
		wayToGo[i] = wayToGo_dummy[i];
	}



	if( stair == maxStair){
		cout << value << endl;
		return;
	}
	
	wayToGo[curPos] = 0;
	 
	for(int i = 1; i <= maxStair; i++){
		if( wayToGo[i] ){
			find_way(wayToGo,stair+1,i,maxStair,value+map[i][curPos]);
		}
	}
	

}
	

int main(){
	int nCount;		/* 문제의 테스트 케이스 */
	cin >> nCount;	/* 테스트 케이스 입력 */
	for(int itr=0; itr<nCount; itr++){
		cout << "#testcase" << (itr+1) << endl;
		



		int N; cin >> N;
		char str[1000] = {};

		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				cin >> map[i][j];
			}
		}
		mcthemax = 1000000000;
		char d[14] = "abcdefghijkl";
		int n[14] = {1,2,3,4,5,6,7,8,9,10,11,12};
		int i = 0, j = 1, k;
		int a = N-1;

		int sum = 0;
		while(j) if(n[i]-- != 0|| !++i){

			sum = 0;
			for(int ii = 1; ii <= N; ii++){
				int tmp = d[ii] - 'a' + 1;
				int tmp_1 = d[ii-1] - 'a' + 1;
				
				sum += map[ tmp_1 ][ tmp ];
			}

			if(mcthemax > sum)
				mcthemax = sum;

			for( SWAP( d[i-n[i]] ,d[i+1]),k = 0; i > 2 * k; k++);
			for(i-- >= a && j--; i>= 0 || (i = 0); n[i] = i-- + 1);



		}

		cout << mcthemax << endl;

/*

		int wayToGo[14] = {0}; 
		for(int i = 1; i <= N; i++){
			wayToGo[i] = i;

		}

		find_way(wayToGo,1,1,N,0);
*/



	}
	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
}