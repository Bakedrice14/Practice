#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int ans, k, x;
        cin >> k >> x;
        ans = k - x;
        if (k < x)
        {
            break;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}