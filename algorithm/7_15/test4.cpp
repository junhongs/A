/*

VCPP, GPP���� ���

*/

#include <iostream>
using namespace std;


int relation[100001] = {};

int main()
{

	int nCount;		/* ������ �׽�Ʈ ���̽� */

	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;
		memset(relation,0,sizeof(relation));
		int nop = 0,nor = 0;
		cin >> nop >> nor;
		int tmp = nor;
		int a,b;
		int order = 1;
		while(tmp--)
		{
			
			cin >> a >> b;
			if(relation[a] && relation[b] && relation[a] != relation[b]){
				//small
				int tmp_1 = ( relation[a] < relation[b] ) ? relation[a] : relation[b];

				//big
				int tmp_3 = ( relation[a] > relation[b] ) ? relation[a] : relation[b];
				int tmp_2 = nop;
				while(tmp_2--)
					if(relation[tmp_2] == tmp_3)
						relation[tmp_2] = tmp_1;
			}
			else
				if(!relation[a]) relation[a] = order;
				else order--;
				if(!relation[b]) relation[b] = order;
				else if( (relation[b] != relation[a]) )order--;


			
			int tmpa = nop;
			int i = 1;
			while(tmpa--)
				cout << relation[i++]<<" ";
			cout << "," << order << endl ;
			
			order++;

		}

		int noz = 0;
		for(int i = 1; i <= nop; i++)
			if(!relation[i])
				noz++;

		cout << order + noz - 1 << endl;
		
	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}