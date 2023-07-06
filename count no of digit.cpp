#include<stdio.h>
main()
{
	int number,remainder,count=0;
	printf("\n Please enter any number\n");
	scanf("%d",&number);
	
	while(number>0)
	{
		number = number / 10;
		count = count+1;
	}
	printf("\n Number of digit in a given number = %d", count);
	return 0;
}
