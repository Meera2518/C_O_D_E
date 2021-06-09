#include<stdio.h>
#include<conio.h>
int sum(int,int);
int sub(int,int);
void main()
{
	int a, b, ans;
	int d, c, ans1;
	scanf("%d%d",&a,&b);
	ans=sum(a,b);
	scanf("%d%d",&d,&c);
	ans1=sub(d,c);
	printf("sum Answer =%d\n",ans);
	printf("sub Answer =%d\n",ans1);
}
int sum (int x,int y)
{
	int result;
	result = x+y;
	return (result);
}
int sub (int m,int n)
{
	int result;
	result = m-n;
	return (result);
}
