#include <iostream>
using namespace std;


int vertex[101][101] = {};
int sort_vertex[101] = {};
int num_vertex = 0;
int queue[100000] = {};
int first=0,last=0;
void enqueue(int n){ queue[first++] = n; }
int dequeue(){ return queue[last++]; }
void initqueue(){first = 0; last = 0;}


int main()
{


	int nov = 0;//number of vertex
	cin >> nov;
	int tmp_vertex_s, tmp_vertex_e;
	initqueue();


	while( !cin.eof() ){
		cin >> tmp_vertex_s >> tmp_vertex_e;
		vertex[tmp_vertex_s][tmp_vertex_e] = 1;
		vertex[tmp_vertex_s][0] = 1;
		vertex[0][tmp_vertex_e] = 1;
	}

	for(int i = 0; i <= nov; i++){
		for(int j = 0; j <= nov; j++)
			cout << vertex[i][j] << " ";
		cout << endl;}
	

	
	for(int i = 1; i <= nov; i++){
		if(!vertex[0][i]){
			sort_vertex[num_vertex++] = i;
			vertex[i][0] = 0;
			
			for(int j = 1; j <= nov; j++){
				if(vertex[i][j])
					enqueue(j);
				cout << vertex[i][j] << endl;
			}
		}
	}


	



	return 0;

}