/*PROGRAM TO PRINT PATTERN
        *** ***
        **   **
        *     *
        **   **
        *** ***
 FOR N=5 AND SO ON */

#include<iostream>
using namespace std;
int main()
{
    int n,row,col,k,j;
    cin>>n;
    row=1,k=1;
    while(row<=n)
    {
        col=1;
        while(col<=n+2)
        {
            if(col<=n/2+2-k || col>=n/2+2+k)
                cout<<"*";
            else

                  cout<<" ";

            col=col+1;

            }
            cout<<endl;
            row=row+1;
            if(row<=n/2+1)
            {
                k=row;

            }
            else
             {
                 k=n+1-row;

             }
    }

    return 0;
}
