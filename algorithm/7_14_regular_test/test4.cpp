/*

VC, GCC���� ���

*/

#include <stdio.h>

int maina()
{

	int itr;
	int nCount;		/* ������ �׽�Ʈ ���̽� */

	int w=0,h=0,p=0,q=0;
	int a=0,b=0,n=0;
	//int 

	scanf("%d", &nCount);	/* �׽�Ʈ ���̽� �Է� */

	for(itr=0; itr<nCount; itr++)
	{

		printf("#testcase%d\n",itr+1);
		a = b = 0;
		
		scanf("%d %d",&w,&h);
		scanf("%d %d",&p,&q);
		scanf("%d",&n);



		
		a = n - ( w - p);
		if(a <= 0)
			//printf("%d ",n+p);
			printf("%d ",n+p);
		else if(!(a / w) % 2)
			printf("%d ",w - a % w);
			//printf("%d ",w - a % w);
		else
			printf("%d ",a % w);



		b = n - ( h - q);
		if(b <= 0)
			//printf("%d\n",n+q);
			printf("%d\n",n+q);
		else if(!( (b / h) % 2) )
			//printf("%d\n",h-b%w);
			printf("%d\n",h-b%h);
		else if( ( (b / h) % 2) )
			printf("%d\n",b%h);
//6 4 0 0 



//		printf("%d,%d\n",a,b);	
	}

	return 0;

}