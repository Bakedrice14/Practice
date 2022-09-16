#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y, z;
        int ans;
        cin >> x >> y >> z;
        x *= 5;
        y *= 10;
        ans = (x + y) / z;

        cout << ans << endl;
    }

    return 0;
}