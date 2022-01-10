#include<stdio.h>
void main()
{
	int i=1,n,p=1;
	printf("enter n value");
	scanf("%d",&n);
	for(i;i<=n;i++)
	{
		p=p*i;
	}
	printf("factorial is : %d",p);
}
