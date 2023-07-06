#include<stdio.h>
#include<stdio.h>
main()
{
	FILE *fp;
	 fp= fopen("om,txt","w");
	
	if(fp == NULL)
	{
		printf("not created");
		
	}
	else
	{
		printf("found");
	}
