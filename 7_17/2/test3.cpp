#include <iostream>
using namespace std;
int main()
{

	int nCount;	
	cin >> nCount;
	for(int itr=0; itr<nCount; itr++){
		cout << "#testcase" << (itr+1) << endl;

		char a[100] = {},b[100] = {};
		cin >> a >> b;

		char a_max[100] = {},a_min[100] = {};
		char b_max[100] = {},b_min[100] = {};

		for(int i = 0; i < strlen(a);i++)
			if( a[i] == '5' )
				a[i] = '6';
		strcpy(a_max,a);

		for(int i = 0; i < strlen(a);i++)
			if( a[i] == '6' )
				a[i] = '5';
		strcpy(a_min,a);

		for(int i = 0; i < strlen(b);i++)
			if( b[i] == '5' )
				b[i] = '6';
		strcpy(b_max,b);

		for(int i = 0; i < strlen(b);i++)
			if( b[i] == '6' )
				b[i] = '5';
		strcpy(b_min,b);

		cout << atoi(a_min) + atoi(b_min) << " ";
		cout << atoi(a_max) + atoi(b_max) << endl;

	}

	return 0;
}