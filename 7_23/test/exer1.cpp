#include <iostream>

using namespace std;

int meeting[10001][2] = {};
int D[10001] = {};
int D2[10001] = {};
enum{S,E};
int main(){
		int num = 0;
		int max = 0;
		cin >> num;
		for(int i = 0; i < num; i++)
			cin >> meeting[i][S] >> meeting[i][E];
		
		for(int i = 0; i < num; i++)
			D[i] = 1;


		for(int i = 0; i < num; i++){
			for(int j = i+1; j < num; j++){
				if(meeting[i][E] < meeting[j][S]){
					if(D[j] < D[i] + 1)
						D[j] = D[i] + 1;
				}
			}
		for(int i = 0; i < num; i++){
			cout<< D[i] << " ";
		}
		cout << endl;

			if(max < D[i]) max = D[i];
		}


		for(int i = 0; i < num; i++){
			cout << D[i] << " ";
		}

		cout << max << endl;
		


	return 0;
}