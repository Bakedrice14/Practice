#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    while (t--)
    {
        int n, m, ans;
        cin >> n >> m;
        n *= 2;
        m *= 4;
        ans = n + m;
        cout << ans << endl;
    }

    return 0;
}
