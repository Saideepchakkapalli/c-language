//program to find net salary of employ pf it pt gross
#include<stdio.h>
void main()
{
	int pf,pt,gs,it;
	printf("enter the pf,pt,gs,it");
	scanf("%d%d%d%d",&pf,&pt,&gs,&it);
	printf("net salary= %d",gs-(pf+pt+it));
}
