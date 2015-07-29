#include <iostream>
using namespace std;

#define SWAP(a,b){int tmp;tmp = a; a = b; b = tmp;}

int combi(char *str1,int j, int n,int max){
	char str[100] = {};
	strcpy(str,str1);
	if( j == n ){
		str[n] = 0;
		char fin[30] = {0};
		memset(fin,'0',max);
		for(int i = 0; i < n; i++){
			fin[str[i] - '0'] = '1';
		}
		fin[max] = 0;
		cout  <<fin << endl;
		return 0;
	}
	for(int i = j; i < max; i++){
		SWAP(str[j],str[i]);
		if( i != 0 )
			if( (str[j] < str[j-1]) )
				continue;
		combi(str,j+1,n,max);
	}
}
int test3_main(){
	int nCount;		
	cin >> nCount;	
	for(int itr=0; itr<nCount; itr++){
		char str[100] = {0};
		cout << "#testcase" << (itr+1) << endl;
		int n,k;
		cin >> n >> k;
		int tmp = n;
		while(tmp--)
			str[tmp] = tmp + '0';
		
		combi(str,0,k,n);
	}
	return 0;
}