#include <iostream>
using namespace std;
int main()
{

	int nCount;		/* ������ �׽�Ʈ ���̽� */

	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;


		int a=0,b=0;
		cin >> a >> b;
		
		int xor = 1,and = 1;
		while(and){
			xor = a ^ b;
			and = (a & b)<< 1;
			a = xor;b = and;
		}
		cout << xor << endl;
	

		/*

		�˰����� ���� �κ�

		*/

	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}