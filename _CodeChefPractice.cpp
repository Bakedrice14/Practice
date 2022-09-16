#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t[4], ans = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> t[i];
        if (t[i] >= 10)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}