#include<iostream>
using namespace std;

int main()
{

int a,fact=1;
cout<<"enter any no";
cin>>a;

while(a!=0)
{
    fact=fact*a;
    a--;


}
cout<<fact;
return 0;
}
