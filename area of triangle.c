#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	double s,area;
	printf("enter the sides");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%lf",area);
}
