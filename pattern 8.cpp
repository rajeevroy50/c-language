#include<stdio.h>
main()
{
	int r,c;
	for(r=5; r<=9; r++ )
	{
		for(c=5; c<=r; c++)
		{
			printf("4%d",c);
		}printf("\n");
	}
}
