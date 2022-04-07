#include <iostream>
using namespace std;
char visited[10000][100] = {};		
int main(){
	int nCount;
	cin >> nCount;
	for(int itr=0; itr<nCount; itr++){
		cout << "#testcase" << (itr+1) << endl;
		int DP[20010] = {};
		int *D = &DP[10000];


		enum{SIZE,PRICE,STOCK};
		int book[102][3] = {};
		int nob = 0,sob = 0; // number of book  , size of bag
		cin >> nob >> sob;
		for(int i = 0; i < nob; i++)
			cin >> book[i][SIZE] >> book[i][PRICE];
		int max = 0;

		for(int i = 0; i < sob; i++){
			for(int j = 0; j < nob; j++){
				if(i-book[j][SIZE] + 1 < 0) continue;
				if(visited[i-book[j][SIZE]][j]) continue;
				int tmp = D[i-book[j][SIZE]] + book[j][PRICE];
				if(tmp > D[i]){
					D[i] = tmp;
					if(max < tmp)
						max = tmp;
					memcpy(visited[i],visited[i-book[j][SIZE]],sizeof(visited[i]));
					visited[i][j] = 1;
				}
			}
		}

		cout << max << endl; 
	}
	return 0;

}
