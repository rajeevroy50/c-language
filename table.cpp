#include<stdio.h>
main()
{
	int no,i,temp;
	printf("Enter table no");
	scanf("%d",&no);
	
	for(i=1; i<=10; i++)
	{
		temp= i*no;
		printf("%d*%d= %d\n",no,i,temp);
	}
}
