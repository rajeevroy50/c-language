#include<stdio.h>
void swap(int*a, int*b);
void main()
{
	int x=3, y=5;
	swap(&x,&y);
	printf("x=%d & y=%d\n",x,y);
}


void swap(int*a,int*b)
{
	int t=*a;  // t= 3
	*a=*b;     // a=5
	*b=t;      // b=3
}
