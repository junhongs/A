
#include <iostream>
using namespace std;
int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;




		while(1){
			char str[22] = {0};
			cin >> str;
			if(str[0] == 'E' && str[1] == 'N' && str[2] == 'D' && str[3] == 0)
				break;

			
			int n = 0;
			while(str[++n]);
			for(int i = n-1; i >= 0; i--){
				cout << str[i];
			}
			cout << endl;
		}
		/*

		알고리즘이 들어가는 부분

		*/

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}