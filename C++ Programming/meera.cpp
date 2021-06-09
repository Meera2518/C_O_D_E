#include<iostream>
using namespace std;

void myName() {
  cout << "meera jalalji";
}

int sumkaro (int a, int b)
{
    int total;
    total = a + b;
    return total;
}

int sub(int a,int b)
{
    int total;
    total = a - b;
    return total;
}

int mul(int a, int b, int c)
{
    int total;
    total=a*b*c;
    return total;
}

int main()
{
    int x, y;
    cout<<"value nakho"<<endl;
    cin>>x>>y;
    myName();
    cout<<endl;
    cout<<"sum:"<<sumkaro(x,y)<<endl;
    cout<<"sub:"<<sub(x,y)<<endl;
    cout<<"mul:"<<mul(x,y,10);
    return 0;
}