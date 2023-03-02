#include<bits/stdc++.h>
using namespace std;

int main()
{
    // c programming ar dynamic memory allocation
    // int *p = (int *)calloc(10,sizeof(int));
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << p[i] << endl;
    // }
    // free(p);

    int *ptr = new int[10]{0};
    for (int i = 0; i < 10; i++)
    {
        cout << ptr[i] << endl;
    }
    delete ptr;
    return 0;
}