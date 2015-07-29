#include <iostream>

using namespace std;

int gcd(int a, int b){
	if(a == b) return a;
	if(a < b){int tmp = a; a = b; b = tmp;}
	
	return gcd(b,a-b);

}

int main(){

	int index = 0;
	cin >> index;



	for(int itr = 1; itr <= index; itr++){

		cout << "#" << itr << " ";


		int a,b;
		cin >> a >> b;

		cout << (a / 6) *(b / 6) <<" " ;
	

		 //cout << a%6 <<endl<< b %6 << endl;
		if(a%6 && b%6)
			if(a/6 &&  b/6)
				cout << a/6 + b/6 - 1 <<endl;
			else
				cout << 1 << endl;
		else if(!(a%6) && b%6)
			cout << a/6<< endl;
		else if(a%6 && !(b%6))
			cout << b/6<< endl;
		else
			cout << 0 << endl;

		

	}
}

100000000