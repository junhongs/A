
#include <iostream>
using namespace std;
int main()
{

	int nCount;		/* ������ �׽�Ʈ ���̽� */

	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;




		while(1){
			char str[22] = {0};
			cin >> str;
			if(str[0] == 'E' && str[1] == 'N' && str[2] == 'D' && str[3] == 0)
				break;

			
			int n = 0;
			while(str[++n]);
			for(int i = n-1; i >= 0; i--){
				cout << str[i];
			}
			cout << endl;
		}
		/*

		�˰����� ���� �κ�

		*/

	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}