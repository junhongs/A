#include <iostream>
using namespace std;
int lomg = 0;
void dfs(int (*str)[102],int x,int y){
	str[x][y] = 0;
	if( str[x+1][y] ) dfs(str,x+1,y);
	if( str[x-1][y] ) dfs(str,x-1,y);
	if( str[x][y+1] ) dfs(str,x,y+1);
	if( str[x][y-1] ) dfs(str,x,y-1);
}


int main(){
	int nCount;		/* 문제의 테스트 케이스 */
	cin >> nCount;	/* 테스트 케이스 입력 */
	for(int itr=0; itr<nCount; itr++){
		cout << "#testcase" << (itr+1) << endl;
		int lom;//line of matrix
		cin >> lom;
		lomg = lom;
		int str[102][102] = {0};
		int tmp = 0;
		int max_level = 0,max_res = 0;
		for(int i = 1; i <= lom;i++){
			for(int j = 1; j <= lom;j++){
				cin >> str[i][j];
				if(str[i][j] > max_level)
					max_level = str[i][j];
			}
		}
		for(int level = 1; level < max_level; level++){
			int n = 0;
			int str1[102][102];
			memcpy(str1,str,sizeof(str));
			for(int i = 1; i <= lom; i++){
				for(int j = 1; j <= lom; j++){
					str1[i][j] = (str1[i][j] >= level) ? 1 : 0;
				}
			}
			for(int i = 1; i <= lom; i++){
				for(int j = 1; j <= lom; j++){
					if(str1[i][j]){ 
						dfs(str1,i,j);
						n++;
						if(max_res < n) max_res = n;
					}
				}
			}
		}
		cout << max_res << endl;
	}
	return 0;
}