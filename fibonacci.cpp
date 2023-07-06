#include<stdio.h>
int fibo(int i);
main()
{
	int i;
	for(i=0; i<10; i++)
	{
		printf("%d\n",fibo(i));
	}
	
}
   int fibo(int i)
   {
   	if (i==0)
   {
   	return 1;
   }
   return fibo (i=1)+fibo(i-2);
}
