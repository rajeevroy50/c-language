#include<stdio.h>
main()
{
	char value;
	printf("enter value");
	scanf("%c",&value);
	
	
	if((value>=65 && value<=90) || (value>=97 && value<=122))
	{
		printf("alphabets");
		
	}
	else if((value>=48 && value<=55))
	{
		printf("number");
		
	}
	else
	{
		printf("special character");
	}
}
