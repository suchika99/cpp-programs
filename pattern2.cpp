/*PROGRAM TO PRINT PATTERN
    0
    1 1
    2 3 5
    8 13 21 34
 FOR N=4 AND SO ON */

#include<iostream>
using namespace std;
int main()
{
    int n,row,col,a,b,c;
    a=0;
    b=1;
    c=0;
    cin>>n;
    row=1;
    while(row<=n)
    {
        col=1;
        while(col<=row)
        {
            cout<<a;
            c=a+b;
            a=b;
            b=c;
            col=col+1;

            }
            cout<<endl;
            row=row+1;
    }

    return 0;
}
