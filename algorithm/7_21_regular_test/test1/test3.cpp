#include <iostream>
using namespace std;
int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;
			

		char str[102] = {};

		int nos = 0; // number of string
		int nfa = 0; // number for addition

		cin >> str  >> nfa>> nos;
		
		int c = 0;
		int n = 0;
		int nom = 1; //number of minus
		char *str_buf = str;

		int noe = 0; // nubmer of element
		int error = 0;
		int flag = 0;
		while(c = str[n++]){

			noe++;
			if(noe > 5){
				error = 1;
				break;
			}
			if(c == '-'){
				nom++;
				noe = 0;
				continue;
			}
			if(nom == nos && flag == 0){
				str_buf = &str[n-1];
				flag = 1;
			}
		}
		if(error || nom < nos){ cout << "INPUT ERROR!" <<endl; continue;}
		int sizeOfStr = 0;
		while(str_buf[sizeOfStr] != '-' && str_buf[sizeOfStr] != NULL){
			sizeOfStr++;
		}

//		if(sizeOfStr > 4)
	//		cout << "INPUT ERROR!" <<endl;
		
		char password[5] = {0};

		for(int i = 0; i < 4 - sizeOfStr; i++){
			password[i] = '0';
		}
		int str_buf_n = 0;
		for(int i = 4 - sizeOfStr; i < 4; i++){
			password[i] = str_buf[str_buf_n++];
		}



		for(int i = 0; i < 4; i++){
			password[i] += nfa;
			if(password[i] > '9')
				password[i] -= 10;
		}


		cout << password << endl;

	}
	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
}