#include <iostream>
using namespace std;

int binary_to_decimal(char *str,int binary_length){
	int dec = 0;
	for(int i = 0; i < binary_length; i++){
		dec *= 2;
		dec += str[i]-'0';
	}
	return dec;
}

int checking_different(int binary,int packet){
		binary ^= packet;
		int sum = 0;
		while(binary){
			sum += (binary & 0x01);
			binary = binary>>1;
		}
		return sum;
}

int main(){
	int nCount;		/* 문제의 테스트 케이스 */
	cin >> nCount;	/* 테스트 케이스 입력 */
#define MAXPACKET 8
	int packet[MAXPACKET] = {0x00 , 0x0F, 0x13, 0x1C, 0x26, 0x29, 0x35, 0x3A};
	char character[MAXPACKET+1] = "ABCDEFGH";
	for(int itr=0; itr<nCount; itr++){
		cout << "#testcase" << (itr+1) << endl;


		char binary[100] = {};
		int nob = 0; // number of binary
		
		cin >> nob >> binary;
		char result[11] ={};
		int noflag = 0;
		for(int i = 0; i < nob; i++){
			int dif_min = 9999;
			for(int j = 0; j < MAXPACKET; j++){
				int decimal = binary_to_decimal(&(binary[i*6]),6);
				int dif_num = checking_different(decimal,packet[j]);
				if(dif_min > dif_num)
					dif_min = dif_num;
				if(dif_num < 2){
					result[i] = character[j];
					break;
				}
			}
			//cout <<"difmin is::"<< dif_min << endl;
			if(dif_min >= 2){
				cout << i+1;
				noflag = 1;
				break;
			}
		}
		if(!noflag)
			cout << result;
		cout << endl;

		
	}
	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
}