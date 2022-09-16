#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, ans;
        ans = 100;
        cin >> x;
        ans -= x;
        cout << ans << endl;
    }

    return 0;
}