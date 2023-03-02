#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string st = "abcdefghijklmnop";
    // st.clear();
    // cout << st << " " << st.size() << "\n";

    /*  string st = "abcdefghijklmnop";
     cout << st << " " << st.size() << "\n";
     st.resize(5);
     cout << st << " " << st.size() << "\n"; */

    string st = "abcdefghijklmnop";
    cout << st << " " << st.size() << "\n";
    // st.clear();
    cout << st << " " << st.size() << "\n";

    if(st.empty())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}