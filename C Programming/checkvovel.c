// wap to check a e i o u in character
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("enter the charter : ");
    scanf("%c",&ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("%c to vovel che haha",ch);
    }
    else
    {
        printf("%c vovel nai bhai moj karo ",ch); //run kar ane complie kari ne    
    }  
    return 0;
}