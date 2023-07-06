#include<stdio.h>
main()
{
	int i,j,r=2,c=2;

	int a[r][c];
	
	float average,sum=0;
	

	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);	
		}
		printf("\n");
		
	}
	
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=a[i][j]+sum;
		}
	}
	average=sum/(r*c);
	printf("%.2f",average);
}

