/*

VCPP, GPP���� ���

*/

#include <iostream>
using namespace std;
int main()
{

	int nCount;		/* ������ �׽�Ʈ ���̽� */

	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;
		int num = 0;

		cin >> num;
		int n[100000] = {};

		for(int i = 0; i < num; i++){
			cin >> n[i];
		}

		int min_abs = 9999999;
		int min = 9999999;
		int i,j;
		int x,y;
		for(i = 0; i < num; i++){
			if(n[i] > 0) continue;
			for(j = 0; j < num; j++){
				if(n[j] < 0 || j == i) continue;
				if(n[j] + n[i] < min_abs){ 
					min = n[j] + n[i]; 
					x = i; y = j; 
					cout<< min <<":::::::::"<< n[x] << ","<< n[y] << endl;
				}
			}
		}



		cout << n[x] << endl<< n[y] << endl;

	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}