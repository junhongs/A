#include <iostream>
using namespace std;

void select_char(char *str,int maxN,int *n){
	if(strlen(str) == maxN){
		int sum = 0;
		int lastsum = sum;
		int n1[10] = {};
		memcpy(n1,n,sizeof(n1));
		for(int i = 0; i < maxN; i++){
			if(str[i] == ' '){
				n1[i+1] = n1[i+1] + n1[i] * 10;
				n1[i] = 0;
			}
		}
		int i = 0;
		while(!n1[i]) i++;
		sum = n1[i];
		for(int i = 0; i <maxN; i++){
			if(str[i] == '+'){
				while(!n1[i+1]) i++;
				sum += (n1[i+1]);
			}
			else if(str[i] == '-'){
				while(!n1[i+1])	i++;
				sum -= (n1[i+1]);
			}
		}
		if(!sum){
			cout << n[0];
			for(int i = 0; i < maxN; i++)
				cout << str[i] << n[i+1];
			cout << endl;
		}
		return;
	}
	
	char str1[10] = {};
	strcpy(str1,str);strcat(str1," ");select_char(str1,maxN,n);
	strcpy(str1,str);strcat(str1,"+");select_char(str1,maxN,n);
	strcpy(str1,str);strcat(str1,"-");select_char(str1,maxN,n);
}

int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;

		int n[10] = {1,2,3,4,5,6,7,8,9};
		char m[10] = {};


		int a = 0;
		cin >> a;
		select_char(m,a-1,n);
		

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}











//
//void select_char(char *str,int maxN,int *n){
//	
//	if(strlen(str) == maxN){
//		cout << str << endl;
//
//		int sum = n[0];
//		int lastsum = sum;
//		int n1[10] = {};
//		memcpy(n1,n,sizeof(n1));
//
//
//		for(int i = 0; i < maxN; i++){
//			if(str[i] == ' '){
//				n[i+1] = n[i+1] + n[i] * 10;
//				n[i] = 0;
//			}
//
//		}
//
//		for(int i = 0; i <maxN; i++){
//			if(str[i] == '+'){
//				while(!n[i+1])
//					i++;
//				sum += (n[i+1]);
//			}
//			else if(str[i] == '-'){
//				while(!n[i+1])
//					i++;
//				sum -= (n[i+1]);
//			}
//
//		}
//
//		cout << sum << endl;
//
//
//		return;
//	}
//	
//	char str1[10] = {};
//	
//
//	
//
//	strcpy(str1,str);strcat(str1,"+");
//	select_char(str1,maxN,n);
//
//	strcpy(str1,str);strcat(str1,"-");
//	select_char(str1,maxN,n);
//
//	strcpy(str1,str);strcat(str1," ");
//	select_char(str1,maxN,n);
//
//}