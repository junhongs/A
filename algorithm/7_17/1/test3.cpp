#include <iostream>
using namespace std;
int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;
		int x,y;
		cin >> x >> y;
		int sot = 6; // size of tile
		cout << (x / sot) * (y / sot) << " ";
		if(!(x%sot) && !(y%sot))
			cout << "0" << endl;
		else if((x%sot) && (y%sot))
			cout << y / sot + x / sot + 1 << endl;
		else 
			cout << ((x%sot) ? (y / sot) : 1) + ((y % sot) ? (x / sot) : 1) - 1 << endl;

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}