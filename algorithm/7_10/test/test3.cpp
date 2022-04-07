#include <iostream>

using namespace std;


char map[100][100] = {};
int gain[100][100] = {};

int change_xy(int *x,int *y,char c)
{
	switch(c)
	{
	case 'N' :
#ifdef DEBUG 
		cout << c << endl;
#endif
		(*y)--;
		break;
	case 'E' :
#ifdef DEBUG 
		cout << c << endl;
#endif
		(*x)++;
		break;
	case 'S' :
#ifdef DEBUG 
		cout << c << endl;
#endif
		(*y)++;
		break;
	case 'W' :
#ifdef DEBUG 
		cout << c << endl;
#endif
		(*x)--;
		break;
	}
	if(gain[*y][*x])
		return gain[*y][*x];
	return 0;
}

void find_way(int r,int c,int start_loc)
{
	int x=0,y=0,i;
	y = 0;
	x = start_loc - 1;
	int num = 0;
	while(1){
		int n;
		if( n=change_xy(&x,&y,map[y][x]) ){
			if(n == 1)
				cout << n-1 << " 1step(s) before a loop of " << num+1-n << " step(s)" << endl;
			else
				cout << n << " 2step(s) before a loop of " << num+1-n << " step(s)" << endl;
			return;
		}

		gain[y][x] = ++num;
		if( x < 0 || y < 0 || x >= c || y >= r ){break;}
		
	}
	cout << num << " step(s) to exit" << endl;
}

int main()
{

	int itr;
	int nCount;		/* 문제의 테스트 케이스 */

	scanf("%d", &nCount);	/* 테스트 케이스 입력 */

	for(itr=0; itr<nCount; itr++)
	{
		printf("#testcase%d\n",itr+1);

		int start_loc = 5;
		int r=3,c=6;
		memset(gain,0,sizeof(gain));
		memset(map,0,sizeof(map));
	
		cin >> r >> c >> start_loc;
		
		for(int i = 0; i < r; i++ )
			for(int j = 0; j < c; j++ )
				cin >> map[i][j];

		find_way(r,c,start_loc);



		for(int i = 0; i < r; i++ )
			cout << map[i] <<endl;;
		cout << endl;


		for(int i = 0; i < r; i++ ){
			for(int j = 0; j < c; j++ )
				cout << gain[i][j] <<" ";
			cout << endl;
		}
	}
	return 0;
}
