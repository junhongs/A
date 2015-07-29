#include <stdio.h>
#include <iostream>
using namespace std;

int stack[100] = {0};
int top = 0;
int pop(){ if(!top)return -1; return stack[--top]; }
void push( int n){ stack[top++] = n; }

int rail(int *str, int num)
{

	int n = 1;
	for(int i = 0;i < num;)
		if(str[i] > n)
			push(n++);
		else if(str[i] == n){
			i++;n++;
		}
		else if(str[i] == stack[top-1]){
			pop();i++;
		}
		else{
			return -1;}
	return 1;
}

int main()
{
	int nCount;
	cin >> nCount;
	for(int itr=0; itr<nCount; itr++)
	{
		cout << "#testcase" << (itr+1) << endl;
		int n;
		int str[1000];
		cin >> n;
		
		for(int i = 0; i < n; i++)
			cin >> str[i];
		
		if(rail(str,n) == 1)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;


	}
	return 0;
}