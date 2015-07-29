
#include <iostream>
using namespace std;


int findway(int (*str)[112], int x,int y,int number){
	str[x][y] = number;

	if(str[x+1][y] == 1 || str[x+1][y] > number ) findway(str,x+1,y,number+1);
	if(str[x-1][y] == 1 || str[x-1][y] > number ) findway(str,x-1,y,number+1);
	if(str[x][y+1] == 1 || str[x][y+1] > number ) findway(str,x,y+1,number+1);
	if(str[x][y-1] == 1 || str[x][y-1] > number ) findway(str,x,y-1,number+1);

	return 0;
}

int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;

		char str[112][112] = {0};
		int str_d[112][112] = {0};
		int column, row;
		cin >> column>> row;

		for(int i = 1; i <= row; i++){
			cin >> &(str[i][1]);
		}

		for(int i = 1; i <= row; i++){
			for(int j = 1; j <= column; j++){
				if(str[i][j])
					str_d[i][j] = str[i][j] - '0';
			}
		}


		int loc_x,loc_y;

		cin >> loc_x >> loc_y;




		findway(str_d,loc_y,loc_x,3);
		
		
		int nol = 0; // number of lived
		int tol = 0; // time of live

		for(int i = 1; i <= row; i++){
			for(int j = 1; j <= column; j++){
				if( str_d[i][j] == 1 ) nol++;

				if( str_d[i][j] > tol ) tol = str_d[i][j];
			
			}
		}

		//for(int i = 1; i <= row; i++){
		//	for(int j = 1; j <= column; j++){
		//		//cout << str_d[i][j] << " ";
		//		printf("%2d",str_d[i][j]);
		//	
		//	}
		//	cout << endl;
		//}
		//cout << endl;cout << endl;

		cout << tol << " "<< nol << endl;

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}