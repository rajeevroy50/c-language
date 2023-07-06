#include<stdio.h>
int rajeev(int a);
int main()
{
  int no;
  printf("enter no");
  scanf("%d",&no);
  rajeev(no);
  printf("%d",rajeev(no));
}
int rajeev(int a)
{
	return a*a*a;
}
