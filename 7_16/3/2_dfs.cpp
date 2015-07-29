#include <iostream>
using namespace std;
// http://59.23.113.171/30stair/dfs/dfs.php?pname=dfs

int dfs[11][11] = {};
int mind = 0, maxd = 0;


int store[11] = {};
int a = 0;

int fdfs(int n){
	store[n] = 1;

	int k = 8;
	while(k--)
		cout << store[8-k];
	for(int i = 1; i <= maxd; i++)
	{
		if(dfs[n][i] && !store[n])
		{
			fdfs(i);
		}
	}

	return 0;
}

int main_2(){
	
	
	
	cin >> mind >> maxd;

	int num1,num2;


	while(!cin.eof())
	{
		cin >> num1 >> num2;
		dfs[num1][num2] = dfs[num2][num1] = 1;
	}

	for(int i = 1; i <= maxd; i++)
	{
		for(int j = 1; j <= maxd; j++)
			cout << dfs[i][j];
		cout << endl;
	}

	fdfs(mind);

	

	cout << "d";


	return 0;
}