#include <iostream>
using namespace std;

typedef struct data{
	data(int _x,int _y,int _n){
		x = _x;
		y = _y;
		n = _n;
	}
	int x;
	int y;
	int n;
}data;

data *queue[10000];
int first = 0;
int last = 0;
void enqueue( data *equeue){if(!equeue) queue[first++] = NULL;else queue[first++] = new data(equeue->x,equeue->y,equeue->n);}
data *dequeue(){if(first == last) return NULL;return queue[last++];}
void initqueue(){first = 0;last = 0;}


typedef struct data_p{
	data_p(int _x,int _y,int _n){
		x = _x;
		y = _y;
		n = _n;
	}
	int x;
	int y;
	int n;
}data_p;

data_p *queue_p[10000];
int first_p = 0;
int last_p = 0;

void initqueue_p(){first_p = 0;last_p = 0;}
void enqueue_p( data_p *equeue){if(!equeue) queue_p[first_p++] = NULL;else queue_p[first_p++] = new data_p(equeue->x,equeue->y,equeue->n);}
data_p *dequeue_p(){if(first_p == last_p) return NULL;return queue_p[last_p++];}




int main(){
	int nCount;		/* 문제의 테스트 케이스 */
	cin >> nCount;	/* 테스트 케이스 입력 */
	for(int itr=0; itr<nCount; itr++){
		cout << "#testcase" << (itr+1) << endl;

		initqueue();initqueue_p();
		int column, row; cin >> row >> column;

		char map[100][100] = {};
		for(int i = 1; i <= row; i++){
			for(int j = 1; j <= column; j++){
				cin >> map[i][j];
				if(map[i][j] == '*') 
					enqueue(new data(i,j,0));
				if(map[i][j] == 'S') 
					enqueue_p(new data_p(i,j,0));
			}
		}
		enqueue(NULL);
		enqueue_p(NULL);
		
		int isFinished = 0;
		int time = 0;
		int isFired = 0;
		int isLived = 0;
		while(++time){
			data *tmp;
			isFired = 0;
			while(tmp = dequeue()){
				int x = tmp->x,y = tmp->y;
				if( map[x+1][y] == '.' || map[x+1][y] == 'S' ){ map[x+1][y] = '*'; enqueue(new data(x+1,y,time));}
				if( map[x-1][y] == '.' || map[x-1][y] == 'S' ){ map[x-1][y] = '*'; enqueue(new data(x-1,y,time));}
				if( map[x][y+1] == '.' || map[x][y+1] == 'S' ){ map[x][y+1] = '*'; enqueue(new data(x,y+1,time));}
				if( map[x][y-1] == '.' || map[x][y-1] == 'S' ){ map[x][y-1] = '*'; enqueue(new data(x,y-1,time));}
			}
			enqueue(NULL);

			isLived = 0;
			data_p *tmp_p = NULL;
			while(tmp_p = dequeue_p()){
				int x = tmp_p->x,y = tmp_p->y;
				if( map[x+1][y] == '.' || map[x+1][y] == 'D' ){ 
					if(map[x+1][y] == 'D') isFinished = 1;
					map[x+1][y] = 'S'; enqueue_p(new data_p(x+1,y,time)); 
					isLived++;
				}
				if( map[x-1][y] == '.' || map[x-1][y] == 'D' ){ 
					if( map[x-1][y] == 'D' ) isFinished = 1;
					map[x-1][y] = 'S'; enqueue_p(new data_p(x-1,y,time)); 
					isLived++;
				}
				if( map[x][y+1] == '.' || map[x][y+1] == 'D' ){ 
					if(map[x][y+1] == 'D') isFinished = 1;
					map[x][y+1] = 'S'; enqueue_p(new data_p(x,y+1,time)); 
					isLived++;
				}
				if( map[x][y-1] == '.' || map[x][y-1] == 'D' ){ 
					if(map[x][y-1] == 'D') isFinished = 1;
					map[x][y-1] = 'S'; enqueue_p(new data_p(x,y-1,time)); 
					isLived++;
				}
			}
			enqueue_p(NULL);
			if(!isLived) break;

			if(isFinished) break; 
		}
		
			if(isFinished) cout << time << endl;
			else cout << "impossible" << endl;
	}
	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
}