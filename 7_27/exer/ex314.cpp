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

		int D[100010] = {1};
		int N; cin >> N;


		for(int i = 0; i <= N; i++){
			if(i+1<=N) D[i+1]+=D[i] % 20141009;
			if(i+3<=N) D[i+3]+=D[i] % 20141009;
			if(i+4<=N) D[i+4]+=D[i] % 20141009;
					}

		cout << D[N] % 20141009 << endl;

	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}