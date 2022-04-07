#include <iostream>
using namespace std;
int nw[10000001] = {}; // net weight

#define SWAP(a,b) {int tmp = a; a = b; b = tmp;}



/*
undefined : #
clear : $
mine : *



*/
void check_mine(char (*M)[2],int curLoc){

	int nom = M[curLoc][0]; // number of mine
	char BoM[200][2] = {};
	
	int curMine = 0;
		
	curMine += (M[curLoc-1][1] == '*');
	curMine += (M[curLoc][1] == '*');
	curMine += (M[curLoc+1][1] == '*');
	
	
	
	M[curLoc-1][1] = ;
	M[curLoc][1];
	M[curLoc+1][1];



}


int main()
{

	int T; cin >> T;
	
	while(T--){

		int N; cin >> N;

		char M[200][2] ={};


		for(int i = 0; i < N; i++)
			cin >> M[i][0];
		for(int i = 0; i < N; i++)
			cin >> M[i][1];


		




	}
	


	return 0;
}