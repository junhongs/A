/*

VCPP, GPP에서 사용

*/

#include <iostream>
using namespace std;
int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;


		int nos = 0;
		cin >> nos;

		int square = 0;
		cin >> square;
		int is_odd = square % 2;


		int sum = 0;
		int mental[102] = {};
		for( int i = 0; i < nos; i++){
			cin >> mental[i];
			
			if(is_odd && mental[i] > 0){
				int mul = 1;
				for(int j = 0; j < square; j++)
					mul *= mental[i];
				sum += mul;
			}
			else if(!is_odd){
				//cout << i << "," << mental[i] << "  even" <<endl;
				int mul = 1;
				for(int j = 0; j < square; j++){
					mul *= mental[i];
					//cout << "sum is :: " << sum<<endl;
				}
				sum += mul;
			}
		}
		cout << sum << endl;
		/*

		알고리즘이 들어가는 부분

		*/

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}