#include <iostream>
using namespace std;

//nt t,f;


int recurse_tf(int n,int num, int t,int f, char *st)
{
	char str[100];
	strcpy(str,st);
	if(t == num) return cout << str << endl && 1 ;
	if(f >= num) return 0;
	n?t++:f++;
	strcat(str,n?"o":"x");
	recurse_tf(1,num,t,f,str) ? 
		0 :	recurse_tf(0,num,t,f,str);
	return 0;
}


int amain(){
	int n = 3;
	char str[100] = {};
	recurse_tf(1,n,0,0,str);
	recurse_tf(0,n,0,0,str);
	return 0;
}


int win_main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;
		int n;
		char str[100] = {};
		cin >> n;

		recurse_tf(1,n,0,0,str);
		recurse_tf(0,n,0,0,str);
		
	}

	return 0;

}