#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    char a1[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int s[5];
    char arr[5];
    int m=0;
      cout<<"enter your numeric string";
 for(int w1=0;w1<5;w1++){
   cin>>s[w1];
 }
    for(int i=0;i<5;i++)
    {
          arr[i]=a1[(s[i])];
        i++;

    }
    for(int j=sizeof(arr);j>0;j--)
    {
     cout<<arr[j-1];
    }
    getch();
}
