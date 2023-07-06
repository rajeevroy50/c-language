#include<stdio.h>
main()
{
	int a=10,b=20,c;
	
	printf("before swapping the value of a and b\n");
	printf("%d\n",a);
	printf("%d\n",b);
	
	c=a; // c=10
	a=b; // a=20
	b=c; // b=10
	
	printf("after swappimg the value of a and b\n");
	printf("%d\n",a);
	printf("%d\n",b);
	
}
