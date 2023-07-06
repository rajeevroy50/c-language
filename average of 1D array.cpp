#include<stdio.h>
main()
{
	int no,a[100],i,sum=0,avg,j;
	printf("enter number of elements");
	scanf("%d",&no);
	
	for(i=0; i<no; i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
    for(i=0; i<no; i++)
    {
    	printf("%d\t",a[i]);
    	
	}
	for(j=0; j<no; j++)
	{
		sum=sum+a[j];
	}
	avg=sum/no;
	printf("\n--------------------\n");
	printf("average is %d",avg);
}
