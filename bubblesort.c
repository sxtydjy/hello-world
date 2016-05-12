#include <stdio.h>
#define N 6
void main()
{
	int d[N];
	int i,j,t;
	int flag=0;
    printf("input %d numbers :\n",N); 
	for (i=0;i<N;i++)
		scanf("%d",&d[i]);
	printf("\n");
	for(j=0;j<N-1;j++)
	{
		flag=0;
		for(i=0;i<N-1-j;i++)//一趟排序
			if (d[i]>d[i+1])
			{
				t=d[i];
				d[i]=d[i+1];
				d[i+1]=t;
				flag=1;
			}
		for(i=0;i<N;i++)//输出每趟排序的结果
			printf("%d ",d[i]);
		printf("\n");
		if(0==flag)
			break;
	}
     printf("the sorted numbers :\n");
     for(i=0;i<N;i++)
        printf("%d ",d[i]);
     printf("\n");
}