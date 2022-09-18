#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, inc = 0;
        cin >> x >> y;
        for (int i = 0; i < x; i++)
        {
            int h[x];
            cin >> h[i];
            if (y < h[i])
            {
                inc++;
            }
        }
        cout << inc << endl;
    }
    return 0;
}
