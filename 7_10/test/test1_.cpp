#include <stdio.h>
#include <string.h>

int size = 4;
int arr[1000][1000] = 
{ 
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0}
};
int arr_h[1000][1000] = 
{ 
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0}
};
int obstacle[1000][1000] = 
{ 
	{1,0,0,0,0},
	{0,0,0,0,0},
	{0,0,1,0,0},
	{0,0,0,0,0},
	{0,0,0,0,0}
};

int night( int i, int j, int k)
{
	
	if( i < 0 || i >= size || j < 0 || j >= size ) return 0;
	
	if( obstacle[i][j] )
		return 0;


	if( arr[i][j] && arr[i][j] > k )
		arr[i][j] = k;
	//printf("asdf");
	if( !arr[i][j])
		arr[i][j] = k;
	
	k++;
	if(k > 10) return 0;
	night(i-2,j-1,k);
	night(i+2,j-1,k);
	night(i-2,j+1,k);
	night(i+2,j+1,k);

	night(i-1,j-2,k);
	night(i-1,j+2,k);
	night(i+1,j-2,k);
	night(i+1,j+2,k);
}


int horse( int i, int j, int k)
{
	
	if( i < 0 || i >= size || j < 0 || j >= size ) return 0;
	
	if( obstacle[i][j] )
		return 0;


	if( arr_h[i][j] && arr_h[i][j] > k )
		arr_h[i][j] = k;
	if( !arr_h[i][j])
		arr_h[i][j] = k;

	k++;
	if(k > 10) return 0;
	if(!obstacle[i-1][j]) horse(i-2,j-1,k);
	if(!obstacle[i+1][j]) horse(i+2,j-1,k);
	if(!obstacle[i-1][j]) horse(i-2,j+1,k);
	if(!obstacle[i+1][j]) horse(i+2,j+1,k);

	if(!obstacle[i][j-1]) horse(i-1,j-2,k);
	if(!obstacle[i][j+1]) horse(i-1,j+2,k);
	if(!obstacle[i][j-1]) horse(i+1,j-2,k);
	if(!obstacle[i][j+1]) horse(i+1,j+2,k);
}


void chess(int i,int j)
{

	int k,l;

	int obst = 0;
	//i = 1;
	//j = 2;

//	for(k = 0; k < size; k++){
//		for( l = 0; l < size; l++)
//			printf("%3d",arr[k][l]);
//		printf("\n");}

//	printf("\n");printf("\n");
	memset(arr,0,sizeof(arr));
	night(i,j,1);
	

//	for(k = 0; k < size; k++){
//		for( l = 0; l < size; l++)
//			printf("%3d",arr[k][l]);
//		printf("\n");}




	memset(arr_h,0,sizeof(arr));
//	printf("\n");printf("\n");
	horse(i,j,1);
	
	
//	for(k = 0; k < size; k++){
//		for( l = 0; l < size; l++)
//			printf("%3d",arr_h[k][l]);
//		printf("\n");}


	obst = 0;
	for(k = 0; k < size; k++){
		for( l = 0; l < size; l++)
			if(arr_h[k][l] != arr[k][l])
				obst++;
	}
		
	printf("%d\n",obst);


}


int main()
{

	int itr;
	int nCount;		/* 문제의 테스트 케이스 */
	int asdf,i,j,q,w;
	scanf("%d", &nCount);	/* 테스트 케이스 입력 */

	for(itr=0; itr<nCount; itr++)
	{

		printf("#testcase%d\n",itr+1);
		
		scanf("%d %d",&size,&asdf);


		for(i= 0; i< size; i++)
			for(j = 0; j< size; j++)
				scanf("%d",&obstacle[i][j]);

		scanf("%d %d",&q,&w);

		chess(q-1,w-1);
		/*

		알고리즘이 들어가는 부분

		*/

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}