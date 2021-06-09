#include<stdio.h>
void main()
{
	int a[100],k,i,n,val,pos;
	
	printf("Enter The size of array:");
	scanf("%d",&n);
	
	printf("\n Enter Array Elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\n Enter Position to insert:");
	scanf("%d",&pos);
	
	printf("\n Enter the  Value ");
	scanf("%d",&val);
	for(k=n-1;k>=pos-1;k--)
	{
		a[k+1] = a[k];
	}
	a[pos-1]=val;
	
	printf("\n After insert :");
	for(i=0;i<=n;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
}
	

