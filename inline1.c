#include<stdio.h>
inline int cube(int c)
{
	return c*c*c;
		
}

main()
{
	int tmp;
	tmp=cube(5);
	printf("%d",tmp);
	
}

