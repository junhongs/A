#include <iostream>
using namespace std;
#define MAXC 256

int main()
{

	int nCount;		/* ������ �׽�Ʈ ���̽� */

	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */

	for(int itr=0; itr<nCount; itr++)
	{
		cout << "#testcase" << (itr+1) << endl;
		char str[100002] = {};

		
		char stack1[10000] = {0};
		int top = 0;

		cin >> str;
		
		int n = 0;
		while(str[++n]){};
		
		int numchar[MAXC] = {0};

		for(int i = 0; i < n; i++){
			numchar[str[i]]++;
		}
		
		int sum = 1;
		for(int i = 0; i < MAXC; i++){
			//cout << numchar[i] << " " ;
			if(numchar[i])
				sum *= numchar[i]+1;
		}
		cout << sum-1 << endl;
	}
	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 
}