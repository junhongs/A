#include <iostream>
using namespace std;
int main()
{

	int nCount;		/* ������ �׽�Ʈ ���̽� */

	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;


		int noc = 0; // number of content
		int content[101] = {0};

		cin >> noc;

		for(int i = 0; i < noc; i++){
			
			cin >> content[i];
		}


#define SWAP(a,b) {int tmp = a; a = b; b = tmp;}

		for(int i = 0; i < noc; i++){
			for(int j = 0; j < noc; j++){
				if( content[i] < content[j] )
					SWAP( content[i] , content[j] )
			}
		}



		for(int i = 0; i < noc; i++){
			cout << content[i] << " ";
		}
		cout << endl;
		
		

	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}