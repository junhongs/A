#include <iostream>
using namespace std;
#define CAL 4
int isPrinted = 0;
char str1[10000],str2[10000];
void addition(int carrier){
			if(!strlen(str1) && !strlen(str2))
				return;
			
			char str3[CAL+1] = {},str4[CAL+1] = {};

			//cout << "strlen1 is" << strlen(str1) << endl;
			for(int i = 0; i < CAL; i++){
				if(!strlen(str1))
					str3[CAL-1-i] = '0';
				else
					str3[CAL-1-i] = str1[ strlen(str1)-1 ];
				str1[ strlen(str1)-1] = 0;
			}
			for(int i = 0; i < CAL; i++){
				if(!strlen(str2))
					str4[CAL-1-i] = '0';
				else
					str4[CAL-1-i] = str2[ strlen(str2)-1 ];
				str2[ strlen(str2)-1] = 0;
			}
			

			//cout << "str3 and str4 :: " << str3 << "," << str4 << endl;
			int tmp = atoi(str3) + atoi(str4);
			addition(tmp / 10000);
			tmp %= 10000;

			if( !isPrinted ){
				printf("%d",tmp+carrier);
				isPrinted = 1;
			}
			else
				printf("%04d",tmp+carrier);

}

int main()
{
	int nCount;		/* 문제의 테스트 케이스 */
	cin >> nCount;	/* 테스트 케이스 입력 */
	for(int itr=0; itr<nCount; itr++){
		cout << "#testcase" << (itr+1) << endl;
		memset(str1,0,sizeof(str1));
		memset(str2,0,sizeof(str2));
		isPrinted = 0;
		cin >> str1 >> str2 ; 

		
		addition(0);
		cout << endl;

	}

	return 0;
}