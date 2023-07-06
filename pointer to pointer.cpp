#include<stdio.h>
main()
{
	int a=20;
	int*ptr;
	int**pptr;
    
    ptr=&a;
    pptr=&ptr;
    
    printf("%d\n",a);
    printf("%d\n",*ptr);
    printf("%d\n",*pptr);
}  
