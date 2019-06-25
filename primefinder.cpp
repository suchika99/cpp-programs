//PROGRAM TO CHECK WHETHER ENTERED NUMBER IS PRIME OR COMPOSITE

#include<iostream>
using namespace std;
int main()
{
 int i=2,n;
 cin>>n;

 while(i<n)
 {
     if(n%i==0)
        {
        cout<<"composite";
        return 0;
        }
        else
            i=i+1;


 }
 cout<<endl<<"prime";
 return 0;
}
