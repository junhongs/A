#include <iostream>
using namespace std;

int cache[10010][2] = {};

int return_stair(int *stair,int curStair, int lastJump){
	if(curStair <= 0) return 0;


	int &ret = cache[curStair][lastJump];
	if(ret)
		return ret;

	ret = return_stair(stair,curStair-2,2);
	if(lastJump == 2){
		int tmp = return_stair(stair,curStair-1,1);
		if(ret < tmp)
			ret = tmp;
	}
	ret += stair[curStair];
	return ret;
}

int main()
{

	int nCount;		/* ������ �׽�Ʈ ���̽� */

	cin >> nCount;	/* �׽�Ʈ ���̽� �Է� */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;
		memset(cache,0,sizeof(cache));
		int nos; cin >> nos; // number of stairs

		int stair[10010] = {};
		for(int i = 1; i <= nos; i++){
			cin >> stair[i];
		}


		cout << return_stair(stair,nos,2) << endl;


	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}
  