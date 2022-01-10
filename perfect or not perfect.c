#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
		 sum+=1;
		}
	}
	if(sum==n)
	{
	
		printf("perfect");
    }
    else
    {
    	printf("not perfect");
    }
}
