#include<stdio.h>
void main()
{
	int i=1,n;
	printf("enter the value ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   if(i%2==0)
	   {
	   	printf("%d ",i);
	   }
	}
}
