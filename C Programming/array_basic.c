#include<stdio.h>
int main()
{
	int a[100];
	int k;
	int i;
	int n;
	int val;
	int pos;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter position ti insert");
	scanf("%d",&pos);
	printf("enter value:");
	scanf("%d",&val);
	for(k=n-1;k>=pos-1;k--)
	{
		a[k+1] =a[k];
	}
	a[pos-1] = val;
	printf("after insertion array is:");
	for(i=0;i<=n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
	


