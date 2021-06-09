// create calculator that perform basic task 
//like sum subtration multiplication and division

#include<conio.h>
#include<stdio.h>
int main()
{
    int a;
    int b;
    float total = 0;
    char choice; // etle + - * /
    printf("Enter Choice : ");
    scanf("%c",&choice);

    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);



    switch(choice)
    {
        case '+': 
        total = a + b;
        printf("sum is : %f ", total);
        break;

        case '-': 
        total = a - b; // badbaki karo sum ave che jo output  ma save kari ne run kar
        printf("badbaki is : %f ", total);
        break;

        default:
            printf("Error! operator is not correct");

    }
    return 0;
}