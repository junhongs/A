#include <iostream>
using namespace std;

int arr[1000000] = {};

int main(){
	int nCount;		/* 문제의 테스트 케이스 */
	cin >> nCount;	/* 테스트 케이스 입력 */
	for(int itr=0; itr<nCount; itr++)	{
		cout << "#testcase" << (itr+1) << endl;
		int nof; cin >> nof; // number of fish;
		int nop; cin >> nop; // number of person;
		memset(arr,0,sizeof(arr));
		int max = 0;
		for(int i = 0; i < nof; i++){
			cin >> arr[i];
			if(max < arr[i])
				max = arr[i];
		}

		int sum = 0;
		int standard = max;
		int first = 0,end = max; 
		 
		while(1){
			sum = 0;
			for(int i = 0; i < nof; i++) 
				if(standard) 
					sum += arr[i] / standard;

			if(sum < nop)
				end = standard;
			else if(sum > nop) 
				first = standard;

			if(standard == (first + end) / 2) 
				break;

			standard = (first + end) / 2;
		}

		for(int j = standard; j < max; j++){
			sum = 0;
			for(int i = 0; i < nof; i++)
				if(j) 
					sum += arr[i] / j;
			
			if(sum < nop){
				standard = j-1;
				break;
			}
		}
		cout <<standard << endl;
	}
	return 0;
}