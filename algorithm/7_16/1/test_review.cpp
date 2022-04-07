#include <iostream>
using namespace std;
#define SWAP(a,b) {}
void dfs(char (*str)[100], int n, int loc_x, int loc_y){
	if( str[loc_x][loc_y] > 0 && (int)str[loc_x][loc_y] < n)
		return;
	if( str[loc_x][loc_y] != 0 ){ str[loc_x][loc_y] = n;}

	if(str[loc_x+1][loc_y]) dfs( str,n+1,loc_x+1,loc_y);
	if(str[loc_x-1][loc_y]) dfs( str,n+1,loc_x-1,loc_y);
	if(str[loc_x][loc_y+1]) dfs( str,n+1,loc_x,loc_y+1);
	if(str[loc_x][loc_y-1]) dfs( str,n+1,loc_x,loc_y-1);
}


int main(){
	int nCount;
	cin >> nCount;
	for(int itr=0; itr<nCount; itr++){
		cout << "#testcase" << (itr+1) << endl;
		char map[100][100] = {0};
		int n,m = 0;
		cin >> m >> n;
		for(int i = 1; i<= n; i++ )
			for(int j = 1; j<= m; j++ ){
				int k;
				cin >> k;
				map[i][j] = -k;				
			}
		
		int x,y;
		cin >> y >> x;
		dfs(map,1,x,y);
		int max = 0;
		for(int i = 1; i<= n; i++ ){
			for(int j = 1; j<= m; j++ ){
				//cout << (int)map[i][j];
				max = max < map[i][j] ? map[i][j] : max;
				//printf("%2d",map[i][j]);
			}
			//cout << endl;
		}
		cout << max << endl;
	}
	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
}