#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {5, 4, 3, 2, 1};
    int len = sizeof(a) / sizeof(a[0]);

    sort(a, a + len);
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}