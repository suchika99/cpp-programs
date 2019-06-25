/*PROGRAM TO PRINT PATTERN
        1
      2 2 2
    3 3 3 3 3
      2 2 2
        1
 FOR N=5 AND SO ON */

#include<iostream>
using namespace std;
int main()
{
    int n,row,col,k;
    cin>>n;
    row=1,k=1;
    while(row<=n)
    {
        col=1;
        while(col<=n)
        {
            if(col<=n/2+1-k || col>=n/2+1+k)
                cout<<" ";
            else
                cout<<k;
            col=col+1;

            }
            cout<<endl;
            row=row+1;
            if(row<=n/2+1)
                k=row;
            else
                k=n+1-row;
    }

    return 0;
}
