//PROGRAM TO PRINT PRIME NUMBER BETWEEN 2-N

#include<iostream>
using namespace std;
int main()
{

    int n,lv,i;
    lv=2;
    cin>>n;
    while(lv<=n)
    {
        i=2;
        while(i<=(lv-1))
            {
                if(lv%i==0)
                    break;

            i=i+1;
            }
            if(i==lv)
                cout<<lv;
            lv=lv+1;
    }
    return 0;
}
