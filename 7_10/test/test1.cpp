/*

VCPP, GPP���� ���

*/

#include <iostream>
using namespace std;



int change(int n, int num)
{
	if(n == 0) return 0;
	change( n / num,num);
	
	if( n % num > 9){
		cout << (char)(n % num - 10 + 'A');
	}
	else
		cout << n % num; 
	return 0;
}


int test1_main()
{

	int nCount;		/* ������ �׽�Ʈ ���̽� */

	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;
		int n,num;
		cin >> n;
		cin >> num;
		change(n,num);
		cout << endl;
	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}