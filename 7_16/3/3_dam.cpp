//http://59.23.113.171/30stair/dam/dam.php?pname=dam

#include <iostream>
using namespace std;

int first = 0;
int last = 0;
int queue[1000] = {};
int dequeue(){ if(first == last) return -1; int tmp = queue[last++]; queue[last-1] = 0; return tmp; }
void enqueue(int n){ queue[first++] = n; }


int firstk = 0;
int lastk = 0;
int queuek[1000] = {};
int dequeuek(){ if(firstk == lastk) return -1; int tmp = queuek[lastk++]; queuek[lastk-1] = 0; return tmp; }
void enqueuek(int n){ queuek[firstk++] = n; }






void main()
{
	int max_n = 0;
	int map[100][100] = {};

	cin >> max_n ;

	for(int i = 1; i <= max_n; i++)
		for(int j = 1; j <= max_n; j++){
			cin >> map[i][j];

			if(!map[i][j]) map[i][j] = -2;
			else map[i][j] = -map[i][j];
		}

	int loc_x,loc_y;
	cin >> loc_x >> loc_y;
	enqueue(loc_x * 1000 + loc_y);
	int ttb;
	cin >> ttb;
	


#ifdef DEBUG
	for(int i = 1; i <= max_n; i++)
	{
		for(int j = 1; j <= max_n; j++)
			cout << map[i][j] << " ";
		cout << endl;
	}
	 
	
	
#endif




	//for(int i = 0; i < 4; i++)
	int k = 1;
	int num_dam = 0;
	enqueuek(k);
	while(1)
	{
		int tmp = dequeue();
		if(tmp == -1) break;
		loc_x = tmp / 1000;
		loc_y = tmp % 1000;
		//cout << "location:" << loc_x <<"," << loc_y << endl;
		//if(map[loc_x][loc_y] != -2) continue;
		map[loc_x][loc_y] = dequeuek();


		if(map[loc_x][loc_y] == ttb+1 && map[loc_x][loc_y] == -2) num_dam++;
		else if( map[loc_x][loc_y] > ttb+1 ) break;
		if( map[loc_x + 1][loc_y	] == -2 ) enqueue((loc_x+1) * 1000 + loc_y),enqueuek(map[loc_x][loc_y]+1);
		if( map[loc_x - 1][loc_y	] == -2 ) enqueue((loc_x-1) * 1000 + loc_y),enqueuek(map[loc_x][loc_y]+1);
		if( map[loc_x	 ][loc_y + 1] == -2 ) enqueue(loc_x * 1000 + loc_y+1),enqueuek(map[loc_x][loc_y]+1);
		if( map[loc_x	 ][loc_y - 1] == -2 ) enqueue(loc_x * 1000 + loc_y-1),enqueuek(map[loc_x][loc_y]+1);

#define DEBUG1
#ifdef DEBUG1
		for(int i = 1; i <= max_n; i++)
		{
			for(int j = 1; j <= max_n; j++)
				cout << map[i][j] << " ";
			cout << endl;
		}
		cout << endl;
#endif

		
	}
	
//#define DEBUG

#ifdef DEBUG
	for(int i = 1; i <= max_n; i++)
	{
		for(int j = 1; j <= max_n; j++)
			cout << map[i][j] << " ";
		cout << endl;
	}
#endif
	cout << num_dam << endl;


	return;
}