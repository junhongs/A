#include <iostream>
using namespace std;


typedef struct data{
	data(int _x, int _y, int _n){
		x = _x; y = _y; n = _n;
	}
	int x;
	int y;
	int n;
}data;

data *queue = new data(0,0,0);
int start = 0;
int last = 0;


void enqueue(data A){
	queue[start].x = A.x;
	queue[start].y = A.y;
	queue[start++].n = A.n;
}

data *dequeue(){
	if(start == last)
		return NULL;
	return &queue[last++];
}


int main(){
	int nCount;		/* 문제의 테스트 케이스 */
	cin >> nCount;	/* 테스트 케이스 입력 */
	for(int itr=0; itr<nCount; itr++){
		cout << "#testcase" << (itr+1) << endl;



		//data A(1,2,2);

		enqueue(data(1,2,2));

		cout << dequeue()->x << endl;

	}
	return 0;
}