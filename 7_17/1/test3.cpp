#include <iostream>
using namespace std;
int main()
{

	int nCount;		/* ������ �׽�Ʈ ���̽� */

	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;
		int x,y;
		cin >> x >> y;
		int sot = 6; // size of tile
		cout << (x / sot) * (y / sot) << " ";
		if(!(x%sot) && !(y%sot))
			cout << "0" << endl;
		else if((x%sot) && (y%sot))
			cout << y / sot + x / sot + 1 << endl;
		else 
			cout << ((x%sot) ? (y / sot) : 1) + ((y % sot) ? (x / sot) : 1) - 1 << endl;

	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}