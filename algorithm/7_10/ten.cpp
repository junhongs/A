/*

VCPP, GPP���� ���

*/

#include <iostream>
using namespace std;


int ten_to_two(int n)
{
	if(n == 0) return 0;
	ten_to_two( n / 2);
	cout << n % 2; 
	return 0;
}


int ten_main()
{

	int nCount;		/* ������ �׽�Ʈ ���̽� */

	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;
		int n;
		cin >> n;
		ten_to_two(n);
	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}