#include <iostream>

using namespace std;

typedef struct gold{
	int number;
	struct gold *next;
	gold(int _number, struct gold *_next){
		number = _number;
		next = _next;
	}
	void insert(struct gold *next){
		//struct gold *tmp = new gold(0,NULL);
		struct gold *tmp = this->next;
		struct gold *tmp2 = this;
		cout<<"nownum:" << next->number << "  nextnum:"<< tmp->number << endl;
		while(tmp != NULL){

			if(next->number < tmp->number){
				tmp2->next = next;
				next->next = tmp;
			}
			else{
				struct gold *tmptmp = tmp->next;
				tmp->next = next;
				next->next = tmptmp;
			}
			
			struct gold *tmptmp = tmp;
			tmp = tmp->next;
			tmp2 = tmptmp;

		};
	
	}
}Gold;


int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{

		cout << "#testcase" << (itr+1) << endl;
		
		
		int str[100001] = {0};
		int maxN = 4;

		cin >> maxN;

		for(int i = 0; i < maxN; i++){
			cin >> str[i];
		}
		int sum = 0;
		for(int k =0 ; k < maxN-1; k++){
			
		

			for(int i = k; i < maxN; i++){
				for(int j = k; j < maxN; j++){
					if(str[i] < str[j]){
						int tmp = str[i];
						str[i] = str[j];
						str[j] = tmp;
					}
				}
			}
			int tmp = str[k] + str[k+1];
			str[k+1] = tmp;
			sum += tmp;
		}
			cout << sum << "  "<<endl;
		
		


	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}