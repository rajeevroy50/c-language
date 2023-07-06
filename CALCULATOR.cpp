#include<stdio.h>
main()
{
	int a,b,c,add,sub,mult,div;
	printf("enter first no");
	scanf("%d",&a);
	printf("enter second no");
	scanf("%d",&b);
	printf("enter operator");
	scanf("%s",&c);
	
	switch(c)
	{
		case '+':
			{
				add  =a+b;
				printf("addition is %d",add);
				break;
			}
			case '-':
			{
				sub  =a-b;
				printf("subtraction is %d",sub);
				break;
			}
			case '*':
			{
				mult  =a*b;
				printf("multiplication is %d",mult);
				break;
			}
			case '/':
			{
				div  =a/b;
				printf("division is %d",div);
				break;
			}
			default :
				{
					printf("enter valid choice");
					break;
				}
	}
	
	
}
