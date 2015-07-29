/*

VCPP, GPP에서 사용

*/

#include <iostream>
using namespace std;

typedef struct data{
	data(int _x,int _y,int _a){
		x = _x;
		y = _y;
		a = _a;

	}
	int x;
	int y;
	int a;
};
data *P[10000];
int min_x = 1000,min_y = 1000;
int max_x = 0,max_y = 0;



int noa = 0;

int find_ag(int (*M)[102], int x, int y){
	int a,b;

	M[x][y] = 0;

	if(x+y < min_x + min_y){
		min_x = x; min_y = y;
	}

	if(x+y > max_x + max_y){
		max_x = x; max_y = y;
	}

	a = x+1;b = y;
	if(M[a][b]) find_ag(M,a,b);

	a = x-1;b = y;
	if(M[a][b]) find_ag(M,a,b);

	a = x;b = y+1;
	if(M[a][b]) find_ag(M,a,b);

	a = x;b = y-1;
	if(M[a][b]) find_ag(M,a,b);

	return 1;
}

int start_find_ag(int (*M)[102], int x, int y){
	min_x = 1000,min_y = 1000;
	max_x = 0,max_y = 0;



	if(M[x][y]){ 
		int ret = find_ag(M,x,y);
		
		int ax = max_x - min_x + 1;
		int ay = max_y - min_y + 1;
		P[noa] = new data(ax,ay,ax*ay);
		noa++;
		//cout <<"x:" << ax<< " y:"<< ay << endl;

		return ret;
	}
	else return 0;
}


int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;


		

		int N; cin >> N;
		int M[102][102] = {};
		for(int i = 1; i <= N; i++){
			for(int j = 1; j <= N; j++){
				cin >> M[i][j];
//				cout << M[i][j];
			}
		}
		
		
		noa = 0;
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				start_find_ag(M,i,j);
			}
			//cout << endl;
		}

		


		for(int i = 0; i < noa; i++){
			for(int j = 0; j < noa; j++){
				if( P[i]->a < P[j]->a){
					data *tmp = P[i];
					P[i] = P[j];
					P[j] = tmp;
				}
				else if(  (P[i]->a == P[j]->a) && ( P[i]->x < P[j]->x)){
					data *tmp = P[i];
					P[i] = P[j];
					P[j] = tmp;
				}
			}
		}

		cout << noa;
		for(int i = 0; i < noa; i++){
			cout <<" " << P[i]->x<< " "<< P[i]->y;
		}
		cout << endl;


		

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}