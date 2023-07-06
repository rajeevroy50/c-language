#include<stdio.h>
main()
{
	int i,j,r,c;
	int a[100][100];
	
	 printf("enter rows");
	 scanf("%d",&r);
	 printf("enter columns");
	 scanf("%d",&c);
	 
	 for(i=0; i<r; i++)
	 {
	 	for(j=0; j<c;j++)
	 	{
	 		printf("a[%d][%d]=",i,j);
	 		scanf("%d",&a[i][j]);
		 }
	 }
	 for(i=0;i<r;i++)
	 {
	 	for(j=0; j<c; j++)
	 	{
	 		printf("%d\t",a[i][j]);
	 		
		 }printf("\n");
	 }
}
