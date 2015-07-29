#include <stdio.h>
#include <string.h>


int test3_main(char *str)
{
	int n = 5;
	int cur = 0;
	int j = 0;
	int str_len = strlen(str);
	int i;
	printf("hello::%s\n",str);

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

int main_test3_m()
{
	int nCount;		/* 문제의 테스트 케이스 */
	//cin >> nCount;	/* 테스트 케이스 입력 */
	int itr;
	scanf("%d", &nCount);
	for(itr=0; itr<nCount; itr++)
	{
		char str[100] = {0};
		int num;
		int n;
		//cin >> num;
		scanf("%d", &num);
		for(n = 0; n < num; n++)
			scanf("%d", &str[n]);
			//cin >> str[n];
		//cout << "#testcase" << (itr+1) << endl;
		printf("#testcase%d\n",itr+1);
		test3_main(str);
	}
	return 0;	/* 반드시 return 0으로 해주셔야합니다. */ 
}