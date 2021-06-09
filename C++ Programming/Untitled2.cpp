#include<stdio.h>
void main()
{
	int a=2518;
	int *mb;
	
	mb = &a;
	printf("%d%d%d",a,*mb,mb);
}
