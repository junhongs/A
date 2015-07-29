#include <iostream>
using namespace std;

int yes = 0;

void dfs(char (*M)[102],int x,int y, int max ){

	if( !M[x][y] ) return;

	if(M[x][y] == '0'){
		yes = 1;
		return;
	}
	int value = M[x][y]-'0';
	//cout << x << "," << y << "," << value << endl;;
	

	//M[x][y] = 0;

	if(x+value < max ) dfs(M,x+value,y,max);
	if(y+value < max ) dfs(M,x,y+value ,max);

}


int main(){
	int nCount;		/* 문제의 테스트 케이스 */
	cin >> nCount;	/* 테스트 케이스 입력 */
	for(int itr=0; itr<nCount; itr++){
		cout << "#testcase" << (itr+1) << endl;
		yes = 0;
		int N = 0;

		cin >> N;
		char M[102][102] = {};
		for(int i = 0; i < N ; i++)
			for(int j = 0; j < N ; j++)
				cin >> M[i][j];

		dfs(M,0,0,N);
		if(yes) cout << "YES" << endl; else cout << "NO" << endl; 

	}
	return 0;
}