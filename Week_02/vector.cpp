// Push_back()
// size()
// pop_back()
// back()
// front()
// clear()
// empty()
// resize()
// sort()
// reverse()
// max_element()
// min_element()

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }

    // auto it = v.begin();
    // for (auto it = v.begin(); it != v.end(); it++)
    //     cout << *it << " ";

    // for(auto abu : v)
    //     cout << abu << " ";

    // sort(v.begin(), v.end()); // Ascending order a sort kore;
    // sort(v.rbegin(), v.rend()); // Descending order a sort kore;
    // sort(v.rbegin(), v.rend(), greater<int>()); // Descending order a sort kore;
    // sort(v.begin() + 1, v.begin() + 4);

    // int max = *max_element(v.begin(), v.end());
    // int min = *min_element(v.begin(), v.end());
    // cout << max << "\n";
    // cout << min << "\n";

    // reverse(v.begin(), v.end());

    for (auto val : v)
        cout << val << " ";

    return 0;
}