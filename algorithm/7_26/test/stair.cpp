#include <iostream>
#include <stdio.h>

int main()
{
	int sum[350];
	int stair[350];
	int N;

	int temp1, temp2;
	int i, j;

	int itr;
	int nCount;		/* ������ �׽�Ʈ ���̽� */

	scanf("%d", &nCount);	/* �׽�Ʈ ���̽� �Է� */

	for (itr = 0; itr<nCount; itr++)
	{
		printf("#testcase%d\n", itr + 1);

		scanf("%d", &N);
		memset(stair,0,sizeof(stair));
		memset(sum,0,sizeof(sum));
		for (i = 1; i <= N; i++)
			scanf("%d", &stair[i]);


		for (i = 2; i <= N; i++)
		{
			temp1 = sum[i - 3] + stair[i - 1] + stair[i];
			temp2 = sum[i - 2] + stair[i];
			if (temp1 > temp2)
				sum[i] = temp1;
			else
				sum[i] = temp2;
		}

		printf("%d\n", sum[N]);

	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */

}