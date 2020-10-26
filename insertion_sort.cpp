#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n){

    int i = 1;
    int lv, temp;
    while(i < n)
    {
        lv = i - 1;
        temp = arr[i];
        while(lv >= 0)
        {
            if(arr[lv] > temp)
                arr[lv+1] = arr[lv];
            else

            { arr[lv+1] = temp;
                break;
            }

            lv = lv - 1;
        }

        if(lv == -1)
            arr[0] = temp;
        i = i + 1;
    }

}

int main()
{
    clock_t start, endc;
    int n = 1000;
	int a[1000];
	for(int i = 0; i < n; i++)
	    a[i] = rand()%1000;


    start=clock();
    InsertionSort(a, n);
    endc=clock();

    double time_taken = (endc - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;


}
