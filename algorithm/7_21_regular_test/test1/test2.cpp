#include <iostream>
using namespace std;
#define MAXSIZE 100
int main()
{

	int nCount;		/* ������ �׽�Ʈ ���̽� */

	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;

		int map[MAXSIZE][MAXSIZE] = {0};
		int nop = 0; // number of paper

		cin >> nop;
		while( nop--){
			int x,y;
			cin >> x >> y;
			for(int i = x; (i < x+10) ; i++ ){
				for( int j = y ; (j < y+10) ; j++)
				{
					if( (i >= MAXSIZE) || (i < 0) || (j < 0) || (j >= MAXSIZE))
						continue;
					if(!map[i][j]) map[i][j] = 1;
				}
			}
		}
		int sum = 0;
		for(int i = 0; i <MAXSIZE; i++ ){
			for( int j =0; j < MAXSIZE; j++)
			{
				if(map[i][j]) sum++;
			}
		}
		cout << sum << endl;
	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}