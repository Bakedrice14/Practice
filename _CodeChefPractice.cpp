#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int e, n, c;
        double b;
        cin >> n >> e >> c;
        b = double(n) / c;
        cout << b << endl;
        if (b <= e)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}