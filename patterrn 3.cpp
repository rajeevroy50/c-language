#include<stdio.h>
main()
{
	int no,r,c;
	printf("enter no");
	scanf("%d",&no);
	
	for (r=5; r>=1; r--)
	{
		for(c=5; c>=r;c--)
		{
			printf("%d",c);
	}
			 printf("\n");
}
}
