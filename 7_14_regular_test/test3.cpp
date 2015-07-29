#include <iostream>
using namespace std;
int main()
{
	int nCount;
	cin >> nCount;
	for(int itr=0; itr<nCount; itr++){
		cout << "#testcase" << (itr+1) << endl;

		int noc = 0;
		char str[101] = {};
		char block[101] = {};
		cin >> noc >> str;

		int start=-1,end=-1;

		for(int j = 0; j < noc; j++){
				int last_i = 0;
				int i = 0;
				while(str[++i]){
					if(block[i] == 1)
						continue;
					if( str[i] == str[last_i]){
						block[last_i] = 1;
						block[i] = 1;//1238099908   8911441989
						last_i =i = 0;
					}
					else 
						last_i = i;
				}
		}

		for(int j = 0; j < noc; j++)
			if( block[j])
						continue;
			else
				cout << str[j];
		cout << endl;
	}
	return 0;
}