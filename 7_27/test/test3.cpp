#include <iostream>
using namespace std;


void merge(int *arr,int start,int mid,int end,int *arr_buf){
	
	int i0 = start,i1 = mid+1;

	for(int i = start; i<= end; i++){

		if( i0 <= mid && (arr[i0] > arr[i1] || i1 > end ))
			arr_buf[i] = arr[i0++];
		else
			arr_buf[i] = arr[i1++];

	}

}

void merge_sort(int *arr,int start, int end, int *arr_buf){
	if(start == end) return;
	int mid = (start + end) / 2;

	merge_sort(arr,start,mid,arr_buf);
	merge_sort(arr,mid+1,end,arr_buf);
	merge(arr,start,mid,end,arr_buf);

	for(int i =start; i <= end; i++)
		arr[i] = arr_buf[i];
		

}

typedef struct data{
	data(int a,int b, int _tilt,int n){ x = a; y = b; tilt = _tilt; is_tilted = n;}
	int x;
	int y;
	int tilt;
	int is_tilted;
}

int main(){
	int nCount;		
	cin >> nCount;	
	for(int itr=0; itr<nCount; itr++){
		cout << "#testcase" << (itr+1) << endl;

		int nop; cin >> nop; // number of point
		int x[200] = {};
		int y[200] = {};
		data *point[200];
		data *miny = new data(10001,10001,0,0);
		int min_index = 0;
		for(int i = 0; i < nop; i++){
			cin >> x[i] >> y[i];
			point[i] ->x = x[i];
			point[i] ->y = y[i];
			if(miny->y > y[i]){
				miny = point[i];
				min_index = i;
			}
		}

		data *tmp = point[min_index];
		point[min_index] = point[0];
		point[0] = tmp;

		for(int j = 0; j < nop; j++){
			for(int i = 0; i < nop; i++){
				point[i]->x - point[]
			}
		



	}

	return 0;	

}