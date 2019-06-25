//TO PRINT NTH TERM OF FIBONACCI SERIES

#include<iostream>
using namespace std;
int main()
{
 int i,n,x=0,y=1,term=0;

 cin>>n;

 if(n==1)
    cout<<endl<<0;
 if(n==2)
    cout<<endl<<1;

 for(i=3;i<=n;i++)
 {
     term=x+y;
     x=y;
     y=term;
     if(i==n)
        cout<<endl<<term;
 }
return 0;
}
