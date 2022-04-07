#include <iostream>

using namespace std;
//http://59.23.113.171/30stair/virus1/virus1.php?pname=virus1


/*
void virus(int k)
{
	for(int i = 1; i <= n; i++){
		if(com[k][i] == 1 && count_com[i] == 0){
			count_com[i] = 1;
			virus(i);
	}
}
*/

void main_1()
{
	int str[101][101] = {0};
	int is_inf[101] = {0};

	int n = 0;
	cin >> n;

	int num_inform = 0;
	cin >> num_inform;

	
	int com1,com2;
	for( int i = 0; i < num_inform; i++){
		cin >> com1 >> com2;
		str[com1][com2] = 1;
		str[com2][com1] = 1;
	}


	
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= n; j++){ 
			if(i == 0)
				cout << j;
			else if( j == 0)
				cout << i;
			else
			cout << str[i][j];
		}
		cout << endl;
	}
	cout << endl;




	for(int j = 1; j <= n; j++)
			is_inf[j] = str[1][j];

	for( int i = 1; i <= n; i++)
		cout << is_inf[i];

	int k = 5;
	while(k--)
	for(int i = 1; i <= n; i++){
		if(!is_inf[i]) continue;
		for(int j = 1; j <= n; j++){
			is_inf[j] += str[i][j];
		}
	}


	cout << endl;
	
	for( int i = 1; i <= n; i++)
		cout << is_inf[i] << "   ";
	


	cout << "d" << endl;
}