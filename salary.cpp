#include<stdio.h>
main()
{
	int base,hra,da,ta,gross;
	 printf("enter base salary");
	 scanf("%d",&base);
	  printf("enetr hra ");
	  scanf("%d",&hra);
	printf("enter da");
	scanf("%d",&da);
	printf("enter ta");
	scanf("%d",&ta);
	
	gross= base+hra+da+ta;
	printf("gross salary is%d",gross);
}
