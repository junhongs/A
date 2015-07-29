#include <iostream>

using namespace std;

int D[102][102] = {};

int dfs(char (*M)[102],int x,int y, int N){
	if(!M[x][y]) return 0;
	if(x == 1 && y == 1) return M[1][1] - '0';
	
	int &ret = D[x][y];
	if(ret) return ret;

	int t1 = dfs(M,x-1,y,N);
	int t2 = dfs(M,x,y-1,N);
	ret = ((t1 > t2) ? t1 : t2) + (M[x][y] - '0');
	return ret;
}

int main(){
	int N; cin >> N;
	char M[102][102] = {};


	int L[102][102] = {};
	int I[102][102] = {};

	/*for(int i = 1; i <= N; i++)
		for(int j = 1; j <= N; j++)
			cin >> M[i][j];
	cout << dfs(M,N,N,N) <<  endl;*/
	
	for(int i = 1; i <= N; i++)
		for(int j = 1; j <= N; j++)
			cin >> L[i][j];
	I[1][1] = L[1][1];
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= N; j++){
			if( I[i+1][j] < I[i][j] + L[i+1][j] )
				I[i+1][j] = I[i][j] + L[i+1][j];
			if( I[i][j+1] < I[i][j] + L[i][j+1] )
				I[i][j+1] = I[i][j] + L[i][j+1];


		}
	}

	cout << I[N][N] << endl;
}
