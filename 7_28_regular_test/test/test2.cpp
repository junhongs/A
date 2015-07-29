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

			int N; cin >> N;
			int P; cin >> P;

			int num = 0,sum = 1;
			int i = 0;
			int list[100000] = {};
			int isPassed = 0;
			while(++i){
				num = 0;
				while(N){
					sum = 1;
					for(int i = 0; i < P; i++)
						sum *= N%10;
					num += sum;
					N /= 10;
				}
				list[i] = N = num;
				for(int j = 0; j < i; j++){
					if(list[j] == list[i]){
						cout << j<< endl;
						isPassed = 1;
						break;
					}
				}
				if(isPassed)
					break;
			}



		}

		return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

	}