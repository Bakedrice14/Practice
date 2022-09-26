#include <iostream>
using namespace std;
int intLength(int number)
{
    int length = 0, num = number;
    while (num)
    {
        num /= 10;
        length++;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, inc = 0, div = 1;
        cin >> x;
        int terminated = 1;
        int length = intLength(x);
        for (int i = 0; i < intLength(x); i++)
        {
            int pangkat = 10 * length;
            div = x / pangkat;

            if (div == 4)
            {
                inc++;
                // cout << inc << endl
                //      << endl;
            }
            terminated = div * pangkat;
            x -= terminated;
            length--;
        }
        cout << inc << endl;
    }
    return 0;
}
