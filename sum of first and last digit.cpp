#include<stdio.h>
main()
{
	int x,y,last=0,first=0,sum=0;
	printf("\nEnter two digit number");
	scanf("%d",&x);
	y=x;
	
	last=x%10;
	while(y>0)
	{
		first=y%10;
		y=y/10;
	}
	sum=first+last;
	printf("\nsum = %d+%d = %d",first,last,sum);
}
	


