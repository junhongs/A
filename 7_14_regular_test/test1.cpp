/*

VCPP, GPP���� ���

*/

#include <iostream>
using namespace std;
int maina()
{

	int nCount;		/* ������ �׽�Ʈ ���̽� */
	
	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;
		
		char str[51][51] = {};

		int n,m;
		
		cin >>n >> m;

		for(int i = 0; i < n; i++)
			cin >> str[i];

		//for(int i = 0; i < n; i++)
			//cout << str[i] << endl;

		int sum = 'f' + 'a' + 'c' + 'e';
		int mul = 'f' * 'a' * 'c' * 'e';
		int noface = 0;
//		cout << "mul"<<mul <<endl <<"sum"<< sum << endl;
		for(int i = 0; i < n-1; i++)
			for(int j = 0; j < m-1; j++)
				if(str[i][j] + str[i+1][j] + str[i][j+1] + str[i+1][j+1] == sum)
					if(str[i][j] * str[i+1][j] * str[i][j+1] * str[i+1][j+1] == mul)
						noface++;

		cout << noface << endl;
		
	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}