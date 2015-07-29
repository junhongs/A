//#include <iostream>
//using namespace std;
//int main(){
//	int nCount;
//	cin >> nCount;
//	for(int itr=0; itr<nCount; itr++){
//		cout << "#testcase" << (itr+1) << endl;
//
//		int DP[20010] = {};
//		int *D = &DP[10000];
//		
//		enum{SIZE,PRICE};
//		int book[102][2] = {};
//
//		int nob = 0; // number of book
//		int sob = 0; // size of bag
//
//		cin >> nob >> sob;
//		for(int i = 0; i < nob; i++){
//			cin >> book[i][SIZE] >> book[i][PRICE];
//		}
//
//
//
//		for(int i = 0; i < sob; i++){
//			for(int j = 0; j < nob; j++){
//				if(i-book[j][SIZE] + 1 < 0)
//					continue;
//				int tmp = D[i-book[j][SIZE]] + book[j][PRICE];
//				if(tmp > D[i])
//					D[i] = tmp;
//				//D[i] = D[i-book[i][SIZE]] + book[i][PRICE];
//			}
//		}
//		cout << D[sob-1] << endl;
//		//for(int i = 0; i < sob; i++){
////			cout << D[i] << endl;
//		//}
//		
//
//	}
//
//	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
//
//}

#include <iostream>
using namespace std;
int main(){


	int nCount;
	cin >> nCount;
	for(int itr=0; itr<nCount; itr++){
		cout << "#testcase" << (itr+1) << endl;
		int DP[20010] = {};
		int *D = &DP[10000];

		enum{SIZE,PRICE};
		int book[102][2] = {};
		int nob = 0,sob = 0; // number of book  , size of bag
		cin >> nob >> sob;
		for(int i = 0; i < nob; i++)
			cin >> book[i][SIZE] >> book[i][PRICE];
		for(int i = 0; i < sob; i++){
			for(int j = 0; j < nob; j++){
				if(i-book[j][SIZE] + 1 < 0)
					continue;
				int tmp = D[i-book[j][SIZE]] + book[j][PRICE];
				if(tmp > D[i])
					D[i] = tmp;
			}
		}
		cout << D[sob-1] << endl;
	}
	return 0;

}