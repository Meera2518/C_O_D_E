#include<iostream>
using namespace std;

void printArr()
{
   int n[10] = {10,11,21,31,41,51,61,71,81,91};
   for (int i =0; i<10; i++)
   {
       cout<<n[i]<<endl;
   }
}

int main()
{
    printArr();
    return 0;
}