#include<stdio.h>
main()
{
	int i,j,s;
	for(i=5; i>=1; i--)
	{
		for(s=i; s>=1; s--)
		{
			printf(" ");
		}
		for(j=5; j>=i; j--)
		{
			printf("%d",j);
		}
		for(j=i+1; j<=5; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
