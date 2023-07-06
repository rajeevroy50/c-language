#include<stdio.h>
main()
{
	int r,c,s;
	for(r=1; r<=5; r++)
	{
		for(s=4; s>=r; s--)
		{
			printf(" ");
			
		}
		for(c=1; c<=r; c++)
		{
			printf("%d",c);
			
		}printf("\n");
	}


    int i,j,k;
    for(i=2; i<=5; i++)
    {
    	for(k=1; k<i; k++)
    	{
    		printf(" ");
		}
		for(j=i; j<=5; j++)
		{
			printf("%d",j);
		} 
		printf("\n");
	}
}
