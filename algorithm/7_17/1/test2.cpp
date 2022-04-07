#include <iostream>
using namespace std;

int stack[100000];
int top = 0;
int minstack = -1;
void push(int n){ stack[top++] = n; minstack = (minstack == -1) ? n : (minstack > n) ? n : minstack; }
int pop(){ if(!top) return -1; return stack[--top]; }
void init_stack(){ top = 0; minstack = -1;}

int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;
		init_stack();
		int order = 0;
		cin >> order;


		char order_c[100] = {0};
		while(order--){
			cin >> order_c;
			if(!strcmp(order_c,"Push")){
				int n;
				cin >> n;
				push(n);
			}
			else if(!strcmp(order_c,"Pop")){
				int n = pop();
				if(n == -1) cout << "Empty" << endl;
				else cout << "Pop " << n << endl;
			}
			else if(!strcmp(order_c,"Min")){
				if(!top)	cout << "Empty" << endl;
				else cout << "Min " << minstack << endl;
			}
				
		}


	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}