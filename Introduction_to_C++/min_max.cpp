#include<bits/stdc++.h>
using namespace std;

int main()
{
    /* int a = 10, b = 500, c = 250;
    int mn;
    mn = min(a, min(b, c));
    cout << mn << "\n"; */

    int arr[5] = {5, 3, 2, 1, 4};
    int mn = arr[0];
    for (int i = 1; i < 5; i++)
    {
        mn = min(mn, arr[i]);
        cout << "index-" << i << " -> " << mn << " \n";
    }
    cout << mn << endl;

    return 0;
}