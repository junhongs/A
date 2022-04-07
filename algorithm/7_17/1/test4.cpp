#include <iostream>
using namespace std;
int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;

		int target[8][8] = {0};

		for(int i = 1; i < 7; i++)
			for(int j = 1; j < 7; j++)
				cin >> target[i][j];

		int max_score = 0;
		for(int i = 1; i < 7; i++){
			for(int j = 1; j < 7; j++){
				int cur_score= target[i][j+1] + target[i][j-1] + target[i+1][j] + target[i-1][j] + target[i][j];
				max_score = (max_score < cur_score) ? cur_score : max_score;
			}
		}
		cout << max_score << endl;

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}