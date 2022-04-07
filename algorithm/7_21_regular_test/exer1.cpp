#include <iostream>
using namespace std;

int findway(int (*str)[102], int x,int y,char number){
	
	str[x][y] = number;

	if(str[x+1][y] == 1 || str[x+1][y] > number ) findway(str,x+1,y,number+1);
	if(str[x-1][y] == 1 || str[x-1][y] > number ) findway(str,x-1,y,number+1);
	if(str[x][y+1] == 1 || str[x][y+1] > number ) findway(str,x,y+1,number+1);
	if(str[x][y-1] == 1 || str[x][y-1] > number ) findway(str,x,y-1,number+1);

	return 0;
}


void main(){
	int n = 0;

	cin >> n;

	int k = n;
	while(n--){
		cout << "#testcase" << k - n << endl;
		char str[102][102] = {0};
		int str_d[102][102] = {0};
		int column, row;
		cin >> column>> row;

		for(int i = 1; i <= row; i++){
			cin >> &(str[i][1]);
		}

		for(int i = 1; i <= row; i++){
			for(int j = 1; j <= column; j++){
				str_d[i][j] = str[i][j] - '0';
			}
		}


		int loc_x,loc_y;

		cin >> loc_x >> loc_y;


		//for(int i = 1; i <= row; i++){
		//	for(int j = 1; j <= column; j++){
		//		cout << str_d[i][j] << " ";
		//	
		//	}
		//	cout << endl;
		//}
		//cout << endl;cout << endl;

		findway(str_d,loc_y,loc_x,3);
		
		
		int nol = 0; // number of lived
		int tol = 0; // time of live

		for(int i = 1; i <= row; i++){
			for(int j = 1; j <= column; j++){
				if( str_d[i][j] == 1 ) nol++;

				if( str_d[i][j] > tol ) tol = str_d[i][j];
			
			}
		}

		cout << tol << " "<< nol << endl;

	}
} 