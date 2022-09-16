#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y, ans;
        cin >> x >> y;
        if (y <= x * 10)
        {
            cout << "cloth" << endl;
        }
        else
        {
            cout << "disposable\n";
        }
    }

    return 0;
}