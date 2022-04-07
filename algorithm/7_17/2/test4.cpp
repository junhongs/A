#include <iostream>
using namespace std;

typedef struct gold{
	int weight;
	int price;
	struct gold *next;
	gold(int _weight,int _price, struct gold *_next){
		weight = _weight;
		price = _price;
		next = _next;
	}
	void insert(struct gold *current,struct gold *next){
		struct gold *tmp;
		tmp = current->next;
		current->next = next;
		next->next = tmp;
	}
}Gold;


int main()
{

	int nCount;		/* 문제의 테스트 케이스 */

	cin >> nCount;	/* 테스트 케이스 입력 */

	for(int itr=0; itr<nCount; itr++)
	{
		Gold *la = new Gold(0,0,NULL);
		Gold *cur = NULL;
		Gold *fir = new Gold(0,0,cur);
		


		Gold *first[1000];
		Gold *max = new Gold(1,0,NULL);
		
		cout << "#testcase" << (itr+1) << endl;

		int maxNumber,maxWeight;
		cin >> maxNumber >> maxWeight;
		int price,weight,minWeight = 100000;
		for(int i = 0; i < maxNumber; i++){
			cin >> weight >> price;
			if(weight < minWeight)
				minWeight = weight;
			if( (float)(max->price / max->weight) < (float)(price / weight)){
				Gold *tmp = fir;
				fir = max;
				max->next = tmp;
				//cur->next = tmp;
				max = new Gold(weight,price,NULL);
			}
			else{
				Gold *tmp = fir;
				fir = new Gold(weight,price,NULL);
				fir->next = tmp;
			}
		}
		int curWeight = 0,curPrice = 0;
		curPrice = (maxWeight / max->weight) * max->price;
		curWeight = maxWeight % max->weight;

		cur = fir;
		Gold *cur2 = new Gold(1,0,NULL);
		max = new Gold(1,0,NULL);
		while(curWeight >= minWeight){
			while(cur->next){
				if( (float)(max->price / max->weight) < (float)(cur->price / cur->weight))
				{
					cur2->next = cur->next;
					max = cur;
				}
				cur2 = cur;
				cur = cur->next;
			}
			
			curPrice += (curWeight / max->weight) * max->price;
			curWeight = curWeight % max->weight;
		}
		cout << curPrice << endl;
	}
	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
}