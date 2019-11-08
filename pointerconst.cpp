#include<iostream>
using namespace std;
int& ref(int& param)
{

    return (++param);
}

int main()
{
    int x=10,y=15,z=14;

    y=ref(x);

cout<<x<<" "<<y<<endl;


//ref(x)=z;
cout<<x<<"  "<<y;
return 0;
}

