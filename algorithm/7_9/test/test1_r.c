#include <stdio.h>
#include <string.h>

int a_main(char *str)
{
	int n = 5;
	int cur = 0;
	int j = 0;
	int str_len = strlen(str);
	int i;
	for(i = 1; i <= str_len; i++)
	{
		cur = 0;
		for(; j < str_len; j++)
		{

			if(str[j] - '0' == i)
			{
				j++;
				cur = 1;
				break;
			}
		}
		if(cur == 1){
			continue;
			cur = 0;
		}
		else if( j >= str_len - 1)
		{
			//cout<< "NO" << endl;
			printf("NO\n");
			return 0;
		}
	}

	//cout<< "YES"<< endl;
	printf("YES\n");
	return 0;
}





int asdfaaamain()
{

	int itr;
	int nCount;		/* ������ �׽�Ʈ ���̽� */
	char str[100] = {0};
	int num;
	int n;
	scanf("%d", &nCount);	/* �׽�Ʈ ���̽� �Է� */

	for(itr=0; itr<nCount; itr++)
	{
		memset(str,0,sizeof(str));
		printf("#testcase%d\n",itr+1);

//		cin >> num;
		scanf("%d",&num);
		for(n = 0; n < num; n++)
			//cin >> str[n];
			scanf("%c ",&str[n]);

		printf("%s string\n",str);
		a_main(str);
		/*

		�˰����� ���� �κ�

		*/

	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}