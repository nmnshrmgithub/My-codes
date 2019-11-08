#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int rows=0,k=0;
cout<<"enter the no of rows";
cin>>rows;
    for(int i=1;i<=rows;++i,k=0)
    {
        for(int space=1; space<=rows-i;++space)
        {
            cout<<" ";

            while(k !=2*i-1)
            {

                cout<<"* ";
               ++k;
               int m=1;
                for(int m=0;m%2!=0;m++)
                {

                cout<<"A ";

                }           }


        }

        cout<<"\n";

    }



getch();
}
