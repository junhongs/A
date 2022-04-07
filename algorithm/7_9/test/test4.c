/*

VC, GCC���� ���

*/

#include <stdio.h>
#include <string.h>

int top = 0;
int stack[100] = {0};

int pop(){
	if(!top)
		return -1;
	return stack[--top];
}

void push(int c){
	stack[top++] = c;
}

int find_stra(char *str)
{

	int n = strlen(str);
	int i,j,k;
	for( i = 0; i < n; i++)
	{
		if(str[i] == '(')
			push(i);
		else if(str[i] == ')')
		{
			j = pop();
			if( j == -1)
			{
				printf("not match\n");
				return -1;
			}
		}
	}

	if( pop() != -1)
	{
		printf("not match\n");
		return -1;
	}
	return 0;

}
int find_str(char *str)
{

	int n = strlen(str);
	int i,j,k;
	for( i = 0; i < n; i++)
	{
		if(str[i] == '(')
			push(i);
		else if(str[i] == ')')
		{
			j = pop();
			if( j == -1)
			{
				return -1;
			}
			printf("%d %d\n",j,i);
		}
	}

	if( pop() != -1)
	{

		return -1;
	}
	return 0;

}

int main_test4()
{


	int itr;
	int nCount;		/* ������ �׽�Ʈ ���̽� */
	
	
	char str[100] = "(asd()f)";
	/*
	find_str(str);

		return 0;
		*/

	scanf("%d", &nCount);	/* �׽�Ʈ ���̽� �Է� */

	for(itr=0; itr<nCount; itr++)
	{

		printf("#testcase%d\n",itr+1);


		scanf("%s",str);
		if(find_stra(str) != -1)
			find_str(str);
		/*

		�˰����� ���� �κ�

		*/

	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}