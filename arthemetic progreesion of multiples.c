#include<stdio.h>
int main()
{
	int x,y,s,n,l;
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("enter the value of y:");
	scanf("%d",&y);
	if(y>=x)
	{
		n=y/x;
		l=x*(y/x);
		s=((n*x+n*l)/2);
		printf("sum of multiples of %d under %d is: %d",x,y,s);
	}
	else
	{
		printf("invaild");
	}
}
