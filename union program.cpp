#include<stdio.h>
#include<string.h>
union student
{
	int no;
	char name[30];
	
};
main()
{
union student s1;
	
	s1.no=1;
	printf("%d\n",s1.no);
	
	strcpy(s1.name,"rajeev");
	printf("%s\n",s1.name);
}
