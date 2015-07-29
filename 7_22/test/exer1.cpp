#include <iostream>

using namespace std;

void merge(int *arr, int start,int mid, int last, int *arr_buf){
	int i0 = start; int i1 = mid + 1;
	for(int i = start; i <= last; i++){
		if(i0 <= mid && (arr[i0] < arr[i1] || i1 > last) )
			arr_buf[i] = arr[i0++];
		else
			arr_buf[i] = arr[i1++];
	}
}


void merge_sort(int *arr, int start, int last, int *arr_buf){
	if(start == last) return;
	int mid = (start + last) / 2;
	merge_sort(arr,start,mid,arr_buf);
	merge_sort(arr,mid+1,last,arr_buf);
	merge(arr,start,mid,last,arr_buf);


	for(int i = start; i <= last; i++)
		arr[i] = arr_buf[i];
}



int main()
{



	int arr[10] = {4,6,1,5,10,134,457,965,12,213};
	int arr_buf[10] = {};
#define MAXN 10
	for(int i = 0; i < MAXN; i++)
		cout << arr[i] << " ";
	
	cout << endl;
	merge_sort(arr,0,MAXN-1,arr_buf);
	

	for(int i = 0; i < MAXN; i++)
	cout << arr[i] << " ";
}

//다익스트라
