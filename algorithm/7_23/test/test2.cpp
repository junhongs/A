#include <iostream>
using namespace std;
int main(){
	int nCount;		/* ������ �׽�Ʈ ���̽� */
	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */
	for(int itr=0; itr<nCount; itr++){
		cout << "#testcase" << (itr+1) << endl;
		int D1[10010] = {};
		int num = 0;
		int stairs[10010] = {};
		int *stair = &stairs[4];
		int *D = &D1[4];
		cin >> num;

		for(int i = 0; i < num; i++){
			cin >> stair[i];
		}
		
		int max = 0;
		for(int i = 0; i <= num; i++){
			//for(int i = 0; i < num; i++){
				//D[i] = D[i-1] + stair[i];
			//cout << "stair is:" << stair[i] << "  and i is " << i;
			D[i] = stair[i] + ((D[i-1] < D[i-2]) ? ((D[i-1] < D[i-3]) ? D[i-1] : D[i-3] ) : ((D[i-2] < D[i-3]) ? D[i-2] : D[i-3]));
			//cout << "  D is" << D[i] << endl;

			//}
		}
		/*for(int i = 0; i <= num; i++){
			cout << D[i] << " ";
		}*/
		cout<< D[num] << endl;
	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}