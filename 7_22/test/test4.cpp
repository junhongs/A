#include <iostream>
using namespace std;
#define SWAP(a,b) {int tmp = a; a = b; b = tmp;}

typedef struct data{
	int x;
	int y;
	int num;
}data;


data *stack[10000];

void insult(data *a){
	int i = 0;
	while(stack[i])

}

int count_stone = 0;

void dfs(char (*str)[102],char (*str_block)[102], int x,int y,char isBlack){

	if(str[x][y] == 0 || str[x][y] != isBlack || str_block[x][y] != 0)
		return;
	count_stone++;
	str_block[x][y] = 1;

	dfs(str,str_block,x+1,y,isBlack);
	dfs(str,str_block,x-1,y,isBlack);
	dfs(str,str_block,x,y+1,isBlack);
	dfs(str,str_block,x,y-1,isBlack);


}
int main()
{
	int nCount;		/* 문제의 테스트 케이스 */
	cin >> nCount;	/* 테스트 케이스 입력 */
	for(int itr=0; itr<nCount; itr++){

		cout << "#testcase" << (itr+1) << endl;
		int column, row;
		cin >> row >> column;
		char str[102][102] = {};
		char str_block[102][102] = {};

		for(int i = 1; i <= row; i++)
			for(int j = 1; j <=  column; j++)
				cin >> str[i][j];
		
		cout << endl;


		for(int i = 1; i <= row; i++){
			for(int j = 1; j <= column; j++)
				cout << str[i][j] << " ";
			cout << endl;
		}


		


		for(int i = 1; i <= row; i++){
			for(int j = 1; j <= column; j++){
				count_stone = 0;
				dfs(str,str_block,i,j,str[i][j]);
				if(count_stone){
					data *a = new data;
					a->num = count_stone;
					a->x = i;
					a->y = j;

					
				}
			}
		}

		cout << count_stone << endl;

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}

//5 
//1 2-3-4-5

//6
//1 2+3-4-5-6

//7
/*
1+2-3+4-5-6+7
1+2-3-4+5+6-7
1-2 3+4+5+6+7
1-2 3-4 5+6 7
1-2+3+4-5+6-7
1-2-3-4-5+6+7


		if(itr+1 == 1)
			printf("1+2-3\n");
		if(itr+1 == 2)
			printf("1-2-3+4\n");


*/