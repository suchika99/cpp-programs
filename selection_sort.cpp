#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n) {

	int jc = 1, sp = 0;
	while (jc <= (n - 1)) {
		int lv = 1;
		while ((sp + lv) <= (n - 1)) {
			if (arr[sp] > arr[sp + lv]) {
				arr[sp] = arr[sp] ^ arr[sp + lv];
				arr[sp + lv] = arr[sp] ^ arr[sp + lv];
				arr[sp] = arr[sp] ^ arr[sp + lv];
			}
			lv = lv + 1;
		}
		jc = jc + 1;
		sp = sp + 1;
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
    SelectionSort(a, n);
    endc=clock();

    double time_taken = (endc - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;

}



