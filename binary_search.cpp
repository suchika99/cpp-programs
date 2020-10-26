    #include <bits/stdc++.h>
    using namespace std;

    int binarySearch(int a[], int n, int num) {
        int low = 0, high = n;
        int mid =(low + high - 1) / 2;
        while(high >= low)
        {
            if (a[mid] == num)
                return mid;
            else if (a[mid] > num)
            {
                high = mid - 1;
            }
            else
                low = mid + 1;

            mid = (low + high - 1) / 2;

        }

        return -1;
    }

    int main() {

        clock_t start, endc;

        int n, num, a[10000];
        for(int i = 0; i < 10000; i++)
            a[i] = i;

        cout << "Enter number to be found: ";
        cin >> num;

        start = clock();
        int position = binarySearch(a, 10000, num);
        if (position == -1)
            cout << "Not found \n";
        else
            cout << "Number found at index " << position << endl;

        endc  = clock();
        double time_taken = (endc - start) / double(CLOCKS_PER_SEC);
        cout << "Time taken by program is : " << fixed << time_taken << setprecision(5);
        cout << " sec " << endl;
       return 0;
    }


