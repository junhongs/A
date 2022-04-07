#include <iostream>
using namespace std;


typedef struct data{

	data(int _n,int _first, struct data *_next){
		n = _n;
		f = _first;
		next = _next;
	}

	int n;
	int f;
	struct data *next;

}data;

data *PP[300010];
data *BB[300010];
int P[300010] = {};
int B[300010] = {};


void merge(data **arr,int start,int mid,int end,data **arr_buf){
	int i0 = start,i1 = mid+1;
	for(int i = start; i<= end; i++){
		if( i0 <= mid && ( i1 > end || arr[i0]->n > arr[i1]->n ))
			arr_buf[i] = arr[i0++];
		else
			arr_buf[i] = arr[i1++];
	}
}

void merge_sort(data **arr,int start, int end, data **arr_buf){
	if(start == end) return;
	int mid = (start + end) / 2;
	 
	merge_sort(arr,start,mid,arr_buf);
	merge_sort(arr,mid+1,end,arr_buf);
	merge(arr,start,mid,end,arr_buf);

	for(int i =start; i <= end; i++)
		arr[i] = arr_buf[i];
}


int main(){
	int nCount;		/* 문제의 테스트 케이스 */
	cin >> nCount;	/* 테스트 케이스 입력 */
	for(int itr=0; itr<nCount; itr++){
		cout << "#testcase" << (itr+1) << endl;
		int N; cin >> N;

		for(int i = 0; i < N; i++){
			cin >> P[i];
			PP[i] = new data(P[i],0,0);
			if(i)
				PP[i-1]->next = PP[i];
		}
		data *first = PP[0];


		/*data *tmp = PP[0];
		PP[0] = PP[1];
		PP[1] = tmp;*/


		merge_sort(PP,0,N-1,BB);
		
		int last_score = 0;
		int last_f = 0;
		for(int i = 0; i < N; i++){
			if(last_score==PP[i]->n)
				PP[i]->f = last_f;
			else
				PP[i]->f = i + 1;
			
			last_score = PP[i]->n;
			last_f = PP[i]->f;
		}

		for(int i = 0; i < N; i++){

			
			cout << first->f << endl;
			first = first->next;
		}


	}

	return 0;

}


