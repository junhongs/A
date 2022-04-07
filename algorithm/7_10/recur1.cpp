#include <stdio.h>
#include <iostream>


using namespace std;


int recursive_t(int res){
	static int n = 1;
	cout << n << endl;
	if( res == -1 ) return 0 & (n = 1);
	if( n == res) return 1;
	return ++n * (recursive_t(res));
}


int recursive(int n)
{
	cout << n << endl;
	if( n == 1) return 1;
	return n * recursive(n-1);
}


int hanoi(int n)
{
	if( n == 1 )
		return 1;
	return 2* hanoi( n-1) + 1;
}


void amain()
{
	//ten_to_two(16);
}