

#include<iostream>
using namespace std;
char num[1000];
void swap(char *arr,int x,int y){
	int temp=arr[x];
	arr[x]=arr[y];
	arr[y]=temp;
}
void func(char *arr,int x,int y){

	if(x==y){
		
		cout<<arr;
		return ;
	} 
	for(int i=x;i<y;i++){
		swap(arr,i,x);
		func(arr,x+1,y);
	}

}