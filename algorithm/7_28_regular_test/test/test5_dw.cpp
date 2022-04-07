#include <stdio.h>
#define SIZE 12

int map[SIZE][SIZE];
int check[SIZE];
int n;
int min;

void dfs(int i,int sum, int cnt){
	if(cnt == n){
		if(min > sum + map[i][0]){
			min = sum + map[i][0];
		}
		return;
	}
	else{
		for(int j=0;j<n;j++){
			if(check[j] == 0 && i != j){
				if(min > sum + map[i][j]){
					check[i] = cnt;
					dfs(j, sum + map[i][j], cnt + 1);
					check[i] = 0;
				}
			}
		}
	}
}

int main()
{

	int itr;
	int nCount;		/* 문제의 테스트 케이스 */
	int i,j;
	scanf("%d", &nCount);	/* 테스트 케이스 입력 */

	for(itr=0; itr<nCount; itr++)
	{
		min = 2147483647;

		printf("#testcase%d\n",itr+1);

		scanf("%d",&n);

		for(i=0;i<SIZE;i++){
			for(j=0;j<SIZE;j++){
				map[i][j] = 0;
				
			}
		}

		for(i=0;i<SIZE;i++){
			check[i] = 0;
		}

		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&map[i][j]);
			}
		}

		//check[0] = 0;

		dfs(0, 0 , 1);
		printf("%d\n",min);
	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}

/*

0 14 4 10 20
14 0 7 8 7
4 5 0 7 16
11 7 9 0 2
18 7 17 4 0

*/