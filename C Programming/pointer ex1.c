#include<stdio.h>

int main()
{
  int arr[2][4];
  int a;
  int b;
  for(a=0;a<2;a++)
  {
  	for(b=0;b<4;b++)
	  {
	  	printf("enter the value");
	  	scanf("%d%d,&arr[a][b]");
	  }	  
  }
  
  // print mate 
  for(a=0;a<2;a++)
  {
  	for(b=0;b<4;b++)
  	{
  		printf("%d",arr[a][b]);
	}
  }
  
	return 0;	
}
