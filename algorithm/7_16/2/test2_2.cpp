#include <iostream>
#include <string.h>

using namespace std;


int relation[200][200] = {0};
int nop = 0;
int rel[200] = {0};

int find(int n,int end,int order)
{
	rel[n] = order;
	if(n == end) return 0;
	for(int i = 1; i <= nop; i++){
		if(rel[i] == 0 && relation[n][i]){
			find(i,end,order+1);
		}
	}
}





int main_test2_2()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{
		memset(relation,0,sizeof(relation));
		memset(rel,0,sizeof(rel));
		cout << "#testcase" << (itr+1) << endl;
		nop = 0;
		cin >> nop;
		int relat_1,relat_2;
		cin >> relat_1 >> relat_2;
		int nor = 0;
		cin >> nor;
		int chon_1,chon_2;
		int tmp = nor;
		while( nor-- ){
			cin >> chon_1 >> chon_2;
			relation[chon_1][chon_2] = relation[chon_2][chon_1] = 1;
		}
		find(relat_1,relat_2,1);
		cout << rel[relat_2] - 1 << endl;
	}
	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
}