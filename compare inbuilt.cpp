#include<iostream>
#include<algorithm>
using namespace std;

bool compare(char i,char j)
{
    return (i<j);
}
int main()
{
char data[5];

for(int i=0;i<5;i++)
{
    cin>>data[i];

}
sort(data,data+5,compare);
for(int i=0;i<5;i++)
{
    cout<<data[i]<<" ";
}
    return 0;
}
