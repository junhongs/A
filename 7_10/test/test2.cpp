#include <iostream>

using namespace std;

int recursive_n(int n){
	if(!n) return 0;
	recursive_n(n-1);cout << n;recursive_n(n-1);
	return 0;
}



int test2_main()
{
	int nCount = 0;		/* ������ �׽�Ʈ ���̽� */
	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */
	for(int itr=0; itr<nCount; itr++)
	{
		cout << "#testcase" << (itr+1) << endl;
		
		
		int i = 0,j=1;
		cin >> i;

		recursive_n(i);
		cout << endl;
		//cout << str << endl;
		/*

		�˰����� ���� �κ�

		*/

	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}
