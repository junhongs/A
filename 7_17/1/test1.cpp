/*

VCPP, GPP���� ���

*/

#include <iostream>
using namespace std;
int main()
{

	int nCount;		/* ������ �׽�Ʈ ���̽� */

	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;


		int nos = 0;
		cin >> nos;

		int square = 0;
		cin >> square;
		int is_odd = square % 2;


		int sum = 0;
		int mental[102] = {};
		for( int i = 0; i < nos; i++){
			cin >> mental[i];
			
			if(is_odd && mental[i] > 0){
				int mul = 1;
				for(int j = 0; j < square; j++)
					mul *= mental[i];
				sum += mul;
			}
			else if(!is_odd){
				//cout << i << "," << mental[i] << "  even" <<endl;
				int mul = 1;
				for(int j = 0; j < square; j++){
					mul *= mental[i];
					//cout << "sum is :: " << sum<<endl;
				}
				sum += mul;
			}
		}
		cout << sum << endl;
		/*

		�˰����� ���� �κ�

		*/

	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}