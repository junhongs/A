#include <stdio.h>
#include <iostream>
using namespace std;


	char stack[100];
	int top = -1;

	char pop(){
		return stack[top--];
	}

	void push(char n){
		stack[++top] = n;
	}



	char stack2[100];
	int top2 = -1;

	char pop2(){
		return stack2[top2--];
	}

	void push2(char n){
		stack2[++top2] = n;
	}



//#define DEBUG
int a_main(char *str)
{
	int n = 5;
	//char str[100] = "123";
	int cur = 0;
	int j = 0;
	int str_len = strlen(str);
	for(int i = 1; i <= str_len; i++)
	{
		cur = 0;
		for(; j < str_len; j++)
		{

#ifdef DEBUG
			cout << "i is:"<< i << " j is:"<< j << endl;
#endif
			if(str[j] - '0' == i)
			{
#ifdef DEBUG
				cout << "2" << endl;
#endif
				j++;
				cur = 1;
				break;
			}
			push(str[i]);
		}

#ifdef DEBUG
		cout << "end" << endl;
#endif
		if(cur == 1){

#ifdef DEBUG
			cout << "1" << endl;
#endif
			continue;
			cur = 0;
		}
		else if( j >= str_len - 1)
		{
			cout<< "NO" << endl;
			return 0;
		}
	}

	cout<< "YES"<< endl;
	return 0;
}

int main()
{
	/*
	char str1[100] = "123";
	a_main(str1);
	return 0;
	*/
	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		char str[100] = {};
		int num;
		int n;
		cin >> num;
		for(n = 0; n < num; n++)
			cin >> str[n];
		//cout << str << endl;

		cout << "#testcase" << (itr+1) << endl;

		a_main(str);

		/*

		알고리즘이 들어가는 부분

		*/

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}