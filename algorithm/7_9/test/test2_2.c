#include <stdio.h>
#include <string.h>
 int first = 0;
 int last = 0;
 int queue[100000000]={0};

void enqueue(int n){
	if(first < 0 || last < 0)
	{
		printf("asdfasdf");
		return;
	}
	queue[first++] = n; 
}
int dequeue(){
	if(first < 0 || last < 0)
	{
		printf("asdfasdf");
		return;
	}

	if(last >= first)
		return -1;
	return queue[last++];
}


int qwer_main()
{

	int nCount;		/* 문제의 테스트 케이스 */
	
	int n = 0;
	char tmp = 0;
	int k = 0;
	int i;
	int qwer = n;
	int itr = 0;
	int qq;

	scanf("%d", &nCount);	/* 테스트 케이스 입력 */
	for(itr=0; itr<nCount; itr++)
	{
		n = 0;
		tmp = 0;
		k = 0;
		i = 0;
		
		memset(queue,0,sizeof(queue));
		printf("#testcase%d\n",itr+1);

		scanf("%d",&n);
		for(i = 1; i <= n ; i++)
		{
			enqueue(i);
		}

		scanf("%d",&k);
		qwer = n;
		for( qwer = 0; qwer < n; qwer++)
		{
			qq = 0;
			for( i = 0; i < k-1; i++)
			{

				qq = dequeue();

				enqueue(qq);

			}
			qq = dequeue();
			if(qq == -1)
					break;
			printf("%d ",qq);
		}
		printf("\n");

	}

	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 

}
