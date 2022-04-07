#include <iostream>
using namespace std;

char map[100][100] = {};

int orderw[100][100] = {};

int first = 0;
int last = 0;
int queue[10000] = {};
int dequeue(){ if(first == last) return -1; int tmp = queue[last++]; queue[last-1] = 0; return tmp; }
void enqueue(int n){ queue[first++] = n; }

int main(){
	int nCount = 1;
	cin >> nCount;
	for(int itr=0; itr<nCount; itr++){
				cout << "#testcase" << (itr+1) << endl;
		
		
		memset(map,0,sizeof(map));
		memset(orderw,0,sizeof(orderw));

		int startx,starty = 1;
		int end_p = 0;
		int n=0,m=0;
		first = 0;
		last = 0;
		cin >> n;
		cin >> m;
		startx = n;
		end_p = m;
		
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin >> map[i][j];
			}
		}

		//int order = 0;
		//if(map[startx][starty] == '1' )
			//map[startx][starty] = 0;
		if(map[startx][starty] == '0' )
			orderw[startx][starty] = 1;


		enqueue(startx * 100 + starty);
		while(orderw[startx][starty])
		{



/*
			for(int i = 1; i <= n; i++){
				for(int j = 1; j <= m; j++)
					cout << (int)map[i][j] <<"  ";
				cout << endl;
			}
			
10
5 5
00110
00010
00110
00000
01011
10 20
10001000100000100010
10101010101010101010
10101010101010101010
10101010101010101010
10101010101010101010
10101010101010101010
10101010101010101010
10101010101010101010
10101010101010101010
00100010000010001000


			*/

			int tmp = dequeue();
			if(tmp == -1)
				break;
			startx = tmp / 100;
			starty = tmp % 100;
			int order = orderw[startx][starty];
			if( map[startx+1][starty] == '0' ){ enqueue( (startx+1)*100 + starty); map[startx+1][starty] = 1;	orderw[startx+1][starty] = order+1;	}
			if( map[startx-1][starty] == '0' ){ enqueue( (startx-1)*100 + starty); map[startx-1][starty] = 1;	orderw[startx-1][starty] = order+1;	}
			if( map[startx][starty+1] == '0' ){ enqueue(	startx*100 + starty+1); map[startx][starty+1] = 1; orderw[startx][starty+1] = order+1;	}
			if( map[startx][starty-1] == '0' ){ enqueue(	startx*100 + starty-1); map[startx][starty-1] = 1; orderw[startx][starty-1] = order+1;	}
		
			
			/*
			cout <<"ORDER:"<< order << endl;
			for(int i = 1; i <= n; i++){
				for(int j = 1; j <= m; j++)
				//	cout << (int)map[i][j] <<"  ";
					printf("%3d",orderw[i][j]);
				cout << endl;
			}
			cout << endl;
			*/


		}

		if(orderw[1][end_p] == 0 )
			cout << "-1" << endl;
		else
			cout << (int)orderw[1][end_p] << endl;


	}
	return 0;
}