#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int mod, x, y, z;
        double ans;
        cin >> x >> y >> z;
        x *= 5;
        y *= 10;
        mod = (x + y) % z;
        ans = double(x + y) / z;
        ans = floor(ans);
        cout << ans << endl;
    }

    return 0;
}