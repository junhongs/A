#include <iostream>
 
using namespace std;
 
int main(){
#define MAX_N 4
    int change[MAX_N][2] = { {25,0},{10,0},{5,0},{1,0},};
    char change_name[MAX_N][20] = {"QUARTER(S)","DIME(S)","NICKEL(S)","PENNY(S)"};
    enum {PRICE,NUMBER};
    int e;
    cin >> e;
    for(int i = 0; i < MAX_N; i++){
        change[i][NUMBER] = e / change[i][PRICE];
        e %= change[i][PRICE];
    }
    for(int i = 0; i < MAX_N; i++){
        cout << change[i][NUMBER] << " " << change_name[i];
        if(i != MAX_N-1)
            cout << ", ";
    }
    return 0;   
}
 