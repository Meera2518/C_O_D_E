#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	int falanu;
	int dhiknu;
	int arr[100];
	printf("enter the arraysize");
	scanf("%d",&dhiknu);
	
	
	for(falanu=0;falanu<dhiknu;falanu++)
	{
		printf("enter the elements");
		scanf("%d",&arr[falanu]);
	}
	for(falanu=0;falanu<dhiknu;falanu++)
	{
		printf("%d",arr[falanu]);
	}
	
	return 0;
}
