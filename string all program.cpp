#include<stdio.h>
#include<string.h>
main()
{
	char a[]={ 'r','a','j','i','v'};
	char name[]= "chai piyo biscuit khao";
	char c[]="pan bahar"; 
	char s1[]="Hello";
	char s2[]="hello";
	
	printf("%s",name);
	printf("%s\n",a);
	printf("%d\n",strlen(name));
	printf("%s\n",strcat(name,c));
	printf("%s\n",strrev(name));
	
	printf("%s\n",strlwr(s1));
	printf("%s\n",strupr(s2));
}
