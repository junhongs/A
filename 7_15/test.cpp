#include <iostream>
using namespace std;

#define SWAP(a,b){int tmp;tmp = a; a = b; b = tmp;}


char strin[1000][100] = {};
int num_str = 0;

int listing(char str1[100], int i,int n){
	char str[100] = {};
	strcpy(str,str1);
	if(i == n-1){ 	strcpy(strin[num_str++],str); cout << str << endl; return 0;}

	for( int j = i; j < n; j++){	
		SWAP(str[j],str[i])
		listing(str,i+1,n);
	}
	return 0;	
}

int main(){
	int n = 5;
	char str[100] = {0};
	int tmp = n;
	while(tmp--)
		str[tmp] = tmp + '1';
	listing(str,0,n);

	int a = 10;
	cout << endl;
	while(a--)
		cout << strin[9-a]<<endl;
}