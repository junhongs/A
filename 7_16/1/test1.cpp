#include <iostream>
using namespace std;
#define SWAP(a,b){int tmp;tmp = a; a = b; b = tmp;}
char str_con[20]= {};
int num_str = 0;
char str_min[20]= {};
char str_max[20]= {};
int listing(char str1[100], int i,int n){
	char str[20] = {};
	strcpy(str,str1);
	if(i == n-1 && ( (str[i] > str[i-1]) && str_con[i-1] || (str[i] < str[i-1]) && !str_con[i-1] ) ){ 
		//cout << str << endl;
		if(!str_min[0]) {strcpy(str_min,str);strcpy(str_max,str);}
		else if( strcmp(str_con,str) == 1) strcpy(str_min,str);
		else if( strcmp(str_con,str) == -1) strcpy(str_max,str);
		return 0;
	}
	for( int j = i; j < n ; j++){	
		SWAP(str[j],str[i])
		if( i != 0 )
			if( (str[i] < str[i-1]) && str_con[i-1] || (str[i] > str[i-1]) && !str_con[i-1] )
				continue;
		listing(str,i+1,n);
	}
	return 0;	
}


int listing_2(char *str1,int j, int n){
	char str[20] = {};
	strcpy(str,str1);
	if( j == n ){
		j--;
		if (  ( (str[j] > str[j-1]) && str_con[j-1] || (str[j] < str[j-1]) && !str_con[j-1] )){
			str[n] = 0;
			if(!str_min[0]) {strcpy(str_min,str);strcpy(str_max,str);}
			else if( strcmp(str_con,str) == 1) strcpy(str_min,str);
			else if( strcmp(str_con,str) == -1) strcpy(str_max,str);
		}
	return 0;
	}
	for(int i = j; i < 10; i++){
		SWAP(str[j],str[i]);
		if( j != 0 )
			if( (str[j] > str[j-1]) && !str_con[j-1] || (str[j] < str[j-1]) && str_con[j-1] )
			{
				continue;
			}
		listing_2(str,j+1,n);
	}
}



int test1_main(){

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;
	
		int n = 0;
		int comp_num = 0;
		cin >> comp_num;
		memset(str_min,0,sizeof(str_min));
		memset(str_max,0,sizeof(str_max));
		memset(str_con,0,sizeof(str_con));


		for(int i = 0; i < comp_num; i++)
			cin >> str_con[i];

		while(str_con[n++]){ str_con[n-1] = (str_con[n-1] == '<') ? 1 : (str_con[n-1] == '>') ? 0 : -1; }
		char str[100] = {0};
		int tmp = 10;
		while(tmp--)
			str[tmp] = tmp + '0';
		listing_2(str,0,n);
		cout << str_max<<endl<< str_min << endl ;
	}
	return 0;
}

