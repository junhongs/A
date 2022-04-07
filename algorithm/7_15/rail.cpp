/*

VC, GCC에서 사용

*/

#include <stdio.h>
#include <iostream>
using namespace std;

int top = 1;
int stack[10000] = {};
int pop(){ if(top == 1) return -1; return stack[--top]; }
void push(int n){stack[top++] = n;}

int main()
{

	int itr;
	int nCount;		/* 문제의 테스트 케이스 */

	scanf("%d", &nCount);	/* 테스트 케이스 입력 */

	for(itr=0; itr<nCount; itr++)
	{
		top = 1;
		printf("#testcase%d\n",itr+1);


		int n = 0;
		cin >> n;

		int tmp = n;
		int tmpn = 0;

		int rail = 1;


		while(tmp--){
			cin >> tmpn;
			int tof = n;
			while(tmpn != stack[top-1] )
				if(rail > n+1) break; else push(rail++);
			pop();
		}
		cout << rail << endl;
	}
	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}