
#include <stdio.h>
#define SIZE 300000
int student[SIZE];
int rank[SIZE];
int n;
int main()
{

	int itr;
	int nCount;		/* ������ �׽�Ʈ ���̽� */

	scanf("%d", &nCount);	/* �׽�Ʈ ���̽� �Է� */

	for(itr=0; itr<nCount; itr++)
	{

		printf("#testcase%d\n",itr+1);

		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&student[i]);
			rank[i] = 1;
		}

		for(int i=0;i<n - 1;i++){
			for(int j=i+1;j<n;j++){
				if(student[i] < student[j]){
					rank[i]++;
				}
				else if(student[i] > student[j]){
					rank[j]++;
				}
			}
		}

		for(int i=0;i<n;i++){
			printf("%d\n",rank[i]);
		}

	}

	return 0;	/* �ݵ�� return 0���� ���ּž��մϴ�. */ 

}