/*

#include <iostream>
using namespace std;


//#define DEBUG


#ifndef DEBUG
		int relation[200][200] = {0};
#else
		int relation[200][200] = {
			{0,0,0,0,0,0,0,0,0,0},
			{0,0,1,1,0,0,0,0,0,0},
			{0,1,0,0,0,0,0,1,1,1},
			{0,1,0,0,0,0,0,0,0,0},
			{0,0,0,0,0,1,1,0,0,0},
			{0,0,0,0,1,0,0,0,0,0},
			{0,0,0,0,1,0,0,0,0,0},
			{0,0,1,0,0,0,0,0,0,0},
			{0,0,1,0,0,0,0,0,0,0},
			{0,0,1,0,0,0,0,0,0,0},
		};
#endif

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





int main_2()
{

	int nCount;		

	cin >> nCount;	

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;

		

#ifdef DEBUG
		nop = 9;
#else
		cin >> nop;
#endif

		int relat_1,relat_2;

#ifdef DEBUG
		relat_1 = 7;		
		relat_2 = 3;
#else
		cin >> relat_1 >> relat_2;
#endif

		int nor = 0;



#ifdef DEBUG
		nor = 7;
#else
		cin >> nor;
#endif

		int chon_1,chon_2;
		int tmp = nor;
		while( nor-- ){
#ifndef DEBUG
			cin >> chon_1 >> chon_2;
			relation[chon_1][chon_2] = relation[chon_2][chon_1] = 1;
#endif
		}

#ifdef DEBUG
		for(int i = 1; i <= nop; i++){
			for(int j = 1; j <= nop; j++)
				cout << relation[i][j];
			cout << endl;
		}
#endif


		find(relat_1,relat_2,1);

#ifdef DEBUG
		cout << endl;
		for(int i = 1; i<= nop;i++)
			cout << rel[i];
		cout << endl;
#endif

		cout << rel[relat_2] - 1 << endl;


	}
	return 0;
}

*/