#include <iostream>
using namespace std;

char buf_str1[100] = {};
char buf_str2[100] = {};


int devide_string_n(char *str1, char *str2)
{

	int str_n = strlen(str1);
//	cout << "strlenis" <<str_n<<endl;
	int tmp;
	//cin >> tmp;
	//if( str_n < ) return -1;
	while(str_n--)
		if(str1[str_n] == str2[0] ) break; 
	
	cout <<buf_str1 << "  " <<buf_str2 <<endl;

	strncpy(buf_str1,str1,str_n);
	strcpy(buf_str2,&str1[str_n+1]);

	devide_string_n(buf_str1,buf_str2);

	return 0;	
}


void main(){
	char str1[100] = "DBHEIAFCJGK";
	char str2[100] = "ABDEHICFGJK";

	devide_string_n(str1,str2);
	



}