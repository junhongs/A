#include <iostream>
using namespace std;
int main()
{

	int nCount;		/* ������ �׽�Ʈ ���̽� */

	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;

		int n[10002] = {};

		int num = 0, max = 0;;

		cin >> num;
		int sum = 0;
		for(int i = 0; i < num; i++){
			cin >> n[i];
			sum += n[i];
			if(sum > max) max = sum;
			if(n[i] < 0){
				sum = 0;
			}
		}

		cout << max << endl;

		
		
	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}