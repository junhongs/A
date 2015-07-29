#include <iostream>
using namespace std;

#define SWAP(a,b) {int tmp = a; a = b; b = tmp;}

int num_test = 0;

void permutation(int *str1, int maxCase,int curCase,int maxLimit){
	int str[10];
	memcpy(str,str1,sizeof(str));
	
	if( curCase == maxCase-1){
		num_test++;
		for(int i = 0; i <maxCase; i++){
			cout << str[i];
		}cout << endl;
		return;
	}

	for(int i = curCase; i < maxCase; i++){
		if( i > curCase+1)
			continue;
		if( i != curCase && (str[i] - '0' * 2 + str[curCase] > maxLimit) ){
			continue;}
		if( i != curCase) SWAP(str[i],str[curCase]);
		permutation(str,maxCase,curCase+1,maxLimit);
	}


}


int main(){
	int nCount;		/* 문제의 테스트 케이스 */
	cin >> nCount;	/* 테스트 케이스 입력 */
	for(int itr=0; itr<nCount; itr++){
		cout << "#testcase" << (itr+1) << endl;
			int str[10] = {};
			int maxCase = 0;
			int maxLimit = 0;
			cin >> maxCase >> maxLimit;

			for(int i = 0; i < maxCase; i++)
				cin >> str[i];

			num_test = 0;
			 
			permutation(str,maxCase,0,maxLimit);

			cout << num_test << endl;
	}
	return 0;
}