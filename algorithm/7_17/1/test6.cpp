
#include <iostream>
using namespace std;
int main()
{

	int nCount;		/* ������ �׽�Ʈ ���̽� */

	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;

		int tem[100001] = {0};
		int temres[100001] = {0};
		int n,k;
		cin >> n >> k;
		
		for(int i = 0; i < n; i++){
			cin >> tem[i];
		}
		int max = 0;
		for(int i = k-1; i < n; i++){
			int tmp = 0;
			for(int j = 0; j < k; j++){
				tmp += tem[i-j];
			}
			temres[i] = tmp;
			if(max < tmp)
				max = tmp;
		}
		cout << max << endl;

	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}