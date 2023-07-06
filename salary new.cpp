#include<stdio.h>
main()
{
	int base,hra,da,ta,gross;
	printf("enter base salary");
	scanf("%d",&base);
	
	hra=(10*base)/100;
	ta=(8*base)/100;
	da=(5*base)/100;
	
	gross=base+da+ta+hra;
	printf("gross salary is %d",gross);
}
