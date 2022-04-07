#include <iostream>
using namespace std;
int nw[10000001] = {}; // net weight

#define SWAP(a,b) {int tmp = a; a = b; b = tmp;}
int main()
{
	int nos; cin >> nos; // number of scale
	int weight[1001] = {};
	
	for(int i = 0; i < nos; i++){
		cin >> weight[i];
	}

	

	for(int i = 0; i < nos; i++){
		for(int j = i; j < nos; j++){
			if(weight[i] > weight[j])
				SWAP(weight[i],weight[j]);
		}
	}

	nw[0] = 1;
	int sum = weight[0];
	for(int i = 0; i < nos; i++){
		for(int j = nos * 100; j >= 0 ; j--){
			if(nw[j] ) 
				nw[j+weight[i]] = 1;
		}
	}


	int i;
	for( i = 0; i < nos * 100; i++){
		if( !nw[i]) break;
	}
	cout << i << endl;


	return 1;

}