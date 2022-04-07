#include <iostream>
using namespace std;
int main(){
	int nCount;	
	cin >> nCount;
	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;
		int n = 0;

		cin >> n;
		int str[100000] = {0};
		long long int sum = 0;
		int aos = 0; // average of sum;
		for(int i = 0; i < n; i++){
			cin >> str[i];
	//		sum += str[i];
		}
//		cout << "sum :: " << sum << endl;

		//aos = sum / n;
		aos = str[n-1] / n;
		cout << "aver sum :: " << aos << endl;


		int tmp1 = 0;
		cin >> tmp1;
		aos -= tmp1;

		long long int soe = 0; // sum of error
		int tmp = 0;
		for(int i = 1; i < n; i++){
			tmp = aos * i - str[i];
			soe += tmp > 0 ? tmp : -tmp;
		}

		cout << soe << endl;


	}
	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}