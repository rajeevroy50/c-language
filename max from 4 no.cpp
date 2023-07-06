#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter four number\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b&&a>c&&a>d)
	printf("max is = %d,a");
	
	else if(b>c&&b>d)
	printf("max is = %d,b");
	else if (c>d)
	printf("max is = %d,c");
	else
	printf("max is = %d,d");
	return 0;
}
