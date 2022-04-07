#include <iostream>

using namespace std;

int good = 1;


int chan[10][10] =
{

	{0,1,2,-1},
	{3,7,9,11,-1},
	{4,10,14,15,-1},
	{0,4,5,6,7,-1},
	{6,7,8,10,12,-1},
	{0,2,14,15,-1},
	{3,14,15,-1},
	{4,5,7,14,15,-1},
	{1,2,3,4,5,-1},	
	{3,4,5,9,13,-1}
};

int now[16] = {12, 6, 6, 6, 6, 6, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12};
//int now[16] = {12 ,9, 3 ,12, 6, 6, 9, 3, 12, 9 ,12 ,9 ,12 ,12 ,6 ,6};
void test4(int *now, int nn)
{
	int i = 0;
	int now1[16];

	if(!good)return;


	memcpy(now1,now,sizeof(now1));

	int k = 16;
	while(k--)
		if(now1[k-1]%12 != 0 )
			break;

	if(nn > 11)
		return;

	if(!k){
		good = 0;
		cout << "congratu!!!" << nn << endl;
		return;
	}


	
	for(int j = 0; j < 10; j++)
	{
		int k = 0;
		while(chan[j][k] != -1 ){
			now1[ chan[j][k] ] += 3;
			now1[ chan[j][k++] ] %= 12;
//			cout << 	now[ chan[j][k++] ]<< endl ;
		}
		test4(now1,nn+1);
	}
}

void amain()
{
	test4(now,0);
}